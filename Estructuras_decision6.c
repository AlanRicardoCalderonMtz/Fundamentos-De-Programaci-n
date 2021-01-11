/*
 Visualizar la tarifa de luz, según el gasto de la corriente electrica.
 * Para un gasto menor de 1,000 Kw x h La tarifa es 1.2
 * Para un gasto entre 1,000 y 1,850 Kw x h La tarifa es 1.0
 * Para un gasto mayor de 1,850 Kw x h La tarifa es 0.9
 */

/* 
 * File:   Estructuras_decision6.c
 * Author: Alan Ricardo Calderón Martínez
*/

#include <stdio.h>
#include <stdlib.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main(int argc, char** argv) {

    float gasto, tasa;
    
    printf("Digite el total del gasto: ");
    scanf("%f", &gasto);
    
    if (gasto < 1000){
        tasa = TARIFA1;
    }
    if (gasto >= 1000 && gasto < 1850){
        tasa = TARIFA2;
    }
    if (gasto > 1850){
        tasa = TARIFA3;
    }
    
    printf("El total de tasa a pagar es: %.2f", tasa);
    
    return (EXIT_SUCCESS);
}

