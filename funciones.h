/* 
 * File:   funciones.h
 * Author: Alan Ricardo Calderón Martínez
 */

#ifndef FUNCIONES_H
#define FUNCIONES_H

float PI = 3.1452;

int suma (int a, int b){
    return a+b;
}

int resta (int a, int b){
    return a-b;
}

char primer_caracter(char *cadena){
    return cadena [0];
}

double area_circulo(int radio){
    return PI*radio*radio;
}


#ifdef __cplusplus
}
#endif

#endif /* FUNCIONES_H */

