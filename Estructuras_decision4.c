/*
 * Determinar si un número es par, impar
 */

/* 
 * File:   Estructuras_decision4.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int numero;
    
    printf("Digite un número: ");
    scanf("%d", &numero);
    
    if (numero % 2 == 0){
        puts("El número es par."); // Es para imprimir un mensaje "Como un printf"
    } if (numero %2 != 0){
         puts("El número es impar.");
    }

    return (EXIT_SUCCESS);
}

