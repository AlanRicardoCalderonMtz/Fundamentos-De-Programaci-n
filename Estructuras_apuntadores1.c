/*
 * Realizar un programa que imprima el alfabeto en mayusculas con punteros

/* 
 * File:   Estructuras_apuntadores1.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    char letra;
    char *p_letra = &letra;
    
    for(letra = 'A'; letra <= 'Z'; letra++)
        printf("%c ", *p_letra);
    
    return (EXIT_SUCCESS);
}

