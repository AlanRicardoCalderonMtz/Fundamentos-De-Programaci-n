/* 
 * File:   While (Serie fibonacci) .c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 9 de noviembre de 2020, 07:26 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int numero;
    int x=0;
    int y=1;
    int z=1;
    
    printf("Ingrese el número para la serie fibonacci: ");
    scanf("%i", &numero);
    
    printf("1 , ");
    
    int i=1;
    while(i < numero){
        
        z = x+y;
        x = y;
        y = z;
                
        printf("%i , ", z);
                      
        ++i;
    }  
    return 0;            
}

    

