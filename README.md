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

Dependencias: lex y yacc, se pueden obtener descargando los paquetes flex y bison

## Ejecución

Para ejecutar el compilador se debe correr el script ´compile.sh´ de la siguiente manera:

```
./compile.sh [archivo_entrada] [archivo_salida]
```
* archivo_entrada : contiene el codigo en lenguaje "song"
* archivo_salida  : nombre del binario de salida (opcional, el default es "song.out")

Ademas se puede ejecutar el compilador en modo interprete ejecutando directamente el binario ´compiler´