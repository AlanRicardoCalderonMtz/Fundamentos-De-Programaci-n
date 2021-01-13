/* 
 * File:   arreglo_unidimensional.c
 * Author:  Alan Ricardo Calderón Martínez
 *
 * Created on 12 de enero de 2021, 08:13 PM
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
//Arreglos unidimensionales.
    
    int arreglo[7];
    int i=0;
    
    for(i = 0; i<7; i++){
        printf("Ingrese el valor %d: ", i+1);
        scanf("%d", &arreglo[i]);
    }
    
    printf("\nLos valores son: ");
    for(int i = 0; i < 7; i++){
        printf("%d ", arreglo[i]);
    }
    printf("\n");
      
    return (EXIT_SUCCESS);
}

