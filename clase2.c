#include <stdio.h>
#include <stdlib.h>

int main() {

    int flag = 0;
    int num;
  
    

    while(flag == 0) {
        printf("Ingrese el simbolo de la operacion que desea\r\n");
        printf("suma: 1\r\n");
        printf("resta: 2\r\n");
        printf("multiplicacion: 3\r\n");
        printf("division: 4 \r\n");
        printf("potencia: 5\r\n");
        printf("radicazion: 6\r\n");
        printf("otro numero para salir\r\n");
        scanf("%d", &num);


        float x, y;
        int i; 
        int res = 1;
        int base, exp;
        switch (num) {
            case 1:
                printf("ingrese el primer numero\r\n");
                scanf("%f", &x);
                printf("ingrese el segundo numero\r\n");
                scanf("%f", &y);
                printf("la suma es: %f\r\n", x + y);
                break;

            case 2:
                printf("ingrese el primer numero\r\n");
                scanf("%f", &x);
                printf("ingrese el segundo numero\r\n");
                scanf("%f", &y);
                printf("la resta es: %.2f\r\n", x - y);
                break;

            case 3:
                printf("ingrese el primer numero\r\n");
                scanf("%f", &x);
                printf("ingrese el segundo numero\r\n");
                scanf("%f", &y);
                printf("la multipliacion: %.2f\r\n", x * y);
                break;

            case 4:
                printf("ingrese el primer numero\r\n");
                scanf("%f", &x);
                printf("ingrese el segundo numero\r\n");
                scanf("%f", &y);
                printf("la division es: %.2f\r\n", x / y);
                break;

            case 5:
                
                printf("ingrese la base\r\n");
                scanf("%d", &base);
                printf("ingrese el exponente\r\n");
                scanf("%d", &exp);

                for(i = 1; i <= exp; i++) {
                    res = res * base;
                }
                printf("la potencia es: %d\r\n", res);
                
                break;

            default:
                flag = 1;

            
        }

   }
    return 0;
    
}