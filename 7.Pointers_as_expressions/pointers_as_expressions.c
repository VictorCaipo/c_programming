#include <stdio.h>

int main(void){
    int a, b;
    int *pointer_a, *pointer_b;
    a = 10;
    pointer_a = &a; // Cuando decimos el valor del puntero nos referimos a una direccion 
    //El valor que almacena pointer_a es la direccion de a
    b = *pointer_a / 2 + 10;//b = al valor apuntado por el pointer_a /2 + 10
    pointer_b = pointer_a;//Pointer_b almacena la misma direccion que pointer_a (ambos apuntan hacia a)
    //Las variables pointer_a y pointer_b son las mismas pero ambas almacenan el mismo valor
    //No existe tal cosa como una flecha que señala variables
    
    /*
    Si cambio el valor al que apuntan los punteros (ya sea el puntero_a o puntero_b) el cambio se refleja
    en ambos porque los dos apuntan a la misma direccion.
    Pero si cambio la direccion almacenada en uno de los punteros, ese puntero pasa a apuntar a otro lugar
    y el otro puntero no se ve afectado
    */
    return 0;
}