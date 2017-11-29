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
   22,    0,   21,   21,    5,    5,    4,    4,    4,    4,
    7,    8,    6,   10,    9,    9,    9,   20,   20,    1,
    1,    3,    2,   11,   11,   11,   11,   13,   14,   15,
   12,   16,   18,   18,   17,   17,   19,   19,   19,
};
static const YYINT yylen[] = {                            2,
    0,    5,    0,    2,    0,    2,    1,    1,    1,    1,
    1,    5,    5,    2,    1,    1,    1,    0,    2,    1,
    1,    5,    5,    1,    1,    1,    1,    4,    4,    4,
    5,    2,    1,    1,    3,    1,    3,    1,    1,
};
static const YYINT yydefred[] = {                         0,
   18,    0,    0,    1,    0,   19,   21,   20,    3,    0,
    0,    0,    0,    0,    0,    0,    0,    4,    7,    8,
    9,   10,   11,   24,   25,   26,   27,    0,    0,   16,
   15,   17,   14,    0,    0,    0,    0,    0,    0,    0,
   22,   23,    0,   32,    5,    5,    0,   34,   33,    0,
    0,    0,    0,    0,   30,   28,   29,   31,   12,    6,
   13,
};
static const YYINT yydgoto[] = {                          2,
    6,    7,    8,   60,   53,   19,   20,   21,   33,   22,
   23,   24,   25,   26,   27,   36,    0,   50,    0,    3,
   11,    9,
};
static const YYINT yysindex[] = {                      -249,
    0,    0, -231,    0, -265,    0,    0,    0,    0, -226,
 -241, -273, -248, -242, -237, -237, -238,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -224, -223,    0,
    0,    0,    0, -219, -237, -228, -225, -236, -261, -261,
    0,    0, -261,    0,    0,    0, -218,    0,    0, -217,
 -216, -215, -257, -253,    0,    0,    0,    0,    0,    0,
    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   44,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
    0,    0,    0,   38,    4,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -16,    0,  -39,    0,    0,
    0,    0,
};
#define YYTABLESIZE 50
static const YYINT yytable[] = {                         37,
   51,   13,   28,   52,   29,   13,   14,    1,   15,   16,
   14,   10,   15,   16,   48,   49,   59,   13,   44,   17,
   61,   38,   14,   17,   15,   16,    4,   30,   31,   32,
   39,   40,    5,   12,   34,   17,   45,   35,   41,   42,
   43,   47,   46,    2,   55,   56,   57,   58,   18,   54,
};
static const YYINT yycheck[] = {                         16,
   40,  259,  276,   43,  278,  259,  264,  257,  266,  267,
  264,  277,  266,  267,  276,  277,  274,  259,   35,  277,
  274,  260,  264,  277,  266,  267,  258,  276,  277,  278,
  269,  270,  264,  260,  277,  277,  265,  275,  263,  263,
  260,  278,  268,    0,  263,  263,  263,  263,   11,   46,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 279
#define YYUNDFTOKEN 304
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : programa",
"$$1 :",
"programa : TOKEN_INICIO_VARIABLES declaracion_variables TOKEN_FIN_VARIABLES $$1 sentenciasMain",
"sentenciasMain :",
"sentenciasMain : sentenciasMain sentencia",
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
"tipo_asignacion : asignacion_subir_tono",
"tipo_asignacion : asignacion_bajar_tono",
"tipo_asignacion : asignacion_string",
"asignacion_subir_tono : VARIABLE_ID TOKEN_SUBIR_NOTA expresion_matematica TOKEN_NUEVA_LINEA",
"asignacion_bajar_tono : VARIABLE_ID TOKEN_BAJAR_NOTA expresion_matematica TOKEN_NUEVA_LINEA",
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
#line 406 "songFormat.y"



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
#line 301 "y.tab.c"

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
#line 75 "songFormat.y"
	{
	writeToMain("main(int argc, char *argv[]){\n");
}
break;
case 2:
#line 78 "songFormat.y"
	{
	writeToMain("\n}\n");
}
break;
case 4:
#line 85 "songFormat.y"
	{
	writeToMain("_f%d();\n",yystack.l_mark[0].numero);
}
break;
case 5:
#line 90 "songFormat.y"
	{
	yyval.numero = 0;
}
break;
case 6:
#line 93 "songFormat.y"
	{

	int index = getNewFunctionIndex();
	yyval.numero = index;
	writeToFunctions("void _f%d(){ _f%d(); _f%d(); }\n",index, yystack.l_mark[-1].numero, yystack.l_mark[0].numero);
}
break;
case 7:
#line 102 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 8:
#line 107 "songFormat.y"
	{
		yyval.numero = yystack.l_mark[0].numero;
	}
break;
case 9:
#line 112 "songFormat.y"
	{
			yyval.numero = yystack.l_mark[0].numero;
		}
break;
case 10:
#line 117 "songFormat.y"
	{
					yyval.numero = yystack.l_mark[0].numero;
				}
break;
case 11:
#line 124 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 12:
#line 131 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("void _f%d(){ while (  _f%d() ) { _f%d(); } }\n",index, yystack.l_mark[-3].numero, yystack.l_mark[-1].numero);		
}
break;
case 13:
#line 139 "songFormat.y"
	{		
int index = getNewFunctionIndex();	
		yyval.numero = index;
		writeToFunctions("void _f%d(){ if (  _f%d() ) { _f%d(); } }\n",index, yystack.l_mark[-3].numero, yystack.l_mark[-1].numero);
}
break;
case 14:
#line 148 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 15:
#line 152 "songFormat.y"
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
#line 168 "songFormat.y"
	{		
		int index = getNewFunctionIndex();
		yyval.numero = index;
		writeToFunctions("void _f%d(){ printf(\"%s\\n\"); }\n",index, yystack.l_mark[0].string);
}
break;
case 17:
#line 173 "songFormat.y"
	{		
		int index = getNewFunctionIndex();
		yyval.numero = index;
		writeToFunctions("void _f%d(){ printf(%s);printf(\"\\n\");}\n",index, yystack.l_mark[0].string);
}
break;
case 22:
#line 188 "songFormat.y"
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
#line 201 "songFormat.y"
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
case 27:
#line 227 "songFormat.y"
	{
	yyval.numero = yystack.l_mark[0].numero;
}
break;
case 28:
#line 233 "songFormat.y"
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
		writeAsignation(yystack.l_mark[-3].string,yystack.l_mark[-1].numero,"+", index);
		yyval.numero = index;
	}
	else {
		printf("Linea: %d Error: El ingrediente no es de ese tipo", yylineno, yystack.l_mark[-3].string);
	}
}
break;
case 29:
#line 252 "songFormat.y"
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
		writeAsignation(yystack.l_mark[-3].string,yystack.l_mark[-1].numero,"-", index);
		yyval.numero = index;
	}
	else {
		printf("Linea: %d Error: El ingrediente no es de ese tipo", yylineno, yystack.l_mark[-3].string);
	}
}
break;
case 30:
#line 271 "songFormat.y"
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
case 31:
#line 290 "songFormat.y"
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
case 32:
#line 312 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return !_f%d();}\n",index, yystack.l_mark[0].numero);
}
break;
case 33:
#line 320 "songFormat.y"
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
case 34:
#line 336 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return %s;}\n",index, yystack.l_mark[0].string);
}
break;
case 35:
#line 344 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;
writeToFunctions("int _f%d(){ return _f%d() %s _f%d();}\n",index, yystack.l_mark[-2].numero,yystack.l_mark[-1].string, yystack.l_mark[0].numero);
}
break;
case 37:
#line 380 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return _f%d();}\n",index, yystack.l_mark[-1].numero);
}
break;
case 38:
#line 385 "songFormat.y"
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
case 39:
#line 397 "songFormat.y"
	{
int index = getNewFunctionIndex();
yyval.numero = index;	
writeToFunctions("int _f%d(){ return %s;}\n",index, yystack.l_mark[0].string);
}
break;
#line 811 "y.tab.c"
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
