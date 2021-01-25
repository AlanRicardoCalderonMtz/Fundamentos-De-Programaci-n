/* 
 * File:   Recursividad_Torres-Hanoi.c
 * Author: Alan Ricardo Calderón Martínez.
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Jugada_hanoi(int disco, int torre1, int torre2, int torre3){
    if(disco == 1){
        printf("Mover disco de la torre %d hacia de la torre %d\n", torre1, torre3);
    } else {
        Jugada_hanoi (disco-1, torre1, torre3, torre2);
        printf("Mover disco de la torre %d hacia de la torre %d\n", torre1, torre3);
        Jugada_hanoi (disco-1, torre2, torre1, torre3);
    }
}

int main(int argc, char** argv) {
    
    int convinaciones;
    char respuesta;
    do{

    int Torre1 = 1, Torre2 = 2, Torre3 = 3, Disco = 0;
    printf("\n¿Con cuántos discos desea jugar? ");
    scanf("%d", &Disco);
    Jugada_hanoi (Disco, Torre1, Torre2, Torre3); 
        
    convinaciones = pow(2,Disco)-1;
    printf(">> Cantidad de convinaciones: %d ", convinaciones);
    
    printf("\n ¿Desea volver a jugar? 'S' = SI: ");
    scanf("%s", &respuesta);
    } while( respuesta == 'S');
     
    return (EXIT_SUCCESS);
}

