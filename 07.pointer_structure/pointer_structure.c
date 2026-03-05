#include <stdio.h>
/*
Esta funcion me permite cambiar los valores entre 2 variables
Esto se puede hacer unicamente con punteros, porque sino usaramos estos, los
valores "x" y "y" se perderian en el momento que se libere la memoria ya que no
los estamos retornando (void).
*/
void swap(int *x, int *y) {//Los argumentos son punteros
    //int *x es la declaracion de un puntero, en este caso un argumento
    int temp = *x;//variable temp contiene el valor del puntero x
    *x = *y; //el valor del puntero y es igual a el valor del puntero x
    *y = temp;//el valor de temp es igual al valor del puntero y

}
/*
Los punteros permiten modificar el valor de variables desde cualquier parte del programa
debido a que trabajamos con su direccion, no con su valor en si
*/

int main(int argc, char *argv[]){ 
    
    int a = 10, b = 20;
    int *apoint = &a;//el puntero apoint apunta a la direccion de la variable a
    int *bpoint = &b;//el puntero bpoint apunta a la direccion de la variable b
    printf("a = %i b = %i\n",a,b);
    swap(apoint,bpoint);
    printf("a = %i b = %i\n",a,b);
    return 0;
}