build: 
		flex lexer.l
		 bison -d -v parser.y -v
		 gcc lex.yy.c parser.tab.c


run: a.out
		./a.out < instructions.txt 

clean:
	rm -f a.out y.tab.c lex.yy.c y.tab.h

.PHONY: all run clean