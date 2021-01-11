/*
 * Realizar un programa que muestre un menú con las opciones: sumar, restar, multiplicar
 y dividir; el programa debe solicitar una opción y realizar la tarea elegida, se debe usar
 un procedimiento.
 */

/* 
 * File:   Estructuras_funciones2.c
 * Author: Alan Ricardo Calderón Martínez
 */

#include <stdio.h>
#include <stdlib.h>

void menu();
void suma();
void resta();
void multiplicacion();
void division();

int main(int argc, char** argv) {
    
    menu();
    return (EXIT_SUCCESS);
}

void menu(){
    int opcion;
    
    do{
    printf(" ******* MENÚ DE OPCIONES *******\n");
    printf(" *  1º Suma                     *\n");
    printf(" *  2º Resta                    *\n");
    printf(" *  3º Multiplicación           *\n");
    printf(" *  4º  División                *\n");
    printf(" *  5º Salir                    *\n");
    printf(" ********************************\n");

    printf("\n >> Ingresa una opción: ");
    scanf("%d", &opcion);
    
    switch (opcion){
            case 1: 
                printf("\n Estas en la opción suma.");
                suma(); break;
            case 2: 
                printf("\n Estas en la opción resta.");
                resta(); break;
            case 3: 
                printf("\n Estas en la opción multiplicación.");
                multiplicacion(); break;
            case 4: 
                printf("\n Estas en la opción division.");
                division(); break;
        } 
    } while(opcion != 5);    
}

void suma(){
    int n1, n2, suma = 0;
    
    printf("\nDigite 2 números: ");
    scanf("%d %d", &n1, &n2);
    
    suma = n1 + n2;
    
    printf("La suma es: %d\n", suma);
}

void resta(){
    int n1, n2, resta = 0;
    printf("\nDigite 2 números: ");
    scanf("%d %d", &n1, &n2);
    
    resta = n1 - n2;
    
    printf("La resta es: %d\n", resta);    
}

void multiplicacion(){
    int n1, n2, multi = 0;
    
    printf("\nDigite 2 números: ");
    scanf("%d %d", &n1, &n2);
    
    multi = n1 * n2;
    
    printf("La multiplicación es: %d\n", multi);     
}

void division(){
     int n1, n2, div = 0;
    
    printf("\nDigite 2 números: ");
    scanf("%d %d", &n1, &n2);
    
    div = n1 / n2;
    
    printf("La división es: %d\n", div);     
}

