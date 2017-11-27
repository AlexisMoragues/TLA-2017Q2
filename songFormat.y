%{
#define FUNCTION_AUX _f
#define STRING_CONST 1
#define INT_CONST 2
#define ERROR_CODE -42
#include <stdio.h>
#include <stdlib.h>
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

%token TOKEN_ASIGNACION TOKEN_NUEVA_LINEA TOKEN_VARIABLE TOKEN_REPETIR TOKEN_CUANDO TOKEN_ENTONCES TOKEN_TRASPONER_HACIA_ARRIBA TOKEN_TRASPONER_HACIA_ABAJO TOKEN_CONDICION_PARA_REPETIR TOKEN_SUBIR_OCTAVA TOKEN_BAJAR_OCTAVA

%token <string> NUMERO
%token <string> VARIABLE_ID
%token <string> STRING
%token <string> TOKEN_RELACION

%type <numero> declaracion_variable declaracion_string declaracion_int sentencia sentencia_if sentencia_asignacion sentencia_while
%type <numero> tipo_print sentencia_print sentenciasBloque tipo_asignacion asignacion_normal asignacion_subir_tono asignacion_bajar_tono asignacion_subir_octava asignacion_bajar_octava asignacion_modulo asignacion_string expresion expresionO expresionY expresion_relacional operando expresion_matematica
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

declaracion_variable: declaracion_int
|		declaracion_string 
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
	        }else{
	        	printf("Linea: %d Error: declaracion previa de la nota %s\n",yylineno ,$2);
	        	exit(ERROR_CODE);
	        }
	        
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

sentencia_if: TOKEN_CUANDO expresion TOKEN_ENTONCES sentenciasBloque TOKEN_FIN
{

}
;

sentencia_while: TOKEN_REPETIR expresion TOKEN_CONDICION_PARA_REPETIR sentenciasBloque TOKEN_FIN
{

}
;

sentencia_asignacion:	tipo_asignacion TOKEN_PUNTO
{
	$$ = $1;
}
;

tipo_asignacion: asignacion_normal
|	asignacion_subir_tono
|	asignacion_bajar_tono
|	asignacion_bajar_octava
|	asignacion_subir_octava
|	asignacion_modulo
|	asignacion_string
{
	$$ = $1;
}
;

asignacion_normal: TOKEN_VARIABLE VARIABLE_ID TOKEN_ASIGNACION expresion_matematica TOKEN_NUEVA_LINEA
{

	int type;
	int exists = getValueMap($4,&type);
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

asignacion_subir_tono: TOKEN_VARIABLE VARIABLE_ID TOKEN_TRASPONER_HACIA_ARRIBA expresion_matematica TOKEN_NUEVA_LINEA
{

}
;

asignacion_bajar_tono: TOKEN_VARIABLE VARIABLE_ID TOKEN_TRASPONER_HACIA_ABAJO expresion_matematica TOKEN_NUEVA_LINEA
{

}
;

asignacion_subir_octava: asignacion_subir_tono: TOKEN_VARIABLE VARIABLE_ID TOKEN_SUBIR_OCTAVA expresion_matematica TOKEN_NUEVA_LINEA
{

}
;

asignacion_bajar_tono: asignacion_subir_tono: TOKEN_VARIABLE VARIABLE_ID TOKEN_BAJAR_OCTAVA numero TOKEN_NUEVA_LINEA
{

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