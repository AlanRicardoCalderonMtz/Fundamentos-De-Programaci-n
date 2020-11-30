/*
 * Programa que imprime el valor mínimo y máximo de dicho arreglo
 */

/* 
 * File:   Valor_Min_Max.c
 * Author: Alan Ricardo Calderón Martínez
 * Created on 24 de noviembre de 2020, 10:31 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int tamaño;
    int mayor=0, menor;
    
    printf("\tPrograma que imprime el valor mínimo y valor máximo: \n");
    printf("\nIngrese la tamaño del vector: ");
    scanf("%d", &tamaño);
    
    int arreglo [tamaño];
    
    for(int i = 0; i < tamaño; i++){
        printf("\nIngrese el valor %d: ", i+1);
        scanf("%d", &arreglo[i]);
        if(mayor < arreglo[i]){
            mayor = arreglo[i];
        }
    }
    
    menor = mayor;
    
    for(int i = 0; i < tamaño; i++){
        if(menor > arreglo[i]){
            menor = arreglo[i];
        }
    }
    
    printf("\nEl número menor es: %d\n", menor);
    printf("El número mayor es: %d\n", mayor);
    
    return (EXIT_SUCCESS);
}


