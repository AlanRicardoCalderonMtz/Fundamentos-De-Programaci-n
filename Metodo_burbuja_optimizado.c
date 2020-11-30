/*
 * Metodo burbuja optimizado
 */

/* 
 * File:   Metodo_burbuja_mejorado.c
 * Author: Alan Ricardo Calderón Martínez.
 * Created on 25 de noviembre de 2020, 04:02 PM
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

     int canti, aux;
     int bandera;

    printf("\tPrograma de método de ordenamiento burbuja optimizado: \n");
    printf("\nIngrese la cantidad del verctor: ");
    scanf("%d", &canti);

    int vector[canti];

    for(int i = 0; i < canti; i++ ){
        printf("\nIngrese el valor %d: ", i+1);
        scanf("%d", &vector[i]);
    }

    for (int i = 1; i < canti; i++){
        bandera = 0;

        for (int j = canti - 1; j >= i; j--){
            if(vector[j-1] > vector [j]){
                aux = vector[j-1];
                vector[j-1] = vector[j];
                vector[j] = aux;
                bandera = 1;
            }
        }
        if (bandera == 0){
        break;
        }
    }

    printf("\n VALORES ORDENADOS DE FORMA ASCENDENTE: ");
    for(int i = 0; i < canti; i++){
        printf("\nOrdenado %d ", vector[i]);
    }

return 0;
}



