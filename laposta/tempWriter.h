#ifndef TEMPWRITER_H
#define TEMPWRITER_H

int openFunctions();

int deleteFunctions();

void writeToFunctions(const char *format, ...);

int openMain();

int deleteMain();

void writeToMain(const char *format, ...);

#endif