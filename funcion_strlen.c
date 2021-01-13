/* 
 * File:   funcion_strlen.c
 * Author:  Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    //En este programa se calcula la longitud del string

        char cadena [ ] = "Hola Mundo";
    int longitud;
    
    longitud = strlen(cadena);
    
    printf("La longitud de la cadena es: %d", longitud);
    
    return (EXIT_SUCCESS);
}

