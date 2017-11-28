/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140715

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "songFormat.y"
#define FUNCTION_AUX _f
#define STRING_CONST 1
#define INT_CONST 2
#define ERROR_CODE -42
#include <stdio.h>
#include <stdlib.h>
#include "tempWriter.h"
#include "mapImpl.h"
extern int yylineno;
int counterFunction = 1; 
int getNewFunctionIndex();
void writeAsignation(char * variableName,int functionCounter,char* operand, int thisFunctionCounter);
void yyerror(char* msg){
	printf("Error de syntaxis cerca de la linea %d\n",yylineno);
}
#line 19 "songFormat.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union
{
        int numero;
        char* string;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 50 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define TOKEN_INICIO_VARIABLES 257
#define TOKEN_FIN_VARIABLES 258
#define TOKEN_MOSTRAR 259
#define TOKEN_ASIGNACION 260
#define TOKEN_PARENTSIS_APERTURA 261
#define TOKEN_PARENTESIS_CIERRE 262
#define TOKEN_NUEVA_LINEA 263
#define TOKEN_VARIABLE 264
#define TOKEN_REPETIR 265
#define TOKEN_MIENTRAS 266
#define TOKEN_CUANDO 267
#define TOKEN_ENTONCES 268
#define TOKEN_SUBIR_NOTA 269
#define TOKEN_BAJAR_NOTA 270
#define TOKEN_CONDICION_PARA_REPETIR 271
#define TOKEN_SUBIR_OCTAVA 272
#define TOKEN_BAJAR_OCTAVA 273
#define TOKEN_FIN 274
#define TOKEN_NO 275
#define NUMERO 276
#define VARIABLE_ID 277
#define STRING 278
#define TOKEN_RELACION 279
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
   21,    0,    9,    9,    5,    5,    4,    4,    4,    4,
    7,    8,    6,   11,   10,   10,   10,   20,   20,    1,
    1,    3,    2,   12,   12,   12,   15,   14,   13,   16,
   18,   18,   17,   17,   19,   19,   19,
};
static const YYINT yylen[] = {                            2,
    0,    5,    0,    3,    0,    2,    1,    1,    1,    1,
    1,    5,    5,    2,    1,    1,    1,    0,    2,    1,
    1,    5,    5,    1,    1,    1,    4,    4,    5,    2,
    1,    1,    3,    1,    3,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   18,    0,    0,    1,    0,   19,   21,   20,    3,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    7,    8,
    9,   10,   11,   24,   25,   26,    0,    0,   16,   15,
   17,   14,    0,    0,    0,    0,    0,    4,   22,   23,
    0,   30,    5,    5,    0,    0,   32,   31,    0,    0,
    0,   27,   28,   29,   12,    6,   13,
};
static const YYINT yydgoto[] = {                          2,
    6,    7,    8,   56,   50,   19,   20,   21,   11,   32,
   22,   23,   24,   25,   26,   35,    0,   49,    0,    3,
    9,
};
static const YYINT yysindex[] = {                      -251,
    0,    0, -233,    0, -267,    0,    0,    0,    0, -231,
 -243, -275, -250, -260, -242, -242, -225, -227,    0,    0,
    0,    0,    0,    0,    0,    0, -226, -224,    0,    0,
    0,    0, -222, -242, -223, -228, -246,    0,    0,    0,
 -263,    0,    0,    0, -220, -219,    0,    0, -218, -259,
 -255,    0,    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   41,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,   35,    3,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -14,    0,    0,    0,    0,
    0,
};
#define YYTABLESIZE 47
static const YYINT yytable[] = {                         13,
   27,   36,   28,   13,   14,    1,   15,   16,   14,   10,
   15,   16,   47,   48,   55,   13,   33,   17,   57,   42,
   14,   17,   15,   16,    4,   29,   30,   31,   12,   45,
    5,   46,   34,   17,   37,   38,   39,   41,   40,   44,
    2,   43,   52,   53,   54,   18,   51,
};
static const YYINT yycheck[] = {                        259,
  276,   16,  278,  259,  264,  257,  266,  267,  264,  277,
  266,  267,  276,  277,  274,  259,  277,  277,  274,   34,
  264,  277,  266,  267,  258,  276,  277,  278,  260,  276,
  264,  278,  275,  277,  260,  263,  263,  260,  263,  268,
    0,  265,  263,  263,  263,   11,   44,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#define YYUNDFTOKEN 303
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"TOKEN_INICIO_VARIABLES",
"TOKEN_FIN_VARIABLES","TOKEN_MOSTRAR","TOKEN_ASIGNACION",
"TOKEN_PARENTSIS_APERTURA","TOKEN_PARENTESIS_CIERRE","TOKEN_NUEVA_LINEA",
"TOKEN_VARIABLE","TOKEN_REPETIR","TOKEN_MIENTRAS","TOKEN_CUANDO",
"TOKEN_ENTONCES","TOKEN_SUBIR_NOTA","TOKEN_BAJAR_NOTA",
"TOKEN_CONDICION_PARA_REPETIR","TOKEN_SUBIR_OCTAVA","TOKEN_BAJAR_OCTAVA",
"TOKEN_FIN","TOKEN_NO","NUMERO","VARIABLE_ID","STRING","TOKEN_RELACION",0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programa",
"$$1 :",
"programa : TOKEN_INICIO_VARIABLES declaracion_variables TOKEN_FIN_VARIABLES $$1 sentenciasMain",
"sentenciasMain :",
"sentenciasMain : sentenciasMain sentencia TOKEN_NUEVA_LINEA",
"sentenciasBloque :",
"sentenciasBloque : sentenciasBloque sentencia",
"sentencia : sentencia_if",
"sentencia : sentencia_asignacion",
"sentencia : sentencia_while",
"sentencia : sentencia_print",
"sentencia_asignacion : tipo_asignacion",
"sentencia_while : TOKEN_MIENTRAS expresion TOKEN_REPETIR sentenciasBloque TOKEN_FIN",
"sentencia_if : TOKEN_CUANDO expresion TOKEN_ENTONCES sentenciasBloque TOKEN_FIN",
"sentencia_print : TOKEN_MOSTRAR tipo_print",
"tipo_print : VARIABLE_ID",
"tipo_print : NUMERO",
"tipo_print : STRING",
"declaracion_variables :",
"declaracion_variables : declaracion_variables declaracion_variable",
"declaracion_variable : declaracion_int",
"declaracion_variable : declaracion_string",
"declaracion_int : TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION NUMERO TOKEN_NUEVA_LINEA",
"declaracion_string : TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION STRING TOKEN_NUEVA_LINEA",
"tipo_asignacion : asignacion_normal",
"tipo_asignacion : asignacion_string",
"tipo_asignacion : asignacion_int",
"asignacion_int : VARIABLE_ID TOKEN_ASIGNACION NUMERO TOKEN_NUEVA_LINEA",
"asignacion_string : VARIABLE_ID TOKEN_ASIGNACION STRING TOKEN_NUEVA_LINEA",
"asignacion_normal : TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION expresion_matematica TOKEN_NUEVA_LINEA",
"expresion : TOKEN_NO expresion",
"expresion_matematica : VARIABLE_ID",
"expresion_matematica : NUMERO",
"expresion_relacional : expresion_relacional TOKEN_RELACION operando",
"expresion_relacional : operando",
"operando : TOKEN_PARENTSIS_APERTURA expresion TOKEN_PARENTESIS_CIERRE",
"operando : VARIABLE_ID",
"operando : NUMERO",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 391 "songFormat.y"



main() {
	openFunctions();
	openMain();
    writeToFunctions("void _f0(){  }\n");
    
    yyparse();
} 




int getNewFunctionIndex() {
	return counterFunction++;
}




void writeAsignation(char * variableName,int functionCounter,char* operand, int thisFunctionCounter){


	writeToFunctions("void _f%d(){%s %s=_f%d();}\n" ,thisFunctionCounter,variableName,operand,functionCounter);
}
#line 297 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 76 "songFormat.y"
	{
	writeToMain("main(int argc, char *argv[]){\n");
}
break;
case 2:
#line 79 "songFormat.y"
	{
	writeToMain("\n}\n");
}
break;
case 3:
#line 84 "songFormat.y"
	{
	yyval.numero = 0;
}
break;
case 4:
#line 88 "songFormat.y"
	{
	writeToMain("_f%d();\n",yystack.l_mark[-1].numero);
}
break;
case 5:
#line 93 "songFormat.y"
	{
	yyval.numero = 0;
}
break;
case 6:
#line 96 "songFormat.y"
	{

	int index = getNewFunctionIndex();
	yyval.numero = index;
	writeToFunctions("void _f%d(){ _f%d(); _f%d(); }\n",index, yystack.l_mark[-1].numero, yystack.l_mark[0].numero);
}
break;
case 7:
#line 105 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 8:
#line 110 "songFormat.y"
	{
		yyval.numero = yystack.l_mark[0].numero;
	}
break;
case 9:
#line 115 "songFormat.y"
	{
			yyval.numero = yystack.l_mark[0].numero;
		}
break;
case 10:
#line 120 "songFormat.y"
	{
					yyval.numero = yystack.l_mark[0].numero;
				}
break;
case 11:
#line 127 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 12:
#line 134 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("void _f%d(){ while (  _f%d() ) { _f%d(); } }\n",index, yystack.l_mark[-3].numero, yystack.l_mark[-1].numero);		
}
break;
case 13:
#line 142 "songFormat.y"
	{		
int index = getNewFunctionIndex();	
		yyval.numero = index;
		writeToFunctions("void _f%d(){ if (  _f%d() ) { _f%d(); } }\n",index, yystack.l_mark[-3].numero, yystack.l_mark[-1].numero);
}
break;
case 14:
#line 151 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 15:
#line 155 "songFormat.y"
	{		
		int index = getNewFunctionIndex();
		yyval.numero = index;
		int type;
		int exists = getValueMap(yystack.l_mark[0].string,&type);
		if(exists == 0){
			if(type == INT_CONST){
				writeToFunctions("void _f%d(){ printf(\"%%d\\n\",%s); }\n",index, yystack.l_mark[0].string);
			}else if(type == STRING_CONST){
				writeToFunctions("void _f%d(){ printf(\"%%s\\n\",%s); }\n",index, yystack.l_mark[0].string);
			}
		}else{
			printf("Linea: %d Error: La nota %s no fue declarada\n", yylineno ,yystack.l_mark[0].string);
			exit(ERROR_CODE);
		}
}
break;
case 16:
#line 171 "songFormat.y"
	{		
		int index = getNewFunctionIndex();
		yyval.numero = index;
		writeToFunctions("void _f%d(){ printf(\"%s\\n\"); }\n",index, yystack.l_mark[0].string);
}
break;
case 17:
#line 176 "songFormat.y"
	{		
		int index = getNewFunctionIndex();
		yyval.numero = index;
		writeToFunctions("void _f%d(){ printf(%s);printf(\"\\n\");}\n",index, yystack.l_mark[0].string);
}
break;
case 22:
#line 191 "songFormat.y"
	{
	if(!containsKeyMap(yystack.l_mark[-3].string)){
        	int type = INT_CONST;
        	writeToFunctions("int %s = %s;\n",yystack.l_mark[-3].string,yystack.l_mark[-1].string);
        	putMap(yystack.l_mark[-3].string,type);
        }else{
        	printf("Linea: %d Error: declaracion previa de la nota %s\n", yylineno ,yystack.l_mark[-3].string);
        	exit(ERROR_CODE);
        }
}
break;
case 23:
#line 204 "songFormat.y"
	{
	if(!containsKeyMap(yystack.l_mark[-2].string)){
	        	int type = STRING_CONST;
	        	writeToFunctions("char* %s = %s;\n",yystack.l_mark[-3].string,yystack.l_mark[-1].string);
	        	putMap(yystack.l_mark[-2].string,type);
	        	printf("%s vale %s\n", yystack.l_mark[-3].string,yystack.l_mark[-1].string);
	        }else{
	        	printf("Linea: %d Error: declaracion previa de la nota %s\n",yylineno ,yystack.l_mark[-3].string);
	        	exit(ERROR_CODE);
	        }
	        
}
break;
case 26:
#line 231 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 27:
#line 237 "songFormat.y"
	{
	int type;
	int exists = getValueMap(yystack.l_mark[-3].string, &type);
	if(exists != 0) {
		printf("Linea: %d Error: El ingrediente no fue declarado", yylineno, yystack.l_mark[-3].string);
		exit(ERROR_CODE);
	}
	if (type == INT_CONST) 
	{
		int index = getNewFunctionIndex();
		writeAsignation(yystack.l_mark[-3].string,yystack.l_mark[-1].string,"+", index);
		yyval.numero = index;
	}
	else {
		printf("Linea: %d Error: El ingrediente no es de ese tipo", yylineno, yystack.l_mark[-3].string);
	}
}
break;
case 28:
#line 256 "songFormat.y"
	{
	int type;
	int exists = getValueMap(yystack.l_mark[-3].string,&type);
	if(exists != 0){
		printf("Linea: %d Error: El ingrediente %s no fue declarado\n", yylineno ,yystack.l_mark[-3].string);
		exit(ERROR_CODE);
	}
	if(type == STRING_CONST){
			int index = getNewFunctionIndex();
			writeToFunctions("void _f%d(){%s = %s;}\n" ,index,yystack.l_mark[-3].string,yystack.l_mark[-1].string);
			yyval.numero = index;
	}else{
		printf("Linea: %d Error: Se le esta poniendo un String al ingrediente %s, que es un int", yylineno ,yystack.l_mark[-3].string);
		exit(ERROR_CODE);
	}
}
break;
case 29:
#line 275 "songFormat.y"
	{

	int type;
	int exists = getValueMap(yystack.l_mark[-3].string,&type);
	if(exists!=0) {
		printf("error");
		exit(ERROR_CODE);
	}
	if(type == INT_CONST) {
		int index = getNewFunctionIndex();
		writeAsignation(yystack.l_mark[-3].string,yystack.l_mark[-1].numero," ", index);
		yyval.numero = index;
	}
	else {
		printf("error");
		exit(ERROR_CODE);
	}
}
break;
case 30:
#line 297 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return !_f%d();}\n",index, yystack.l_mark[0].numero);
}
break;
case 31:
#line 305 "songFormat.y"
	{
	int type;
	int exists = getValueMap(yystack.l_mark[0].string,&type);
	if(exists != 0){
		printf("Linea: %d Error: El ingrediente %s no fue declarado\n", yylineno,yystack.l_mark[0].string);
		exit(ERROR_CODE);
	}
	if(type == INT_CONST){
			int index = getNewFunctionIndex();
			yyval.numero = index;	
			writeToFunctions("int _f%d(){ return %s;}\n",index, yystack.l_mark[0].string);
	}else{
		printf("Linea: %d Error: El ingrediente %s no es un int\n", yylineno ,yystack.l_mark[0].string);
		exit(ERROR_CODE);
	}
}
break;
case 32:
#line 321 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return %s;}\n",index, yystack.l_mark[0].string);
}
break;
case 33:
#line 329 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;
writeToFunctions("int _f%d(){ return _f%d() %s _f%d();}\n",index, yystack.l_mark[-2].numero,yystack.l_mark[-1].string, yystack.l_mark[0].numero);
}
break;
case 35:
#line 363 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return _f%d();}\n",index, yystack.l_mark[-1].numero);
}
break;
case 36:
#line 369 "songFormat.y"
	{
int type;
int exists = getValueMap(yystack.l_mark[0].string,&type);
if(exists == 0){
	int index = getNewFunctionIndex();
	yyval.numero = index;	
	writeToFunctions("int _f%d(){ return %s;}\n",index, yystack.l_mark[0].string);	
}else{
	printf("El ingrediente %s no fue declarado\n", yystack.l_mark[0].string );
	exit(ERROR_CODE);
}
}
break;
case 37:
#line 382 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return %s;}\n",index, yystack.l_mark[0].string);
}
break;
#line 793 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
