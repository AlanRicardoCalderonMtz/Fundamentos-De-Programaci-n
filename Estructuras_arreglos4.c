/*
 Calcular promedio con arreglos
 */

/* 
 * File:   Estructuras_arreglos4.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int tamaño, total = 0;
    float Promedio = 0;
    
    printf("Digite el tamaño de materias a evaluar: ");
    scanf("%d", &tamaño);
    
    int promedio[tamaño];
    
    for(int i = 0; i < tamaño; i++){
        printf(" Calificación de la materia %d:  ", i+1);
        scanf("%d", &promedio[i]);
        total += promedio[i];
    }
    
    Promedio = total / tamaño;
    printf("\nEl promedio de las materias es: %.2f", Promedio);
    

    return (EXIT_SUCCESS);
}

