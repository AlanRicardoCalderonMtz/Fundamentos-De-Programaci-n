/* 
 * File:   2 Condicional if.c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 9 de noviembre de 2020, 07:15 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    int A=20;
    int B=15;
    int C=10;
    int D=5;
   
    if(A>B && A>C && A>D){
        printf("El número mayor es A: %d", A);  
    } 
    else if(B>A && B>C && B>D){
        printf("El número mayor es B: %d", B);
    }
    else if(C>A && C>B && C>D){
        printf("El número mayor es C: %d", C);
    }
   else if(D>A && D>B && D>C){
        printf("El número mayor es D: %d", D);
    } else {
        printf("Todos son iguales");
    }      
    return 0;
}
