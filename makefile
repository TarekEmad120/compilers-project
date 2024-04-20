build: 
		bison --yacc parser.y -d
		flex lexer.l
		gcc y.tab.c lex.yy.c -o a


run: a.out
	./a.out

clean:
	rm -f a.out y.tab.c lex.yy.c y.tab.h

.PHONY: all run clean