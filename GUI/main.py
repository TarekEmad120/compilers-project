# gui for the main window for compiler project
# the user will write the code in the left side and the output will be shown in the right side
# the user can run the code and see the output in the right side
# the use can see errors in bottom of the window
# the user can see the symbol table in the right side

import sys
from PyQt5.QtWidgets import QApplication, QMainWindow, QWidget, QVBoxLayout, QHBoxLayout, QTextEdit, QPushButton, QTabWidget, QLabel, QTableWidget, QTableWidgetItem
from PyQt5.QtGui import QFont
from PyQt5.QtCore import Qt
from PyQt5.QtGui import QColor
from PyQt5.QtGui import QBrush
from PyQt5.QtGui import QIcon
from PyQt5.QtGui import QPixmap
from PyQt5.QtGui import QPalette
from PyQt5.QtGui import QLinearGradient
from PyQt5.QtGui import QGradient
from PyQt5.QtGui import QBrush
from PyQt5.QtGui import QPen
from PyQt5.QtGui import QPainter
from PyQt5.QtGui import QFont
import os
import subprocess
from PyQt5.QtWidgets import QPlainTextEdit, QTextEdit, QFrame, QVBoxLayout, QWidget, QApplication, QMainWindow, QVBoxLayout, QHBoxLayout, QTextEdit, QPushButton, QTabWidget, QLabel, QTableWidget, QTableWidgetItem
from PyQt5.QtGui import QFont, QPainter, QColor, QTextFormat
from PyQt5.QtCore import Qt, QRect
from PyQt5.QtCore import QSize


class LineNumberArea(QWidget):
    def __init__(self, editor):
        super().__init__(editor)
        self.codeEditor = editor

    def sizeHint(self):
        return QSize(self.editor.lineNumberAreaWidth(), 0)

    def paintEvent(self, event):
        self.codeEditor.lineNumberAreaPaintEvent(event)


class CodeEditor(QPlainTextEdit):
    def __init__(self):
        super().__init__()
        self.lineNumberArea = LineNumberArea(self)
        self.blockCountChanged.connect(self.updateLineNumberAreaWidth)
        self.updateRequest.connect(self.updateLineNumberArea)
        self.updateLineNumberAreaWidth(0)
        self.setTabStopWidth(20)
        self.setFrameStyle(QFrame.NoFrame)
        self.setLineWrapMode(QPlainTextEdit.NoWrap)
        self.setTabStopWidth(20)
        self.setTabChangesFocus(True)
    def lineNumberAreaWidth(self):
        digits = 1
        max_value = max(1, self.blockCount())
        while max_value >= 10:
            max_value /= 10
            digits += 1
        space = 3 + self.fontMetrics().horizontalAdvance('9') * digits
        return space

    def updateLineNumberAreaWidth(self, _):
        self.setViewportMargins(self.lineNumberAreaWidth(), 0, 0, 0)

    def updateLineNumberArea(self, rect, dy):
        if dy:
            self.lineNumberArea.scroll(0, dy)
        else:
            self.lineNumberArea.update(0, rect.y(), self.lineNumberArea.width(), rect.height())
        if rect.contains(self.viewport().rect()):
            self.updateLineNumberAreaWidth(0)

    def resizeEvent(self, event):
        super().resizeEvent(event)
        cr = self.contentsRect()
        self.lineNumberArea.setGeometry(QRect(cr.left(), cr.top(), self.lineNumberAreaWidth(), cr.height()))

    def lineNumberAreaPaintEvent(self, event):
        painter = QPainter(self.lineNumberArea)
        painter.fillRect(event.rect(), Qt.lightGray)
        block = self.firstVisibleBlock()
        blockNumber = block.blockNumber()
        top = self.blockBoundingGeometry(block).translated(self.contentOffset()).top()
        bottom = top + self.blockBoundingRect(block).height()
        height = self.fontMetrics().height()
        while block.isValid() and (top <= event.rect().bottom()):
            if block.isVisible() and (bottom >= event.rect().top()):
                number = str(blockNumber + 1)
                painter.setPen(Qt.black)
                painter.drawText(0, int(top), self.lineNumberArea.width(), height, Qt.AlignRight, number)
            block = block.next()
            top = bottom
            bottom = top + self.blockBoundingRect(block).height()
            blockNumber += 1

class MainWindow(QMainWindow):
    def __init__(self):

        super().__init__()
        self.setWindowTitle("Compiler Project")
        self.setGeometry(100, 100, 1000, 600)
        self.setWindowIcon(QIcon("icon.png"))
        self.textEdit = CodeEditor()
        self.textEdit.setStyleSheet("""
            background-color: #ffffff;
            border: 1px solid #dddddd;
            border-radius: 4px;
            padding: 10px;
        """) 
        centralWidget = QWidget()
        self.setCentralWidget(centralWidget)
        self.initUI()
        palette = QPalette()
        palette.setColor(QPalette.Background, QColor("#f0f0f0"))
        self.setPalette(palette)

    def initUI(self):
        mainLayout = QHBoxLayout()
        self.centralWidget().setLayout(mainLayout)
        self.setLayout(mainLayout)
        leftLayout = QVBoxLayout()
        mainLayout.addLayout(leftLayout)
        rightLayout = QVBoxLayout()
        mainLayout.addLayout(rightLayout)
        leftLayout.addWidget(self.textEdit)
        self.runButton = QPushButton("Run")
        self.runButton.clicked.connect(self.runCode)
        self.runButton.setStyleSheet("""
            QPushButton {
                border: 2px solid #8f8f91;
                border-radius: 6px;
                background-color: #f0f0f0;
                min-width: 80px;
            }
            QPushButton:hover {
                background-color: #d0d0d0;
            }
        """)
        leftLayout.addWidget(self.runButton)
        outputLabel = QLabel("Output")
        rightLayout.addWidget(outputLabel)
        self.outputText = QTextEdit()
        self.outputText.setReadOnly(True)
        self.outputText.setStyleSheet("""
            background-color: #ffffff;
            border: 1px solid #dddddd;
            border-radius: 4px;
            padding: 10px;
        """)
        rightLayout.addWidget(self.outputText)
        errorLabel = QLabel("Errors")
        rightLayout.addWidget(errorLabel)
        self.errorText = QTextEdit()
        self.errorText.setReadOnly(True)
        self.errorText.setStyleSheet("""
            background-color: #ffffff;
            border: 1px solid #dddddd;
            border-radius: 4px;
            padding: 10px;
        """) 
        rightLayout.addWidget(self.errorText)
        symbolTableLabel = QLabel("Symbol Table")
        rightLayout.addWidget(symbolTableLabel)
        self.symbolTable = QTableWidget()
        self.symbolTable.setEditTriggers(QTableWidget.NoEditTriggers)
        self.symbolTable.setStyleSheet("""
            background-color: #ffffff;
            border: 1px solid #dddddd;
            border-radius: 4px;
            """) 
        self.symbolTable.setColumnCount(2)
        self.symbolTable.setHorizontalHeaderLabels(["Variable", "Value"])
        rightLayout.addWidget(self.symbolTable)

    def runCode(self):
        try:
            code = self.textEdit.toPlainText()
            with open("instructions.txt", "w") as f:
                f.write(code)
            with open("semanticerrors.txt", "w") as f:
                pass
            with open("VMcode.txt", "w") as f:
                pass
            try:
                dir_path = os.getcwd()
                exe_path = os.path.join(dir_path, "GUI/a.exe")
                output= os.popen(exe_path).read()
                
            except Exception as e:
                self.errorText.setText(str(e))
            # read VM output
            with open("VMcode.txt", "r") as f:
                output = f.read()
                self.outputText.setText(output)
            #read semantic errors
            with open("semanticerrors.txt", "r") as f:
                errors = f.read()
                self.errorText.setText(errors)
            # read the symbol table
            with open("symboltable.txt", "r") as f:
                entries = f.read().split("\n\n")
                self.symbolTable.setRowCount(len(entries))
                self.symbolTable.setColumnCount(8)
                self.symbolTable.setHorizontalHeaderLabels(["Name", "Type", "Value", "Scope", "Used", "Initialized", "Is Function","memaddress"])  # Set header labels
                for i, entry in enumerate(entries):
                    lines = entry.split("\n")
                    fields = [line.split(": ")[1] for line in lines]
                    for j, field in enumerate(fields):
                        self.symbolTable.setItem(i, j, QTableWidgetItem(field))


        except Exception as e:
            print(f"An error occurred: {e}")

if __name__ == "__main__":
    app = QApplication(sys.argv)
    window = MainWindow()
    window.show()
    sys.exit(app.exec_())
