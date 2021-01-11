/*
 * Hacer una matriz de tipo entera preguntandole al usuario el número de filas y columnas,
rellenar la matriz y luego mostrarla en pantalla
 */

/* 
 * File:   Estructuras_arreglos5.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int tabla [50][50], filas, columnas, i, j;
    
    printf("Digite el número de filas: ");
    scanf("%d", &filas);
    printf("Digite el número de columnas: ");
    scanf("%d", &columnas);
    printf("\n\n");
    
    for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("Digite tabla[%d][%d]: ", i+1, j+1);
            scanf("%d", &tabla[ i ][ j ] );
        }
    } printf("\n\n");
    
     for(i = 0; i < filas; i++){
        for(j = 0; j < columnas; j++){
            printf("%d ", tabla[ i ][ j ]);
        }
        printf("\n");
     }
            
    return (EXIT_SUCCESS);
}