/*
 * Realizar un programa que sume 2 matrices
 */

/* 
 * File:   Estructuras_arreglos6.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

void sumar(int a [2][2], int b [2][2]);

int main(int argc, char** argv) {
    
    int tabla1 [2][2] = {{1,2},{2,1}};
    int tabla2 [2][2] = {{2,1},{1,2}};
    int i, j;
    
    sumar (tabla1, tabla2);
    
    return (EXIT_SUCCESS);
}

void sumar(int a [2][2], int b [2][2]){
    
    int suma [2][2];
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            suma[ i ][ j ] = a[ i ] [ j ] + b[ i ] [ j ];
        }
    }
    
    printf("La suma de las matrices es: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", suma[ i ][ j ]);
        }
        printf("\n");
    }
}


