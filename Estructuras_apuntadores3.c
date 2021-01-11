/*
Realizar un programa donde pida el nombre al usuario y devolver el número de vocales que hay.
/* 
 * File:   Estructuras_apuntadores3.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int cuenta_vocales(char *);

int main(int argc, char** argv) {

    char nombre[20];
    
    printf("Digite su nombre: ");
    gets(nombre);
    
    printf("Número de vocales: %d", cuenta_vocales(nombre));
    
    return (EXIT_SUCCESS);
}

int cuenta_vocales(char *nombre){
    
    int contador = 0;
    while(*nombre){
        switch(*nombre){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': contador++;
        }
        nombre++;
    }
    return contador;
}

