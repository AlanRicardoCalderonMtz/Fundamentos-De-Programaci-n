/* 
 * File:   Tarea_ficheros.c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 19 de enero de 2021, 11:36 AM
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    FILE *F1;
    
    int numeros[3], suma = 0;
    float promedio = 0;
    F1 = fopen("datos.txt", "wt");
    
    for(int i = 0; i < 3; i++){
        printf("Digite el valor %d: ", i+1);
        scanf("%d", &numeros[i]);
        suma += numeros[i];
        fprintf(F1, "%d\n", numeros[i]);
    }
    
    promedio = suma / 3.0;
    printf("Su promedio es: %.4f", promedio);
    fprintf(F1, "%.4f", promedio);
    printf("\n\n");   
        
    return (EXIT_SUCCESS);
}


