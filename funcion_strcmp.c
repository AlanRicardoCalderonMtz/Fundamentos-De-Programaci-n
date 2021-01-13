/* 
 * File:   funcion_strcmp.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    
     char cadena [ ] = "Hola Mundo";
    char texto [15];
    
    printf("Digite la frase 'Hola Mundo'" );
    printf(" Para comprobar si se escribio igual:\n");
    gets(texto);
    
    if(strcmp(cadena, texto) == 0){
        printf("Las cadenas son IGUALES.");
    } else{
        printf("Las casenas son DIFERENTES");
    }
    
    return (EXIT_SUCCESS);
}

