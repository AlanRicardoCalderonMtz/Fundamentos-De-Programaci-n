/*
 * Hacer un programa que imprima la suma de todos los números pares que hay desde 1 hasta n, y que diga
 cuantos números hay
 */

/* 
* File:   Estructuras_control4.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int contador = 0, suma = 0, n;
    
    printf("Digite la cantidad de elementos: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            suma += i;
            contador++;
        }
    }
    
    printf("\n La suma es: %d", suma);
    printf("\n La cantidad de números es: %d", contador);
   
    return (EXIT_SUCCESS);
}

