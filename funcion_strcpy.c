/* 
 * File:   funcion_strcpy.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
     char cadena[ ] = "Hola Mundito";
    char texto[30];
    
    printf("%s\n", cadena);
    
    strcpy(texto, cadena);
    
    printf("%s", texto);

    return (EXIT_SUCCESS);
}

