/*
 * Suma pares e impares
 >> Ejemplo: 
 1 - 2 + 3 - 4...

 * Impares (+)
 * pares (-)
 * Suma_pares = -2 -4 -6...
 * Suma_impares = 1 + 3 + 5...
 * suma = Suma_pares  + Suma_impares
 */

/* 
* File:   Estructuras_control5.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int i = 1, suma = 0, suma_impares = 0, suma_pares = 0, elementos, negativo;
    
    printf("Digite el total de los elementos de la serie: ");
    scanf("%d", &elementos);
    
    while(i <= elementos){
        if(i % 2 == 0){
            negativo = i * (-1);
            suma_impares += negativo;            
        } else {
            suma_impares += i;
        }
        i++;
    }
    
    suma = suma_pares + suma_impares;
    
    printf("\n La suma total es: %d", suma);
    
    return (EXIT_SUCCESS);
}

