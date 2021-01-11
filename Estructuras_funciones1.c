/*
 *Realizar un programa que realice la media aritmética de 2 números
 */

/* 
 * File:   Estructuras_funciones1.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int media (int n1, int n2);

int main(int argc, char** argv) {

    int a, b, c = 10, d = 20;
    
    printf("Digite 2 números: ");
    scanf("%d %d", &a, &b);
    
    printf("\n La media aritmética es: %d", media(a,b));
    printf("\n La media aritmética es: %d", media(c,d));
    
    return (EXIT_SUCCESS);
}

int media (int n1, int n2){
    
    int media_aritmetica = 0;
    media_aritmetica = (n1 + n2) / 2;
    
    return media_aritmetica;
}

