/*
 * Implementar el método ordenamiento burbuja.
 */

/* 
 * File:   Metodo_burbuja.c
 * Author: Alan Ricardo Calderón Martínez
 * Created on 24 de noviembre de 2020, 12:47 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int cantidad, aux;
    printf("\tPrograma de método de ordenamiento burbuja: \n");
    
    printf("\nIngrese la cantidad del verctor: ");
    scanf("%d", &cantidad);
    
    int vector[cantidad];
    
    for(int i = 0; i < cantidad; i++ ){
        printf("\nIngrese el valor %d: ", i+1);
        scanf("%d", &vector[i]);
    }
    // Implementando el método de la burbuja    
    for(int i = 0; i < cantidad; i++){
        for(int j = 0; j < cantidad; j++){
            
            if(vector[j] > vector[j+1]){
                aux = vector [j];      
                vector[j] = vector[j+1]; 
                vector[j+1] = aux; 
            }
        }
    }
    
    printf("\n VALORES ORDENADOS DE FORMA ASCENDENTE: ");
    for(int i = 0; i < cantidad; i++){
        printf("\n ordenado: %d ", vector [i+1]);
    }
    
    return (EXIT_SUCCESS);
}

