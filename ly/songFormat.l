%{
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
%}

%s PREPARADO
%option yylineno

%%

"//".*\n					/* ignore comments */;
"/*"(.*|\n)*"*/"				/* ignore comments */;
\n                      /* ignore end of line */;
[ \t]+                  /* ignore whitespace */;


[0-9]+		{ yylval.string=strdup(yytext); return NUMERO; }
"afinando" return TOKEN_INICIO_VARIABLES;
"preparado" {BEGIN(PREPARADO); return TOKEN_FIN_VARIABLES;}
"var"	return TOKEN_VARIABLE;
"mientras"	return TOKEN_MIENTRAS;
"coda"	return TOKEN_REPETIR;
"cuando" return TOKEN_CUANDO;
"entonces" return TOKEN_ENTONCES;
"dibujar" return TOKEN_DIBUJAR;
"DO"	return TOKEN_DO;
"RE"	return TOKEN_RE;
"MI"	return TOKEN_MI;
"FA"	return TOKEN_FA;
"SOL"	return TOKEN_SOL;
"LA"	return TOKEN_LA;
"SI"	return TOKEN_SI;
"("		return TOKEN_PARENTSIS_APERTURA;
")"		return TOKEN_PARENTESIS_CIERRE;
"subir"	return TOKEN_SUBIR_NOTA;
"bajar"	return TOKEN_BAJAR_NOTA;
"asincope" return TOKEN_O_CONDICIONAL;
"mostrar" return TOKEN_MOSTRAR;
"fin" return TOKEN_FIN;
";"	return TOKEN_NUEVA_LINEA;
"y"	|
"unisono"		{ yylval.string=strdup(yytext); return TOKEN_Y; }
"="		return TOKEN_ASIGNACION;
"=="	|
"!="	|
"<"	|
">"	|
"<="	|
">="		{ yylval.string=strdup(yytext); return TOKEN_RELACION; }
\".*\"		{ yylval.string=strdup(yytext); return STRING; }
"!"	return TOKEN_NO;
<PREPARADO>[a-zA-Z][a-zA-Z0-9_]*  {yylval.string= strdup(yytext); return VARIABLE_ID;}
[a-zA-Z][a-zA-Z0-9_]*  	{yylval.string= strdup(yytext); return VARIABLE_ID;}
.|\n         { yyterminate(); };
%%