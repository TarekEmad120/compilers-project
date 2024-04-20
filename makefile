build: 
		bison --yacc parser.y -d
		flex lexer.l
		gcc y.tab.c lex.yy.c -o a


run: a.exe
#		./a.exe < input.txt
		./a.exe < input.txt 

clean:
	rm -f a.out y.tab.c lex.yy.c y.tab.h

.PHONY: all run clean