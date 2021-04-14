#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i, j, k;             
    int list[100]={}; 
    int temp=0;
    int check = 1;
    int tam, aux;         

    while (check == 1)
    {
        printf("ingrese 1 para contunuar\t\n 2 para salir\n");
        scanf("%d", &check);
        if(check == 1) {
            printf("ingrese el tam de la lista\n");
            scanf("%d", &tam);
            for (k = 0;k < tam; k++) {
                printf(" ingrese  el elemento %d ",k + 1 );
                scanf("%d", &aux);
                list[k] = aux;
            }

            for (i = 0; i < tam; i++){
                for (j = 0; j < tam - i ; j++){
                    if (list[j] > list[j+1]){

                    temp=list[j];
                    list[j]=list[j+1];
                    list[j+1]=temp;
                    }
                }
            }
            int l;
            for (l = 0; l < tam; l++) {
                printf("%i\n", list[l + 1]);
            }

        }else {
            check = 2;
            printf("ejecucion terminada");
        }

    }
    
 
}
