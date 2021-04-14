#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int numeroAleatorio = 1 + rand() % (101 - 1);
    int x, cont = 0;
    int ciclo = 0;

    while(ciclo == 0) {
        cont++;
        printf("\ningrese el valor a adivinar: ");
        scanf("%d",&x);

        if(x < numeroAleatorio) {
            printf("\nEl numero que ingresaste es menor");
        } 
        else if(x > numeroAleatorio) {
            printf("\nEl numero que ingresaste es mayor");
        }
        else{
            printf("adivinaste el numero, te tomo %d intentos", cont );
            ciclo = 1;
        }
    }
   

}