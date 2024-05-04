build: 
        bison --yacc parser2.y -d
        flex lexer2.l
        gcc -o a y.tab.c lex.yy.c

run: a.exe
    a.exe < instructions.txt

clean:
    del /F /Q a.exe y.tab.c lex.yy.c y.tab.h

.PHONY: all run clean