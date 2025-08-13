
# 🌟 Simple Programming Language Compiler using Lex and Yacc

## 📜 Project Overview
This project is part of the **CMP(N)403 Languages and Compilers** course at Cairo University's Faculty of Engineering. The objective is to design and implement a simple programming language using Lex and Yacc compiler generating packages.

## ✨ Features
The compiler supports the following features:
- **Variable and Constant Declarations**
- **Mathematical and Logical Expressions**
- **Assignment Statements**
- **Control Flow Constructs**: If-then-else, while loops, repeat-until loops, for loops, switch statements
- **Block Structure**: Nested scopes with variable declarations
- **Functions**

Additionally, the compiler includes:
- **Symbol Table**: An extensible format for storing variable information
- **Lexical Analyzer**: Implemented using Lex
- **Parser**: Implemented using Yacc with action rules to produce output quadruples
- **Syntax Error Handling**
- **Semantic Analyzer**: Checks for variable declaration conflicts, type mismatches, uninitialized variables, and unused variables

## 🗂 Project Phases

### Phase I
- 🚀 Delivery of lexer and parser (Lex and Yacc files)

### Phase II
- 🛠 Extension of implementations to include:
  - Symbol table design
  - Action rules for output quadruples
  - Proper syntax error handler
  - Simple semantic analyzer

## 📦 Deliverables
- **Source Code**: Complete implementation of the compiler
- **Documentation**:
  - Project overview
  - Tools and technologies used
  - List and description of tokens
  - List and description of quadruples

## 🛠 Tools and Technologies
- **Lex**: For lexical analysis
- **Yacc**: For parsing and syntax analysis
- **C Programming Language**

## 📝 How to Use

1. **Clone the repository**:
    ```bash
    git clone https://github.com/yourusername/your-repo-name.git
    ```
2. **Compile the lexer and parser**:
    ```bash
    make
    ```
3. **Run the compiler**:
    ```bash
    ./compiler your-source-code-file
    ```

## 🔢 Quadruples
The compiler generates quadruples for various operations. Below is a short description of each:
- **JMP L**: Unconditional jump to label L
- **NEG V1, V2**: V2 = -V1
