/*
 * Hacer un programa que muestre una tabla de multiplicar hasta el 20 de un número cualquiera por pantalla
 el número se pide en la funcion principal.

/* 
 * File:   Estructuras_funciones5.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

void tabla (int n);

int main(int argc, char** argv) {
    
    int numero;
    
    printf("Digite un número: ");
    scanf("%d", &numero);
    
    tabla(numero);

    return (EXIT_SUCCESS);
}

void tabla (int n){
    
    for(int i = 1; i < 21; i++){
        printf("\n%d x %d = %d", n, i, n * i);
    }
    printf("\n");
}

