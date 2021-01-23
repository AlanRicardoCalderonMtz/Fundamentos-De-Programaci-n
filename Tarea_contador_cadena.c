/* 
 * File:   Tarea_ficheros.c
 * Author: Alan Ricardo Calderón Martínez
 *
 * Created on 19 de enero de 2021, 11:36 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void vaciar(int array[]);

int main(){
    int numPalabra=0;
    char cad [50]; //Declaracion de una cadena.
    char abecedario[ ] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ "}; //Declaración del abecedario.
    //[0=A,1=B,2=C,3=D,4=E,5=F,6=G,7=H,8=I,9=J,10=K,11=L,12=M,13=N,14=O,15=P,16=Q,17=R,18=S,19=T,20=U,21=V,22=W,23=X,24=Y,25=Z]
    char final [ ] = "YA";
    int cants[26]; //Declara array de 26 enteros con valor cero.
    vaciar(cants); //Llama a la función vaciar y le pasa el array cants.

    //Muestra mensajes.
    printf("Introduzca la cadena use la palabra 'YA' para finalizar. \n");
    printf("Ejemplo: HOLA MUNDITO \n\n");

    //Itera por siempre, ya que true siempre es true (luego aparece un break).
    for(numPalabra=0; true; numPalabra++){
        vaciar(cants); //Llama a función vaciar.
        printf("\n>> Ingrese una palabra: "); //Pide una palabra.
        gets(cad);
        if(cad  == final){
           break; //Si la palabra es "YA" deja de iterar.
        }
        
        //Itera una palabra, letra por letra.
        for(int i=0; cad[i] != '\0'; i++){
            //Itera 26 veces pero en vez de i, con j.
            for(int j=0; j<26; j++){
                //Si la letra del abecedario coincide con la letra de la palabra...
                //Entonces suma 1 a la cantidad de apariciones.
                if(cad[i] == abecedario[j])
                    cants[j]++;
            }
        }
        //Muestra el número de la palabra.
        printf("\n Número de la palabra: \n\n", numPalabra);

        //Itera 26 veces.
        for(int i=0; i<26; i++){
            //Si la cantidad es mayor a cero, entonces...
            if(cants[i] > 0){
                //Muestra cantidad de apariciones de la letra...
                //... del abecedario en la posición i.
                printf("La letra %c se uso: %d veces\n ", abecedario[i], cants[i]);
            }
        }
    }
        return (EXIT_SUCCESS);
}

//Función que recibe un array, pone todos los elementos del array en 0 (cero).
void vaciar(int array[]){
    //Itera 26 veces
    for(int i=0;i<26;i++){
        //El elemento de la posición i del array lo pone en cero.
        array[i]=0;
    }
}

