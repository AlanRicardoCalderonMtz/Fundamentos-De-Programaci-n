/* 
 * File:   tarea_headers.c
 * Archivos de cabecera
 * Author: Alan Ricado Calderón Martínez
 */
//Tarea_headers: main.
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char** argv) {
    
    int a = 3, b  = 2, c;
    float area;
    char inicial;
    
    c = suma(a,b);
    printf("C: %d\n", c); 
    
     c = resta(a,b);
    printf("C: %d\n", c); 
    
    area = area_circulo(2);
    printf("Area = %.4f\n", area);
    
    inicial = primer_caracter("chelin");
    printf("Primer caracter: %c", inicial); 

    return (EXIT_SUCCESS);
}

