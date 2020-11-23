/*
 * Declarar un arreglo de 100 elementos.
 * Nota: En la posición 0 se le va a asignar un valor de 2
 *          En la posición 1 se le va a asignar un valor de 3
 * En las posiciones restantes del (2 - 99). Y su asignación será la sumatoria de los 2 anteriores
 
/* 
 * File:   tarea1_arreglos_unidimensionales.c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 22 de noviembre de 2020, 09:28 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int arreglo [100];

    int x=2;
    int y=3;
    int z;
    int suma;
        
        int i=0;
    while(i < 100){
        
        arreglo[i] = x;
        suma = x + y;
        x = y;
        y = suma;
                ++i;
          }           
        
        for(int i = 0; i<100; i++){
         printf("Posición %d [%d]\n ", i, arreglo[i]);            
    }
        
    return (EXIT_SUCCESS);
}


