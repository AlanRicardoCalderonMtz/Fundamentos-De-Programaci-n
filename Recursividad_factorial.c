/* 
 * File:   Recursividad_factorial.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int factorial (int numero){
    if (numero <1){
        return 0;
    }else if (numero == 1){
        return 1;
    } else {
        return numero * factorial(numero -1);
    }
}

int main(int argc, char** argv) {
    
    int numero, resultado;
    printf("Digite un número: ");
    scanf("%d", &numero);
    
    resultado = factorial(numero);
    
    printf("El factorial de %d! es %d ", numero, resultado);
   
    /* Ejemplo:
     5! --> 1*2*3*4*5 --> 5*4!
     4! --> 1*2*3*4    --> 4*3!
     3! --> 1*2*3       --> 3*2!
     2! --> 1*2           --> 2*1!
     1! --> 1
     */
    return (EXIT_SUCCESS);
}



