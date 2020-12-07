/*
 * Funciones de la libreria math.h
 */

/* 
 * File:   Implementacion de math.c
 * Author: Alan Ricardo Calderón Martínez
 * Created on 30 de noviembre de 2020, 01:41 PM
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
    
    float x= 900.0;
    
    printf("\n Raíz cuadrada\n");
     
    printf("%.2f \n", sqrt(x));
    
    printf("\n Exponencial\n");
    
    printf("%.2f \n", exp(2.0));
    
    printf("\n Logaritmo\n");
    
    printf("%.2f\n", log(2.718282));
    
    printf("\n Logaritmo de base 10\n");
    
    printf("%.2f\n", log10(10.0));
    
    printf("\n Valor absoluto \n");
    
    printf("%.2f\n", fabs(10));
    
    printf("\n Redondea al entero ( Sea mayor al número dado ): \n");
    
    printf("%.2f\n", ceil(9.2));
    
    printf("\n Redondea al entero ( Sea menor al número dado ): \n");
    
    printf("%.2f\n", floor(9.2));
    
    printf("\n Potencia: \n");
    
    printf("%.2f\n", pow(5,2));
    
    printf("\n Residuo de 'X' y 'Y' \n");
    
    printf("%.2f\n", fmod(13.657, 2.333) );
    
    printf("\n Seno trigonométrico de x ( x en radianes) \n");
    
    printf("%.2f\n", sin(0.0) );
    
    printf("\n Coseno trigonométrico de x ( x en radianes) \n");
    
    printf("%.2f\n", cos(0.0) );
    
    printf("\n Tangente trigonométrico de x ( x en radianes) \n");
    
    printf("%.2f\n", tan(0.0) );
    
    return (EXIT_SUCCESS);
}

