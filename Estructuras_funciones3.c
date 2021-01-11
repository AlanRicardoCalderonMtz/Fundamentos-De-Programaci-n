/*
 * Realizar un programa que pida por pantalla un número del 1 al 10 y mediante un procedimiento 
 muestre por pantalla el número escrito en letras.
 */

/* 
 * File:   Estructuras_funciones3.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

void comprobar(int n);

int main(int argc, char** argv) {

    int numero;
    
    printf("Digite un número entre (1 - 10): ");
    scanf("%d", &numero);
    
    while(numero < 1 || numero > 10){
        printf("Número NO valido\n Digite un número entre (1 - 10): ");
        scanf("%d", &numero);
    }
    
    comprobar(numero);
    return (EXIT_SUCCESS);
}

void comprobar(int n){
    switch(n){
        case 1: printf("Uno"); break;
        case 2: printf("Dos"); break;
        case 3: printf("Tres"); break;
        case 4: printf("Cuatro"); break;
        case 5: printf("Cinco"); break;
        case 6: printf("Seis"); break;
        case 7: printf("Siete"); break;
        case 8: printf("Ocho"); break;
        case 9: printf("Nueve"); break;
        case 10: printf("Diez"); break;
    }
}
