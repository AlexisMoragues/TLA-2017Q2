#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "tempWriter.h"

static const char *tempFunctionsName = "songFunctions.c";
static const char *tempMainName = "songMain.c";
static FILE *functionsF;
static FILE *mainF;

void write(FILE *fp, const char *string) {
	int len = strlen(string);
	int written = 0;
	while(written < len) {
		written += fprintf(fp,  "%s", string+written);
	}
}

int isOpen(FILE *fp) {
	return fp != NULL;
}

//-----------------------------

int openMain() {
	mainF = fopen(tempMainName, "w+");
	if(!isOpen(mainF)) {
		return 0;
	}

    writeToMain("#include <%s>\n", "stdio.h");
	writeToMain("#include \"%s\"\n", tempFunctionsName);
	writeToMain("#include \"%s\"\n", "lalala.c");
	return 1;
}

int deleteMain() {
	if(!isOpen(mainF)) return 0;
	int closed = fclose(mainF) == 0;
	if(closed) {
		mainF = NULL;
		return remove(tempMainName) == 0;
	} else {
		return 0;
	}
}

void writeToMain(const char *format, ...) {
	va_list args;
	va_start(args, format);
	vfprintf(mainF, format, args);
	va_end(args);
}

//-----------------------------

int openFunctions() {
	functionsF = fopen(tempFunctionsName, "w+");
	return isOpen(functionsF);
}

int deleteFunctions() {
	if(!isOpen(functionsF)) return 0;
	int closed = fclose(functionsF) == 0;
	if(closed) {
		functionsF = NULL;
		return remove(tempFunctionsName) == 0;
	} else {
		return 0;
	}
}

void writeToFunctions(const char *format, ...) {
	va_list args;
	va_start(args, format);
	vfprintf(functionsF, format, args);
	va_end(args);
}
