/* 
 * File:   Recursividad_fibonacci.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

//Ejemplo: número 6 "Fibonacci".
// 0( 1 1 2 3 5 8 )
void fibonacci(int penultimo, int ultimo, int n){
    int actual;
    
    printf("%d ", ultimo);
    if(n >1){
        actual = penultimo + ultimo;
        n--;
        fibonacci(ultimo, actual, n);
    }
}

int main(int argc, char** argv) {
    
    int n;
    printf("Ingrese el número: ");
    scanf("%d", &n);
    fibonacci(0, 1, n);

    return (EXIT_SUCCESS);
}

