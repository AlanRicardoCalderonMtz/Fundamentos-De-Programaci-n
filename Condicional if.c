/* 
 * File:   Condicional if de 3 números.c
 * Author: Alan Ricado Calderón Martínez
 *
 * Created on 9 de noviembre de 2020, 07:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int A=15;
    int B=10;
    int C=5;
    
    if(A>B && A>C){
        printf("A es el mayor: %d", A );
    } else if (B>A && B>C){
        printf("B es el mayor: %d", B);
    } else if (C>A && C>B){
        printf("C es el mayor: %d", C);
    } else {
        printf("todos son iguales");
    }   
    return 0;
}
