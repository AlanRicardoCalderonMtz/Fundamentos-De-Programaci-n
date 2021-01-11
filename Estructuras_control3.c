/*
 * Hacer un bucle do - while para imprimir las letras del alfabeto en minusculas
 */

/* 
* File:   Estructuras_control3.c
 * Author: Alan Ricardo Calderón Martínez
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char letra = 'a';
    
    do{
        printf("%c ", letra);
        letra++;
    } while(letra <= 'z');
    
    return (EXIT_SUCCESS);
}

