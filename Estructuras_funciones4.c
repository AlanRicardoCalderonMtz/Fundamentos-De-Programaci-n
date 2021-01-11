/*
 * Realizar un programa que muestre 3 números ordenados ascendentemente, utilizar un procedimiento para 
 cada operación

/* 
 * File:   Estructuras_funciones4.c
 * Author: Alan Ricardo Calderón Martínez
 */


#include <stdio.h>
#include <stdlib.h>

void ascendente(int a, int b, int c);

int main(int argc, char** argv) {
    
    int a, b, c;
    
    printf("Digite 3 números: ");
    scanf("%d %d %d", &a, &b, &c);
    
    ascendente(a, b, c);
    
    return (EXIT_SUCCESS);
}


void ascendente(int a, int b, int c){
    
    printf("\n>> Orden Ascendente: \n");
    
    if(a >= b && a>=c){
        if(b >= c){
            printf("%d %d %d", c, b, a);
         } else{
            printf("%d %d %d", b, c, a);
         }
    }
    if (b >= a && b >= c){
        if( a >= c){
        printf("%d %d %d", c, a, b);
        } else{
             printf("%d %d %d", a, c, b);
        }
    }
    if (c >= a && c >=b){
        if(a >= b){
            printf("%d %d %d", b, a, b);
        } else{
             printf("%d %d %d", a, b, c);
        }
    }
}