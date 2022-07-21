%{
#include<stdio.h>
%}
%token NUM ID
%left '+''-'
%left '*''/'
%%
expr:e {printf("this is a valid expression\n"); exit(0);}
e:e'+'e
| e'-'e
| e'*'e
| e'/'e
| '('e')'
| NUM 
| ID         ;
%%
int main()
{
printf("Type the expression\n");
yyparse();
return 0;
}
int yyerror()
{
printf("invalid expression\n");
exit(0);
}
