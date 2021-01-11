/*
 * Realizar un programa que permita leer una cadena de caracteres y que devuelva el número de 
 caracteres que tiene dicha cadena e imprimir dicha cadena al reves.
 */

/* 
 * File:   Estructuras_arreglos3.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    char palabra[30];
    int i = 0;
    
    printf("Digite una palabra: ");
    gets(palabra);
    
    while(palabra[i] != '\0'){
        i++;
    }
    
    printf("\n La palabra tiene: %d letras", i );
    
    printf("\n La palabra escrita al reves es: ");
    while(i >= 0){
        printf("%c", palabra[i--]);
    }
    
    return (EXIT_SUCCESS);
}
