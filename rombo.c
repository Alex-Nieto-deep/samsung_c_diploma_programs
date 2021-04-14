#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main()
 {
	int i, j, k, x;
    printf("\ningrese el numero de fila de figura debe ser un\n impar entre 3 y 21: ");
    scanf("%d",&x);
   if ( x >= 3 && x <= 21){
        x = x - (x/2);

        for(i = 1; x - 1 >= i; i++) {
            for(j = x; j >= i; j--){
                printf(" ");
            }
            for(k = 1; 2 * i - 1 >= k; k++) {
                printf("*");
            }
            printf("\n");
        }
        for(i = 1; x >= i; i++) {
            for(j = 1; j <= i; j++){
                printf(" ");
            }
            for(k = 2 * x - 1; 2 * i - 1 <= k; k--) {
                printf("*");
            }
            printf("\n");
        }
   }else {
       printf("\n el  numero ingresado es invalido");
   }
    
	 
}