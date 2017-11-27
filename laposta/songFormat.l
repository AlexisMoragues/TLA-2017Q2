%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
%}


%%

"//".*\n					/* ignore comments */;
"/*"(.*|\n)*"*/"				/* ignore comments */;
\n                      /* ignore end of line */;
[ \t]+                  /* ignore whitespace */;


[0-9]+		{ yylval.string=strdup(yytext); return NUMERO; }
[a-zA-Z0-9_] { yylval.string=strdup(yytext); return STRING; }

"afinando" return TOKEN_INICIO_VARIABLES;
"preparado" return TOKEN_FIN_VARIABLES;
"var"	return TOKEN_VARIABLE;
"mientras"	return TOKEN_CONDICION_PARA_REPETIR;
"repetir"	return TOKEN_REPETIR;
"cuando" return TOKEN_CUANDO;
"entonces" return TOKEN_ENTONCES;
"("		return TOKEN_PARENTSIS_APERTURA;
")"		return TOKEN_PARENTESIS_CIERRE;
"subir"	return TOKEN_TRASPONER_HACIA_ARRIBA;
"bajar"	return TOKEN_TRANSPONER_HACIA_ABAJO;
"subir octava" return TOKEN_SUBIR_OCTAVA;
"bajar octava" return TOKEN_BAJAR_OCTAVA;
"fin" return TOKEN_FIN;
"\n"	return TOKEN_NUEVA_LINEA;
"="		return TOKEN_ASIGNACION;
"=="	|
"!="	|
"<"	|
">"	|
"<="	|
">="		{ yylval.string=strdup(yytext); return TOKEN_RELACION; }
[a-zA-Z][a-zA-Z0-9_]*  	{yylval.string= strdup(yytext); return VARIABLE_ID;}
.|\n         { yyterminate(); };
%%