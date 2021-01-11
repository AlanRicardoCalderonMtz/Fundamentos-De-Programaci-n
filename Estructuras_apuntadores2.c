/*
 * Realizar un programa donde se declaren variables de tipo de dato: entera, flotante, y caracter,
 almacenar datos en cada una de las variables, posteriormente indicar la posición de memoria donde se encuentran
 * guardados los datos de cada variable. Con punteros.
/* 
 * File:   Estructuras_apuntadores2.c
 * Author: Alan Ricardo Calderón Martínez
 */


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int entero = 10, *p_entero = &entero;
    float flotante = 15.5, *p_flotante = &flotante;
    char caracter = 'a', *p_caracter = &caracter;
    
    printf(">> Variable Entera: \n");
    printf("Dato: %d", *p_entero);
    printf("\nPosición: %p", p_entero);
    
    printf("\n\n>> Variable Flotante: \n");
    printf("Dato: %.2f", *p_flotante);
    printf("\nPosición: %p", p_flotante);
    
    printf("\n\n>> Variable Caracter: \n");
    printf("Dato: %c", *p_caracter);
    printf("\nPosición: %p", p_caracter);
    printf("\n");
    
    return (EXIT_SUCCESS);
}

