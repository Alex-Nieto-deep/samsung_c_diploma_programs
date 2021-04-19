#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 4

char db[][6][21] = {
    {
        {"pedro"},{"00000101010101010101"},
    },
    {
        {"juan"},{"00101010101101110111"},
    },
    {
        {"diego"},{"00100010010000001001"},
    },
    {
        {"alex"},{"00100111010101001011"},
    },
};

main() {
    char prueba[] = "01010101000011001100";
    char i = 0, j = 0;
    char culpa = 0;
    char registroADN[tam], registroID[tam];

    for ( i = 0; i < tam; i++){
        if (strcmp(db[i][1],prueba) == 0) {
            printf("%s culpabilidad 99.99 %%\r\n", db[i][0]);
            return 0;
        } 
    }
    for ( i = 0; i < tam; i++) {   
        culpa = 0;
        for (j = 0; j < 20; j++){
            if ( prueba[j] == db[i][1][j]) {
                culpa++;
            }
        }
        registroADN[i] = culpa * 5;
        registroID[i] = i;
    }
    char temp, temp2;
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam - i ; j++){
            if (registroADN[j] < registroADN[j+1]){
                //para los valores
                temp = registroADN[j];
                registroADN[j]=registroADN[j+1];
                registroADN[j+1]=temp;

                //para los ids
                temp2 = registroID[j];
                registroID[j]=registroID[j+1];
                registroID[j+1]=temp2;
            }
        }
    }
    for (i = 0; i < tam; i++) {
        printf("%s -> culpabilidad %d %% \r\n",db[registroID[i]][0], registroADN[i]);
    }
}