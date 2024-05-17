import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns

# Data for the lexical analysis table
data = {
    "Token": ["const", "extern", "+", "-", "*", "/", "+=", "-=", "*=", "/=", "++", "--", "<", ">", ">=", "<=", "==",
              "!=", "&&", "||", "!", "=", "(", ")", "{", "}", "int", "float", "char", "bool", "string", "if",
              "else if", "else", "while", "do", "for", "switch", "case", "default", "break", "continue", "void",
              "return", ",", ":", "\\n", "[\\t\\r ]+", ";", "true", "false", "[a-zA-Z_][a-zA-Z0-9_]*", "'[a-zA-Z0-9_]'",
              "[0-9]+", "[0-9]+\\.[0-9]+", "\"[^\"]*\""],
    "Return Value": ["CONST", "EXTERN", "PLUS", "MINUS", "MULT", "DIV", "PLUS_EQ", "MINUS_EQ", "MULT_EQ", "DIV_EQ",
                     "INC", "DEC", "LT", "GT", "GE", "LE", "EQ_EQ", "NE", "AND", "OR", "NOT", "EQUAL", "OPENBRACKET",
                     "CLOSEDBRACKET", "OPENCURL", "CLOSEDCURL", "INT", "FLOAT", "CHAR", "BOOL", "STRING", "IF",
                     "ELSEIF", "ELSE", "WHILE", "DO", "FOR", "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE", "VOID",
                     "RETURN", "COMMA", "COLON", "-", "-", "SEMICOLON", "TRUE_VAL", "FALSE_VAL", "IDENTIFIER",
                     "CHAR_VAL", "INT_NUM", "FLOAT_VAL", "STRING_VAL"],
    "Additional Action": ["", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
                          "yylval.var_type = INTTYPE;", "yylval.var_type = FLOATTYPE;", "yylval.var_type = CHARTYPE;",
                          "yylval.var_type = BOOLTYPE;", "yylval.var_type = STRINGTYPE;", "", "", "", "", "", "", "", "", "", "",
                          "", "", "", "", "", "", "", "", "yylineno += 1;", "", "",
                          "yylval.lexicalstruct.type = BOOLTYPE; yylval.lexicalstruct.boolval = true; yylval.lexicalstruct.valueinstring = strdup(yytext);",
                          "yylval.lexicalstruct.type = BOOLTYPE; yylval.lexicalstruct.boolval = false; yylval.lexicalstruct.valueinstring = strdup(yytext);",
                          "yylval.name = strdup(yytext);",
                          "yylval.lexicalstruct.type = CHARTYPE; yylval.lexicalstruct.charval = yytext[1]; yylval.lexicalstruct.valueinstring = strdup(yytext); printf(\"char %c\\n\", yytext[1]);",
                          "yylval.lexicalstruct.type = INTTYPE; yylval.lexicalstruct.intval = atoi(yytext); yylval.lexicalstruct.valueinstring = strdup(yytext);",
                          "yylval.lexicalstruct.type = FLOATTYPE; yylval.lexicalstruct.floatval = atof(yytext); yylval.lexicalstruct.valueinstring = strdup(yytext);",
                          "yylval.lexicalstruct.type = STRINGTYPE; yylval.lexicalstruct.stringval = strdup(yytext); yylval.lexicalstruct.valueinstring = strdup(yytext);"]
}

# Create DataFrame
df = pd.DataFrame(data)

# Plot the table
plt.figure(figsize=(12, 10))
plt.axis('off')
tbl = plt.table(cellText=df.values, colLabels=df.columns, cellLoc='center', loc='center')
tbl.auto_set_font_size(False)
tbl.set_fontsize(10)
tbl.scale(1.2, 1.2)

# Save the figure
plt.savefig("Lexical_Analysis_Table.png", bbox_inches='tight')
plt.show()
