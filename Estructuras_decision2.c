/*
 Dada una nota de un examen mediante un código.
 * Escribir el literal que corresponda la nota.
 
 A - Excelente
 B - Bueno
 C - Aprobado
 D - Reprobado
 */

/* 
 * File:   Estructuras_decision2.c
 * Author: Alan Ricardo Calderón Martínez
*/



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    char nota;
    
    printf("Digita La Calificación (A - D): ");
    scanf("%c", &nota);
    
    switch(nota){
        case 'A': printf("Excelente\n"); break; 
        case 'B': printf("Bueno\n"); break; 
        case 'C': printf("Aprobado\n"); break; 
        case 'D': printf("Reprobado\n"); break; 
        default: printf("No es posible esa nota\n ");
    }

    return (EXIT_SUCCESS);
}

