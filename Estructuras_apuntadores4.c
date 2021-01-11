/*
 * Dado un vector de 10 elementos = {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10},
 escribir un programa en C (haciendo uso de apuntadores) que muestre kas direcciones de memoria de 
 cada elemento del vector
/* 
 * File:   Estructuras_apuntadores4.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arreglo [] =  {1, 2, 3, 4, 5, 6, 7, 8, 9 ,10};
    int *p_arreglo;
    
    p_arreglo = &arreglo;
    
    for(int i = 0; i < 10; i++){
        
        printf("Dato: arreglo[%d]: %d", i, arreglo[i]);
        printf("\nPosición: %p", p_arreglo);
        printf("\n\n");
        p_arreglo++;
    }

    return (EXIT_SUCCESS);
}

