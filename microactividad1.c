#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char secuencia[20];
    char juan[] = "00101010101101110111";
    char pedro[] = "00000101010101010101";
    char diego[] = "00100010010000001001";
    char validar = 0;
    printf("Ingresa la secuencia de caracteres de logitud 20: \n");
    scanf("%s:",&secuencia);

    if (strcmp(secuencia, juan) == 0) {
        printf("juan -> 99.99%");
        validar = 1;
    }
    else if (strcmp(secuencia, pedro) == 0)
    {
         printf("pedro -> 99.99%");
        validar = 1;
    }
    else if (strcmp(secuencia, diego) == 0)
    {
        printf("diego -> 99.99%");
        validar = 1;
    }
    

    if ( validar == 0) {
        char i;
        int cont = 0, cont2 = 0, cont3 = 0;
        int resultado, resultado2, resultado3;
        for (i = 0; i < strlen(secuencia); i++)
        {
            if(secuencia[i] == juan[i]) {
                cont ++;
            }
            if (secuencia[i] == pedro[i])
            {
                cont2++;
            }
            if (secuencia[i] == diego[i])
            {
                cont3++;
            }
        }
        printf("%d\n %d\n %d\n",cont, cont2, cont3);
        resultado = (cont * 100) / 20;
        resultado2 = (cont2 * 100) / 20;
        resultado3 = (cont3 * 100) / 20;

        if (resultado > resultado2 && resultado > resultado3){
            printf("juan -> %d%\n", resultado,"%");
            if (resultado2 > resultado3) {
                printf("pedro-> %d% \n", resultado2);
                printf("diego -> %d% \n", resultado3);   
            } else {
                printf("diego -> %d% \n", resultado3);
                printf("pedro-> %d% \n", resultado2);
            }
        }
        else if (resultado2 > resultado && resultado2 > resultado3)
        {
            printf("pedro-> %d% \n", resultado2);
             if (resultado > resultado3) {
                printf("juan -> %d% \n", resultado);
                printf("diego -> %d% \n", resultado3);   
            } else {
                printf("diego -> %d% \n", resultado3);
                printf("juan -> %d% \n", resultado);
            }
        }
        else if (resultado3 > resultado && resultado3 > resultado)
        {
            printf("diego -> %d \n", resultado3,"%");
             if (resultado > resultado2) {
                printf("juan -> %d \n", resultado,"%");
                printf("pedro-> %d \n", resultado2,"%");
            } else {
                printf("pedro-> %d \n", resultado2,"%");
                printf("juan -> %d \n", resultado,"%");
            }
        }
        

        

    }

}



