/* 
 * File:   Promedio_conjunto_datos.c
 * Author: Alan Ricardo Calderón Martínez
 * Created on 26 de noviembre de 2020, 09:32 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int tamaño, total, promedio;
    
    printf("\tPrograma que imprime el promedio del comjunto de datos: \n");
    printf("\nIngrese el tamaño del vector: ");
    scanf("%d", &tamaño);
    
    int arreglo[tamaño];
    for(int i =0; i < tamaño; i++){
        printf("\nIngrese el valor %d: ", i+1);
        scanf("%d", &arreglo[i]);
        total = total + arreglo[i];
        promedio = total / tamaño;
    }
    printf("\nEl promedio de todos los números es: %d", promedio);
    
    printf("\n");

    return (EXIT_SUCCESS);
}

