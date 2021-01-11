/*
 * Mostrar los meses del año.
 * Pidiendole al usuario un numero (1 - 12) y mostrar el mes que corresponde 
 */

/* 
 * File:   Estructuras_decision3.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int mes;
    
    printf("Digite un número entre (1-12): ");
    scanf("%d", &mes);
    
    switch(mes){
        case 1: printf("Enero"); break;
        case 2: printf("Febrero"); break;
        case 3: printf("Marzo" ); break;
        case 4: printf("Abril" ); break;
        case 5: printf("Mayo"); break;
        case 6: printf("Junio" ); break;
        case 7: printf("Julio" ); break;
        case 8: printf("Agosto"); break;
        case 9: printf("Septiembre" ); break;
        case 10: printf("Octubre" ); break;
        case 11: printf("Noviembre" ); break;
        case 12: printf("Diciembre " ); break;
    }
    
    return (EXIT_SUCCESS);
}

