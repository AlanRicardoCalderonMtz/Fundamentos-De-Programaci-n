/*
 * Realizar un programa, donde pida al usuario que ingrese el tamaño del arreglo, y dependiendo de dicho arreglo,
 * ir almacenando valores enteros, finalmente, imprimir todos los valores almacenados.
 */

/* 
  * File:   Estructuras_arreglos1.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int tamaño;
    
    printf("Digite el tamaño del arreglo: ");
    scanf("%d", &tamaño);
    
    int edades[tamaño];
    
    for(int i = 0; i < tamaño; i++){
        printf("\n");
        printf("Ingresa el valor %d: ", i+1);
        scanf("%d", &edades[i]);
    }
    printf("\nLos valores del arreglo son: \n");
    for(int i = 0; i < tamaño; i++){
        printf("%d\n", edades[i]);
    }
    
    return (EXIT_SUCCESS);
}
