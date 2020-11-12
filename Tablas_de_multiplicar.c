/* 
 * File:   Tablas de multiplicar con (while).c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 10 de noviembre de 2020, 04:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
    int i=1;
    int j=1;
    
    printf("-------------------------------------------------------------------------------------\n\t\t\tTabla del número: %d\n", i);
     while(i<=10){        
        printf("%d x %d = %d\n", i, j, i*j);
         j++;
         
            
            while(j == 11){
            j = 1;
            i++;
            printf("\n");
            
            if(i <= 10){
                printf("-------------------------------------------------------------------------------------\n\t\t\tTabla del número: %d\n", i);   
            }            
         }    
    }
    return (EXIT_SUCCESS);
    }

