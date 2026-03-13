#include <stdio.h>

/*
La bibliteca estandar de C amplia el lenguaje, proporcionando funciones
utiles. Esta biblioteca funciona como un conjunto de componenetes basicos
que ayudan a construir programas mas complejos.

getchar() leer el primer caracter disponible en el buffer y lo guarda en formato ASCII | devuelve un int
putchar() imprime un caracter en formato ASCII
(los caracteres se manejan en ASCII)

En C la entrada y salida de datos se manejan mediante streams (flujos)

Cuando escribimos algo cada caracter no se envia al programa, se almacena en un buffer
y los datos se envian solo cuando presionas Enter, el enter aparece en el stream
como el caracter newline \n, cuyo codigo ascii es 10
*/

int main(void){
    char inchar1;
    char inchar2;

    printf("Input character 1:\n");
    inchar1 = getchar();

    printf("Input character 2:\n");
    inchar2 = getchar();

    printf("Character 1 is %d\n", inchar1);
    printf("character 2 is %d\n", inchar2);
    
    /*
    El programa da la ilusion de terminar antes al presionar solo un caracter seguido
    de un Enter, esto es debido a que al presionar A (o cualquier otro caracter) +Enter
    el bufer tiene almacenado A (en ASCII) y \n (10), por lo que el programa imprime
    la linea 26 y luego al llegar a la linea 27 ya no es necesario esperar porque en el
    buffer nos queda un segundo caracter (\n) y el programa culmina
    */

    return 0;
}