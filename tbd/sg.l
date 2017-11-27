%{
#include <stdio.h>
#include <string.h>
#include "y.tab.h"
%}
%%	
"nota"					{return nota;}
"print"				    {return print;}
"exit" 				    {return exit_command;}
"trasponer"				{return trasponer_token;}
"subir"					{return subir_nota;}
"bajar"					{return bajar_nota;}
[a-zA-Z][a-zA-Z0-9_]*	{yylval.id = yytext[0]; return identifier;}
[0-9]+                  {yylval.num = atoi(yytext); return number;}
[ \t\n]                 ;
[-+*=;]           	    {return yytext[0];}
.                       {ECHO; yyerror ("unexpected character");}

%%
int yywrap (void) {return 1;}
