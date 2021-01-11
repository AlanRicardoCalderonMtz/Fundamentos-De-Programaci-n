/*
 * Ingrese un número y calcule e imprima su raiz cuadrada.
 * Si el número es negativo, imprimir el número y un mensaje que diga: " Tiene raíz imaginaría ".
 */

/* 
 * File:   Estructuras_decision5.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {

    int numero;
    float raiz_cuadrada;
    
    printf("Digite un número: ");
    scanf("%d", &numero);
    
    if (numero > 0){
        raiz_cuadrada = sqrt(numero);
        printf("\nSu raíz cuadrada es: %.2f\n", raiz_cuadrada);
    } else 
        printf("\nEl número tiene raíz imaginaria\n");
    
    return (EXIT_SUCCESS);
}

