/* 
 * File:   Tablas de multiplicar con (For).c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 12 de noviembre de 2020, 03:20 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
        
    for(int i=1; i<=10; i++){
         printf("-------------------------------------------------------------------------------------\n\t\t\tTabla del número: %d\n", i);  
        
        for(int j=1; j<=10; j++){
            printf("%d X %d = %d \n", i, j, i*j);
            }
        printf("\n");    
    }
    return (EXIT_SUCCESS);
}


