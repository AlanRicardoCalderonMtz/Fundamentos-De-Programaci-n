/*
 * Comprobar si un número digitado por el usuario es "positivo o negativo"
 */

/* 
 * File:   Estructuras_decision1.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int numero;
    
    printf("Digite un número: ");
    scanf("%d", &numero);
    
    if (numero > 0){
        puts("El número es positivo."); // Es para imprimir un mensaje "Como un printf"
    } else{
         puts("El número es negativo");
    }

    return (EXIT_SUCCESS);
}
