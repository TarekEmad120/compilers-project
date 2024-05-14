build: 
		flex lexer.l
		 bison -d -v parser.y -v
		 gcc lex.yy.c parser.tab.c


run: a.exe
		./a.exe < instructions.txt 

clean:
	rm -f a.out y.tab.c lex.yy.c y.tab.h

debug: 
		flex lexer.l
		bison -d -v parser.y -v
		gcc -g lex.yy.c parser.tab.c
rundebug:
		gdb ./a.exe
		run
		backtrace

.PHONY: all run clean

