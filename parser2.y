%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
	#include "symboltable.h"
    // extern FILE *yyin;
    // extern int yylex();
    // extern int yylineno;
	int myVariable = 0;
    void yyerror(char *);
    int yylex(void);
	extern char* yytext;
	int type;
    bool intialized;
    bool used;
    int scope;
    char *name;
    char *value;
    bool modified;
    bool isfunc;
    int argcount;
    int *argtypes;
	struct SymbolData *ptr;
%}



%token	IDENTIFIER I_CONSTANT F_CONSTANT STRING_LITERAL FUNC_NAME C_CONSTANT

%token	 EXTERN STATIC
%token	CONST VOLATILE
%token	BOOL SHORT INT LONG FLOAT VOID CHAR

%token	CASE DEFAULT IF ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN

%token	INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token	AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token	SUB_ASSIGN  AND_ASSIGN
%token	XOR_ASSIGN OR_ASSIGN

%start translation_unit
%%

translation_unit
	: external_declaration
	| translation_unit external_declaration
	;



external_declaration
	: func_def   		//{printf("%d\n",myVariable++);}
	| declaration 		//{printf("%d\n",myVariable++);}
	;

primary_expression
	: IDENTIFIER {//printf("identifier");
	printf("%d\n",myVariable++);

	}
	| constant //{printf("constant");}
	| string //{printf("string");}
	| '(' exp ')'
	;

constant
	: I_CONSTANT {
		//check if it has single quotes withone character in it only
	myFunction();
	}		/* includes character_constant */
	| F_CONSTANT /* after it has been defined as such */
	| C_CONSTANT {
		//printf("C_Constant %s\n")   ;myVariable++;
	
	//check if it has single quotes withone character in it only
	  if (strlen(yytext) == 3 && yytext[0] == '\'' && yytext[2] == '\'') {
		printf("Character constant: %s\n", yytext);
	  } else {
		//return syntax_error("Invalid character constant");
		yyerror("Invalid character constant");
		//exit the program
		exit(1);
	  }
	}		/* after it has been defined as such */
	;



string
	: STRING_LITERAL
	| FUNC_NAME
	;




postfix_expression
	: primary_expression{printf("primary_expression");myFunction();}
	| postfix_expression '[' exp ']'  { printf("postfix exp exp");myFunction(); }// array access{}
	| postfix_expression '(' ')' {printf("postfix_expression()");myFunction();}
	| postfix_expression '(' argument_expression_list ')' {printf("postfix_expression()");myFunction();}
	| postfix_expression '.' IDENTIFIER//member access
	| postfix_expression INC_OP//postfix increment
	| postfix_expression DEC_OP//postfix decrement
	| '(' type_name ')' '{' initializer_list '}' {printf("type name");}
	| '(' type_name ')' '{' initializer_list ',' '}' {printf("type name");}
	;

argument_expression_list
	: assignment_exp {printf("assignment_exp\n");}
	| argument_expression_list ',' assignment_exp {printf("assignment_exp1 list, exp\n");}
	;

unary_expression
	: postfix_expression {printf("postfix_expression\n");}
	| INC_OP unary_expression{printf("INC_OP unary_expression\n");}
	| DEC_OP unary_expression
	| unary_operator cast_expression {printf("unary_operator cast_expression\n");}
	;

unary_operator
	: '&'
	| '*'
	| '+'
	| '-'
	| '~'
	| '!'
	;

cast_expression
	: unary_expression {printf("unary_expression\n");}
	| '(' type_name ')' cast_expression
	;

mulexp
	: cast_expression
	| mulexp '*' cast_expression
	| mulexp '/' cast_expression
	| mulexp '%' cast_expression
	;

addexp
	: mulexp
	| addexp '+' mulexp
	| addexp '-' mulexp
	;

shift_expression
	: addexp
	| shift_expression LEFT_OP addexp
	| shift_expression RIGHT_OP addexp
	;

rel_exp
	: shift_expression
	| rel_exp '<' shift_expression
	| rel_exp '>' shift_expression
	| rel_exp LE_OP shift_expression
	| rel_exp GE_OP shift_expression
	;

equals_ex
	: rel_exp
	| equals_ex EQ_OP rel_exp
	| equals_ex NE_OP rel_exp
	;

and_exp
	: equals_ex
	| and_exp '&' equals_ex
	;

xor_exp
	: and_exp
	| xor_exp '^' and_exp
	;

or_exp
	: xor_exp
	| or_exp '|' xor_exp
	;

and_operant
	: or_exp
	| and_operant AND_OP or_exp
	;

or_operant
	: and_operant
	| or_operant OR_OP and_operant
	;

condition_exp
	: or_operant
	| or_operant '?' exp ':' condition_exp
	;

assignment_exp
	: condition_exp {printf("condition_exp");}
	| unary_expression assignment_operator assignment_exp {printf("unary_expression assignment_operator assignment_exp");}
	;

assignment_operator
	: '='
	| MUL_ASSIGN
	| DIV_ASSIGN
	| MOD_ASSIGN
	| ADD_ASSIGN
	| SUB_ASSIGN
	| AND_ASSIGN
	| XOR_ASSIGN
	| OR_ASSIGN
	;

exp
	: assignment_exp {printf("assignment_exp\n");}
	| exp ',' assignment_exp
	;

constant_expression
	: condition_exp	{printf("condition_exp in constant\n");}
	;

declaration
	: declaration_specifiers ';'// type declaration
	| declaration_specifiers init_declarator_list ';'// type declaration with initialization
	;

declaration_specifiers
	: storage_class_specifier declaration_specifiers
	| storage_class_specifier
	| type_specifier declaration_specifiers
	| type_specifier { type = $0; }
	| type_qualifier declaration_specifiers
	| type_qualifier
	;

init_declarator_list
	: init_declarator// initialization
	| init_declarator_list ',' init_declarator // initialization list
	;

init_declarator
	: declarator '=' initializer {printf("declarator = initializer\n");}
	| declarator
	;

storage_class_specifier
	: EXTERN
	| STATIC
	;

type_specifier
	: VOID
	| CHAR {printf("char");}
	| SHORT
	| INT {printf("int");}
	| LONG
	| FLOAT
	| BOOL 	/* non-mandated extension */
	/* after it has been defined as such */
	;


specifier_qualifier_list
	: type_specifier specifier_qualifier_list {printf("type_specifier specifier_qualifier_list\n");}
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;





type_qualifier
	: CONST
	| VOLATILE
	;




declarator
	: direct_declarator
	;

direct_declarator
	: IDENTIFIER { name = $0; }
	| '(' declarator ')'
	| direct_declarator '[' ']'
	| direct_declarator '[' STATIC type_qualifier_list assignment_exp ']'
	| direct_declarator '[' STATIC assignment_exp ']'
	| direct_declarator '[' type_qualifier_list STATIC assignment_exp ']'
	| direct_declarator '[' type_qualifier_list assignment_exp ']'
	| direct_declarator '[' type_qualifier_list ']'
	| direct_declarator '[' assignment_exp ']'
	| direct_declarator '(' parameter_type_list ')'
	| direct_declarator '(' ')'
	| direct_declarator '(' identifier_list ')'
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list
	;

parameter_list
	: parameter_declaration 
	| parameter_list ',' parameter_declaration
	;

parameter_declaration
	: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER {printf("identifier");}
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list abstract_declarator
	| specifier_qualifier_list
	;

abstract_declarator
    : direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' STATIC type_qualifier_list assignment_exp ']'
	| '[' STATIC assignment_exp ']'
	| '[' type_qualifier_list STATIC assignment_exp ']'
	| '[' type_qualifier_list assignment_exp ']'
	| '[' type_qualifier_list ']'
	| '[' assignment_exp ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' STATIC type_qualifier_list assignment_exp ']'
	| direct_abstract_declarator '[' STATIC assignment_exp ']'
	| direct_abstract_declarator '[' type_qualifier_list assignment_exp ']'
	| direct_abstract_declarator '[' type_qualifier_list STATIC assignment_exp ']'
	| direct_abstract_declarator '[' type_qualifier_list ']'
	| direct_abstract_declarator '[' assignment_exp ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: '{' initializer_list '}' {printf("initializer_list\n");}
	| '{' initializer_list ',' '}'	{printf("initializer_list 2\n");}
	| assignment_exp {printf("assignment_exp\n");}
	;

initializer_list
	: designation initializer {printf("designation initializer\n");}
	| initializer {printf("initializer\n");}
	| initializer_list ',' designation initializer {printf("initializer_list , designation initializer\n");}
	| initializer_list ',' initializer {printf("initializer_list , initializer\n");}
	;

designation
	: designator_list '=' {printf("designator_list =\n");}
	;

designator_list
	: designator {printf("designator\n");}
	| designator_list designator {printf("designator_list designator\n");}
	;

designator
	: '[' constant_expression ']' {printf("constant_expression\n");}
	| '.' IDENTIFIER {printf(" desgIDENTIFIER\n");}
	;



stmt
	: label_stmt
	| compound_stmt
	| exp_stmt
	| selection_stmt
	| iteration_stmt
	| jmp_stmt
	;

label_stmt
	: IDENTIFIER ':' stmt
	| CASE constant_expression ':' stmt
	| DEFAULT ':' stmt
	;

compound_stmt
	: '{' '}'
	| '{'  block_item_list '}'
	;

block_item_list
	: block_item
	| block_item_list block_item
	;

block_item
	: declaration {printf("declaration\n");}
	| stmt
	;

exp_stmt
	: ';' 
	| exp ';' {
		struct SymbolData *ptr = initalizesymboldata(type, name , 0, true, true, true, 2, &count);
    		createnode(ptr, count++);
			
		}
	;

selection_stmt 
	:IF '(' exp ')' stmt
    |IF '(' exp ')' stmt ELSE stmt
	| SWITCH '(' exp ')' stmt
	;
    

iteration_stmt
	: WHILE '(' exp ')' stmt
	| DO stmt WHILE '(' exp ')' ';'
	| FOR '(' exp_stmt exp_stmt ')' stmt
	| FOR '(' exp_stmt exp_stmt exp ')' stmt
	| FOR '(' declaration exp_stmt ')' stmt
	| FOR '(' declaration exp_stmt exp ')' stmt
	;

jmp_stmt
	: CONTINUE ';'
	| BREAK ';'
	| RETURN ';'
	| RETURN exp ';'
	;


func_def
	: declaration_specifiers declarator declaration_list compound_stmt
	| declaration_specifiers declarator compound_stmt
	;

declaration_list
	: declaration {printf("declaration\n");}
	| declaration_list declaration
	;

%%
#include <stdio.h>
void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}


int main(){
	
  yyparse(); 
	printSymbolTable();
  return 0; 
}