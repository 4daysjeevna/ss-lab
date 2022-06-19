%{
#include "y.tab.h"
int NUM, ID;
%}
%%
[0-9]+(\.[0-9]+)? {return NUM;}
[a-zA-Z][_a-zA-Z0-9]* {return ID;}
[\t] ;
\n {return 0;}
. {return yytext[0];}
%%
int yywrap() { }