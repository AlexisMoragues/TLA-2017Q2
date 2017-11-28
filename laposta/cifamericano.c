#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "cifamericano.h"

char cifrado_americano(char* nota) {
	if(nota == "do"){
		return 'c';
	}
	if(nota == "re"){
		return 'd';
	}
	if(nota == "mi"){
		return 'e';
	}
	if(nota == "fa"){
		return 'f';
	}
	if(nota == "sol"){
		return 'g';
	}
	if(nota == "la"){
		return 'a';
	}
	if(nota == "si"){
		return 'b';
	}
	else {
		return 'x';
	}
}
