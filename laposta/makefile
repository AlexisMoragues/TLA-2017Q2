make: yacc -d songFormat.y
lex songFormat.l
gcc tempWriter.c lex.yy.c y.tab.c hashmap.c mapImpl.c -lfl -o compiler.exe
