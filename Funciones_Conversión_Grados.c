/*

 */

/* 
 * File:   Funciones_Conversión_Grados.c
 * Author: Alan Ricardo Calderón Martínez
 * Created on 7 de diciembre de 2020, 11:09 AM
 */


#include <stdio.h>
#include <stdlib.h>

void C_F(float);
void C_K(float);
void F_C(float);
void F_K(float);
void K_F(float);
void K_C(float);
void Pedir_Centigrados();
void Pedir_Fahrenheit();
void Pedir_Kelvin();

float GradosC, GradosF, GradosK; //Variables Globales

int main(int argc, char** argv) {

    int opcion;

    do{
    printf(" ************ MENÚ DE OPCIONES ************\n");
    printf(" *  1º Centigrados a Fahrenheit           *\n");
    printf(" *  2º Centigrados a Kelvin               *\n");
    printf(" *  3º Farenheit a Centigrados            *\n");
    printf(" *  4º Farenheit a Kelvin                 *\n");
    printf(" *  5º Kelvin a Fahrenheit                *\n");
    printf(" *  6º Kelvin a Centigrados               *\n");
    printf(" *  7º Salir                              *\n");
    printf(" ******************************************\n");

    printf("\n >> Ingresa una opción: ");
    scanf("%d", &opcion);

    switch (opcion){
        case 1:
            printf("\nEstas en la conversión de  Centigrados a Fahrenheit.\n ");
            Pedir_Centigrados();
            C_F(GradosC);
            system("cmd /c pause");
            break;
        case 2:
            printf("\nEstas en la conversión de Centigrados a Kelvin.\n ");
            Pedir_Centigrados();
            C_K(GradosC);
            system("cmd /c pause");
            break;
        case 3:
            printf("\nEstas en la conversión de Fahrenheit  a Centigrados.\n ");
            Pedir_Fahrenheit();
            F_C(GradosF);
            system("cmd /c pause");
            break;
        case 4:
            printf("\nEstas en la conversión de Fahrenheit a Kelvin.\n ");
            Pedir_Fahrenheit();
            F_K(GradosF);
            system("cmd /c pause");
            break;
        case 5:
            printf("\nEstas en la conversión de Kelvin a Fahrenheit.\n ");
            Pedir_Kelvin();
            K_F(GradosK);
           system("cmd /c pause");
            break;
        case 6:
            printf("\nEstas en la conversión de Kelvin a Centigrados.\n ");
            Pedir_Kelvin();
            K_C(GradosK);
            system("cmd /c pause");
            break;
        case 7:
             printf("\n---------SALIENDO---------\n ");
             system("cmd /c pause");
             break;
        default :
            printf("La opción que ingreso es incorrecta.\n");
            system("cmd /c pause");
            break;
        }
   
        system("cmd /c cls");
    } while(opcion <= 6);

    return (EXIT_SUCCESS);
}

void Pedir_Centigrados(){
    printf("\nIntroduzca los Grados Centigrados: ");
    scanf("%f", &GradosC);
}

void Pedir_Fahrenheit(){
    printf("\nIntroduzca los Grados Fahrenheit : ");
    scanf("%f", &GradosF);
}

void Pedir_Kelvin(){
     printf("\nIntroduzca los Grados Kelvin : ");
    scanf("%f", &GradosK);
}

void C_F (float x){
    GradosF = (GradosC * 9/5) + 32;
    printf("Los grados Fahrenheit son: %.2fºF\n\n", GradosF);
}

void C_K (float x){
    GradosK = GradosC + 273.15;
    printf("Los grados Kelvin son: %.2fºK\n\n", GradosK);
}

void F_C (float x){
    GradosC = (GradosF - 32) * 5/9;
    printf("Los grados Centigrados son: %.2fºC\n\n", GradosC);
}

void F_K (float x){
    GradosK = (GradosF - 32) * 5/9 + 273.15;
    printf("Los grados Kelvin son: %.2fºK\n\n", GradosK);
}


void K_F (float x){
    GradosF = (GradosK - 273.15) * 1.8 + 32;
    printf("Los grados Fahrenheit son: %.2fºF\n\n", GradosF);
}

void K_C (float x){
    GradosC = GradosK - 273.15;
    printf("Los grados Centigrados son: %.2fºC\n\n", GradosC);
}


