#include <stdio.h>
/*Esta funcion me permite cambiar los valores entre 2 variables, puedo hacer esto sin punteros?
la respuesta es no, porque si no usaramos punteros las variables x y y servirian solo hasta que 
la funcion este activa, cuando deje de estar activa estos valores se pierden, y porque se pierden 
y no se quedan guardados en la función modificada? esto se debe a que cuando llamamos a una funcion
swap(int a, int b) se crean copias de a y b dentro de x y y, por lo que no se modifica la
variable original*/
void swap(int *x, int *y) {//Los argumentos son punteros
    //int *x es un puntero pero en *x el operador * actua para acceder a una variable
    int temp = *x;
    *x = *y; //Datos
    *y = temp;
    /*
    Es comun pasar como argumento a punteros, porque asi puedo modificar los datos y direcciones en el puntero
    si pasaria como argumento solo (*x,*y) que son los datos del puntero (int) solo podria modificar esos numeros
    como si fueran cualquier otro numero
    */
}
/*
En resumen los punteros permiten modificar el valor de una variable, esto debido a que estamos trabajando
con la direccion de la variable y por lo tanto podemos modificar su valor desde cualquier parte del programa
este es uno de los principales motivos por lo que fue creado los punteros
*/

int main(void){ //* ve a la direccion y accede lo que hay ahi
    int a = 10, b = 20;
    int *apoint = &a; //apoint es el puntero
    int *bpoint = &b;
    printf("a = %i b = %i\n",a,b);
    swap(apoint,bpoint);
    printf("a = %i b = %i\n",a,b);
    return 0;
}