# TLA-2017Q2

## Materiales
 
* Archivo de construcción: `install.sh`, ubicado en el directorio raíz.
* Informe: `docs/Informe.pdf`.
* Códigos fuente: carpetas `src` (código C), y `ly` (contiene los archivos relacionados con lex y yacc).
 
## Compilación

Para compilar correr en el directorio raíz:

```
./install.sh
```
Esto genera un binario en la raíz del directorio con el nombre `compiler`

Dependencias: `lex` y `yacc`, se pueden obtener descargando `flex` y `bison` respectivamente

## Ejecución

Para ejecutar el compilador se debe correr el script `compile.sh` de la siguiente manera:

```
./compile.sh [archivo_entrada] [archivo_salida]
```
* archivo_entrada : contiene el código en lenguaje `song`
* archivo_salida  : nombre del binario de salida (opcional, el default es `song.out`)
