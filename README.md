# TLA-2017Q2

## Materiales
 
* Archivo de construcción: `install.sh`, ubicado en el directorio raíz.
* Informe: `docs/Informe.pdf`.
* Códigos fuente: carpetas `src` (código C), y `ly` (contiene la gramática y los archivos generados por lex y yacc).
 
## Compilación

Para compilar correr en el directorio raíz:

```
./install.sh
```
Esto genera un binario en la raíz del directorio con el nombre `compiler`

Dependencias: lex y yacc

## Ejecución

Para ejecutar el compilador se debe correr el script ´compile.sh [archivo]´ con archivo como argumento que contiene el codigo en lenguaje song