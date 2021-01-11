/*
 * Ingresar un número, si el número supera a 10, multipicar los 10 primeros números,
 sino, sumarlos.
 */

/* 
 * File:   Estructuras_decision1.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int numero, suma = 0, mult = 1, i =1;
    
    printf("Digite un número: ");
    scanf("%d", &numero);
    
    if (numero > 10){
        while(i <= 10){
            mult *= i;
            i++;
        }
        printf("\n La multiplicación es: %d", mult);
    } else{
        while(i <= 10){
            suma += i;
            i++;  
        }
        printf("\n La suma es: %d", suma);
    }

    return (EXIT_SUCCESS);
}

