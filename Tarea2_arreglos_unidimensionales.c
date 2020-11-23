/*
 * Pedir que el usuario ingrese un valor x, después pedirle de manera interactiva x valores y agregarlos
 * a un arreglo de dimensión x.
 * Después con un ciclo imprimir los valores en pantalla. 
 */

/* 
 * File:   Tarea2_arreglos_unidimensionales.c
 * Author: Alan Ricardo Calderón Martínez 
 *
 * Created on 22 de noviembre de 2020, 09:33 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int tamaño; 
    printf("Ingrese el tamaño del arreglo:  ");
    scanf("%d", &tamaño);
    
    int arreglo [tamaño];
    
    for(int i = 0; i < tamaño; i++){
        printf("\nIngrese el valor: %d \n", i+1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("\nLos valores del arreglo son: \n");
    for(int i = 0; i < tamaño; i++){
        printf("Posición del arreglo %d [%d] \n", i, arreglo[i]);
    }
   
    return (EXIT_SUCCESS);
}


