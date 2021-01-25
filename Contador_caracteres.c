/* 
 * File:   Contador_caracteres.c
 * Author: Alan Ricardo Calderón Martínez.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
   
    char cad[100];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i2=0,j=0,k=0,l=0,m=0,n=0,n2=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

        printf("Introduzca la cadena: ");
        gets(cad);

        int i=0;
        while(cad[i] != '\0'){
        

        if(cad[i]=='a'){
            a++;
        }

        if(cad[i]=='b'){
            b++;
        }

        if(cad[i]=='c'){
            c++;
        }


        if(cad[i]=='d'){
            d++;
        }

        if(cad[i]=='e'){
            e++;
        }

        if(cad[i]=='f'){
            f++;
        }

        if(cad[i]=='g'){
            g++;
        }

        if(cad[i]=='h'){
            h++;
        }

        if(cad[i]=='i'){
            i2++;
        }

        if(cad[i]=='j'){
            j++;
        }

        if(cad[i]=='k'){
            k++;
        }

        if(cad[i]=='l'){
            l++;
        }

        if(cad[i]=='m'){
            m++;
        }

        if(cad[i]=='n'){
            n++;
        }

        if(cad[i]=='ñ'){
            n2++;
        }

        if(cad[i]=='o'){
            o++;
        }

        if(cad[i]=='p'){
            p++;
        }

        if(cad[i]=='q'){
            q++;
        }

        if(cad[i]=='r'){
            r++;
        }

        if(cad[i]=='s'){
            s++;
        }

        if(cad[i]=='t'){
            t++;
        }

        if(cad[i]=='u'){
            u++;
        }

        if(cad[i]=='v'){
            v++;
        }

        if(cad[i]=='w'){
            w++;
        }

        if(cad[i]=='x'){
            x++;
        }

        if(cad[i]=='y'){
            y++;
        }

        if(cad[i]=='z'){
            z++;
        }

            i++;
    }


    if(a > 0)
        printf("La letra A se uso %d veces\n", a);
    if(b != 0)
        printf("La letra B se uso %d veces\n", b);
    if(c!= 0)
       printf("La letra C se uso %d veces\n", c);
    if(d != 0)
       printf("La letra D se uso %d veces\n", d);
    if(e != 0)
       printf("La letra E se uso %d veces\n", e);
    if(f != 0)
       printf("La letra F se uso %d veces\n", f);
    if(g != 0)
        printf("La letra G se uso %d veces\n", g);
    if(h != 0)
        printf("La letra H se uso %d veces\n", h);
    if(i2 != 0)
     printf("La letra I se uso %d veces\n", i2);
    if(j!= 0)
     printf("La letra J se uso %d veces\n", j);
    if(k != 0)
     printf("La letra K se uso %d veces\n", k);
    if(l != 0)
     printf("La letra L se uso %d veces\n", l);
    if(m != 0)
     printf("La letra M se uso %d veces\n", m);
    if(n != 0)
     printf("La letra N se uso %d veces\n", n);
    if(n2!=0)
     printf("La letra Ñ se uso %d veces", n2);
    if(o != 0)
     printf("La letra O se uso %d veces\n", o);
    if(p != 0)
     printf("La letra P se uso %d veces\n", p);
    if(q != 0)
     printf("La letra Q se uso %d veces\n", q);
    if(r != 0)
     printf("La letra R se uso %d veces\n", r);
    if(s != 0)
     printf("La letra S se uso %d veces\n", s);
    if(t != 0)
     printf("La letra T se uso %d veces\n", t);
    if(u != 0)
     printf("La letra U se uso %d veces\n", u);
    if(v != 0)
     printf("La letra V se uso %d veces\n", v);
    if(w != 0)
     printf("La letra W se uso %d veces\n", w);
    if(x != 0)
     printf("La letra X se uso %d veces\n", x);
    if(y != 0)
     printf("La letra Y se uso %d veces\n", y);
    if(z != 0)
     printf("La letra Z se uso %d veces\n", z);

    return (EXIT_SUCCESS);
}

