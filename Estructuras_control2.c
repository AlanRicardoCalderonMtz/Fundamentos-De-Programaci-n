/*
 Hacer un arbol con ' * ' del tipo:
 >> Ejemplo:
 Digite el número de filas: 5
          *
          **
          ***
          ****
          *****
 */

/* 
* File:   Estructuras_control2.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int num_filas;
    
    printf("Digite el número de filas: ");
    scanf("%d", &num_filas);
    
    for(int i = 0; i < num_filas; i++){
        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return (EXIT_SUCCESS);
}

