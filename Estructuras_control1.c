/*
 * Calcular el factorial de un número
 */

/* 
 * File:   Estructuras_control1.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int numero, factorial =1;
    
    printf("Digite un número para hallar el factorial: ");
    scanf("%d", &numero);
    
    for(int i = 1; i <= numero; i++){
        factorial *= i;
    }
    
    printf("\nEl factorial del número es: %d", factorial);
    
    return (EXIT_SUCCESS);
}

