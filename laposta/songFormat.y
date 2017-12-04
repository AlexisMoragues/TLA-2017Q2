%{
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
%}

%union
{
        int numero;
        char* string;
}

%token TOKEN_INICIO_VARIABLES
%token TOKEN_FIN_VARIABLES
%token TOKEN_MOSTRAR
%token TOKEN_ASIGNACION 
%token TOKEN_PARENTSIS_APERTURA
%token TOKEN_PARENTESIS_CIERRE	
%token TOKEN_NUEVA_LINEA 
%token TOKEN_VARIABLE
%token TOKEN_REPETIR
%token TOKEN_MIENTRAS
%token TOKEN_CUANDO
%token TOKEN_ENTONCES
%token TOKEN_SUBIR_NOTA
%token TOKEN_BAJAR_NOTA
%token TOKEN_CONDICION_PARA_REPETIR
%token TOKEN_SUBIR_OCTAVA
%token TOKEN_BAJAR_OCTAVA
%token TOKEN_FIN
%token TOKEN_NO
%token TOKEN_O_CONDICIONAL
%token TOKEN_Y
%token <string> NUMERO
%token <string> VARIABLE_ID
%token <string> STRING
%token <string> TOKEN_RELACION
%token <string> TOKEN_ASIGNACION
%type <numero> declaracion_variable
%type <numero> declaracion_string
%type <numero> declaracion_int
%type <numero> sentencia
%type <numero> sentenciasBloque /*asignacion_subir_tono asignacion_bajar_tono*/
%type <numero> sentencia_if
%type <numero> sentencia_asignacion
%type <numero> sentencia_while
%type <numero> tipo_print
%type <numero> sentencia_print
%type <numero> sentenciasBloque sentencia
%type <numero> tipo_asignacion
%type <numero> asignacion_normal
%type <numero> asignacion_subir_tono
%type <numero> asignacion_bajar_tono
%type <numero> expresionO
%type <numero> expresionY

/*
%type <numero> asignacion_subir_octava
%type <numero> asignacion_bajar_octava
*/
%type <numero> asignacion_string 
%type <numero> expresion expresion_relacional expresion_matematica operando 
%start programa
%% 


programa:	TOKEN_INICIO_VARIABLES  declaracion_variables TOKEN_FIN_VARIABLES
{
	writeToMain("main(int argc, char *argv[]){\n");
}sentenciasMain
{
	writeToMain("\n}\n");
}
;

sentenciasMain:	/* blank */
|sentenciasMain sentencia
{
	writeToMain("_f%d();\n",$2);
}
;

sentenciasBloque:	 /*  blank  */{
	$$ = 0;
}
|sentenciasBloque sentencia {

	int index = getNewFunctionIndex();
	$$ = index;
	writeToFunctions("void _f%d(){ _f%d(); _f%d(); }\n",index, $1, $2);
}
;

sentencia: sentencia_if
{
	$$ = $1;
}
;
	|	sentencia_asignacion
	{
		$$ = $1;
	}
;
		|	sentencia_while
		{
			$$ = $1;
		}
;	
			|	sentencia_print
				{
					$$ = $1;
				}
;



sentencia_asignacion:	tipo_asignacion
{
	$$ = $1;
}
;


sentencia_while: TOKEN_MIENTRAS expresion TOKEN_REPETIR sentenciasBloque TOKEN_FIN
{
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("void _f%d(){ while (  _f%d() ) { _f%d(); } }\n",index, $2, $4);		
}
;

sentencia_if:	TOKEN_CUANDO  expresion TOKEN_ENTONCES sentenciasBloque TOKEN_FIN
{		
int index = getNewFunctionIndex();	
		$$ = index;
		writeToFunctions("void _f%d(){ if (  _f%d() ) { _f%d(); } }\n",index, $2, $4);
}
;


sentencia_print: TOKEN_MOSTRAR tipo_print
{
	$$ = $2;
};

tipo_print: VARIABLE_ID  {		
		int index = getNewFunctionIndex();
		$$ = index;
		int type;
		int exists = getValueMap($1,&type);
		if(exists == 0){
			if(type == INT_CONST){
				writeToFunctions("void _f%d(){ printf(\"%%d\\n\",%s); }\n",index, $1);
			}else if(type == STRING_CONST){
				writeToFunctions("void _f%d(){ printf(\"%%s\\n\",%s); }\n",index, $1);
			}
		}else{
			printf("Linea: %d Error: La nota %s no fue declarada\n", yylineno ,$1);
			exit(ERROR_CODE);
		}
};
		| NUMERO {		
		int index = getNewFunctionIndex();
		$$ = index;
		writeToFunctions("void _f%d(){ printf(\"%s\\n\"); }\n",index, $1);
};
		| STRING  {		
		int index = getNewFunctionIndex();
		$$ = index;
		writeToFunctions("void _f%d(){ printf(%s);printf(\"\\n\");}\n",index, $1);
};

declaracion_variables:
	|	declaracion_variables declaracion_variable 
;

declaracion_variable: declaracion_int
|	declaracion_string
;

declaracion_int: TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION NUMERO TOKEN_NUEVA_LINEA
{
	if(!containsKeyMap($2)){
        	int type = INT_CONST;
        	writeToFunctions("int %s = %s;\n",$2,$4);
        	putMap($2,type);
        }else{
        	printf("Linea: %d Error: declaracion previa de la nota %s\n", yylineno ,$2);
        	exit(ERROR_CODE);
        }
}
;

declaracion_string: TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION STRING TOKEN_NUEVA_LINEA
{
	if(!containsKeyMap($3)){
	        	int type = STRING_CONST;
	        	writeToFunctions("char* %s = %s;\n",$2,$4);
	        	putMap($3,type);
	        	printf("%s vale %s\n", $2,$4);
	        }else{
	        	printf("Linea: %d Error: declaracion previa de la nota %s\n",yylineno ,$2);
	        	exit(ERROR_CODE);
	        }
	        
}
;

tipo_asignacion: asignacion_normal
|	asignacion_subir_tono
|	asignacion_bajar_tono
/*|	asignacion_bajar_octava
|	asignacion_subir_octava*/
|	asignacion_string
{
	$$ = $1;
}
;

asignacion_subir_tono: VARIABLE_ID TOKEN_SUBIR_NOTA expresion_matematica TOKEN_NUEVA_LINEA 
{
	int type;
	int exists = getValueMap($1, &type);
	if(exists != 0) {
		printf("Linea: %d Error: La nota no fue declarada", yylineno, $1);
		exit(ERROR_CODE);
	}
	if (type == INT_CONST) 
	{
		int index = getNewFunctionIndex();
		writeAsignation($1,$3,"+", index);
		$$ = index;
	}
	else {
		printf("Linea: %d Error: La nota no es de ese tipo", yylineno, $1);
	}
}
;
asignacion_bajar_tono: VARIABLE_ID TOKEN_BAJAR_NOTA expresion_matematica TOKEN_NUEVA_LINEA 
{
	int type;
	int exists = getValueMap($1, &type);
	if(exists != 0) {
		printf("Linea: %d Error: La nota no fue declarada", yylineno, $1);
		exit(ERROR_CODE);
	}
	if (type == INT_CONST) 
	{
		int index = getNewFunctionIndex();
		writeAsignation($1,$3,"-", index);
		$$ = index;
	}
	else {
		printf("Linea: %d Error: La nota no es de ese tipo", yylineno, $1);
	}
}
;
asignacion_string: VARIABLE_ID TOKEN_ASIGNACION STRING TOKEN_NUEVA_LINEA
{
	int type;
	int exists = getValueMap($1,&type);
	if(exists != 0){
		printf("Linea: %d Error: La nota %s no fue declarada\n", yylineno ,$1);
		exit(ERROR_CODE);
	}
	if(type == STRING_CONST){
			int index = getNewFunctionIndex();
			writeToFunctions("void _f%d(){%s = %s;}\n" ,index,$1,$3);
			$$ = index;
	}else{
		printf("Linea: %d Error: Se le esta poniendo un String al ingrediente %s, que es un int", yylineno ,$1);
		exit(ERROR_CODE);
	}
}
;

asignacion_normal: TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION expresion_matematica TOKEN_NUEVA_LINEA
{

	int type;
	int exists = getValueMap($2,&type);
	if(exists!=0) {
		printf("error");
		exit(ERROR_CODE);
	}
	if(type == INT_CONST) {
		int index = getNewFunctionIndex();
		writeAsignation($2,$4," ", index);
		$$ = index;
	}
	else {
		printf("error");
		exit(ERROR_CODE);
	}
}
;



expresion: TOKEN_NO expresion {
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("int _f%d(){ return !_f%d();}\n",index, $2);
}
| expresionO
;


expresionO: expresionO TOKEN_O_CONDICIONAL expresionY 
{
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("int _f%d(){ return _f%d() || _f%d();}\n",index, $1, $3);
}
| expresionY
;

expresionY: expresionY  TOKEN_Y expresion_relacional 
{
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("int _f%d(){ return _f%d() && _f%d();}\n",index, $1, $3);
}
| expresion_relacional
;

expresion_relacional: expresion_relacional TOKEN_RELACION operando
{
int index = getNewFunctionIndex();
$$ = index;
writeToFunctions("int _f%d(){ return _f%d() %s _f%d();}\n",index, $1,$2, $3);
}  
|	operando
;

expresion_matematica: VARIABLE_ID
{
	int type;
	int exists = getValueMap($1,&type);
	if(exists != 0){
		printf("Linea: %d Error: La nota %s no fue declarada\n", yylineno,$1);
		exit(ERROR_CODE);
	}
	if(type == INT_CONST){
			int index = getNewFunctionIndex();
			$$ = index;	
			writeToFunctions("int _f%d(){ return %s;}\n",index, $1);
	}else{
		printf("Linea: %d Error: La nota %s no es un int\n", yylineno ,$1);
		exit(ERROR_CODE);
	}
}
| NUMERO{
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("int _f%d(){ return %s;}\n",index, $1);
}
;

expresion_relacional: expresion_relacional  TOKEN_RELACION operando
{
int index = getNewFunctionIndex();
$$ = index;
writeToFunctions("int _f%d(){ return _f%d() %s _f%d();}\n",index, $1,$2, $3);
}  
|	operando
;
/*
asignacion_subir_tono: TOKEN_VARIABLE VARIABLE_ID TOKEN_SUBIR_NOTA expresion_matematica TOKEN_NUEVA_LINEA
{

}
;

asignacion_bajar_tono: TOKEN_VARIABLE VARIABLE_ID TOKEN_BAJAR_NOTA expresion_matematica TOKEN_NUEVA_LINEA
{

}
;

asignacion_subir_octava: TOKEN_VARIABLE VARIABLE_ID TOKEN_SUBIR_OCTAVA expresion_matematica TOKEN_NUEVA_LINEA
{

}
;

asignacion_bajar_octava: TOKEN_VARIABLE VARIABLE_ID TOKEN_BAJAR_OCTAVA expresion_matematica TOKEN_NUEVA_LINEA
{

}
;
*/



operando: TOKEN_PARENTSIS_APERTURA  expresion TOKEN_PARENTESIS_CIERRE
{
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("int _f%d(){ return _f%d();}\n",index, $2);
}
|VARIABLE_ID {
int type;
int exists = getValueMap($1,&type);
if(exists == 0){
	int index = getNewFunctionIndex();
	$$ = index;	
	writeToFunctions("int _f%d(){ return %s;}\n",index, $1);	
}else{
	printf("La nota %s no fue declarada\n", $1 );
	exit(ERROR_CODE);
}
}
| NUMERO{
int index = getNewFunctionIndex();
$$ = index;	
writeToFunctions("int _f%d(){ return %s;}\n",index, $1);
}
;


 %%



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