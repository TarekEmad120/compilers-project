build: 
		bison --yacc parser2.y -d
		flex lexer2.l
		gcc y.tab.c lex.yy.c -o a


run: a.out
	./a.out < instructions.txt

clean:
	rm -f a.out y.tab.c lex.yy.c y.tab.h

.PHONY: all run clean