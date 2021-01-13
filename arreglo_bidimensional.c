/* 
 * File:   arreglo_bidimensional.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
//Arreglos bidimensionales
    
    int arreglo[5][6];
    int i=0, j=0;
    
    for(i = 0; i<5; i++)//Ciclo para las filas 
        for(j = 0; j<6; j++)
            arreglo[i][j] = i;
            
     for(i = 0; i<5; i++){//Ciclo para las columnas 
        for(j = 0; j<6; j++)
            printf(" %d", arreglo[i][j]);
        printf("\n");
     }
    return (EXIT_SUCCESS);
}


