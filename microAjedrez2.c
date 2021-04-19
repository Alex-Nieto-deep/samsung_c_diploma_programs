#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char chess[8][8] = {
    2,3,4,5,6,4,3,2,
    1,1,1,1,1,1,1,1,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    0,0,0,0,0,0,0,0,
    1,1,1,1,1,1,1,1,
    2,3,4,5,6,4,3,2,
};

main() {
    char play[] = "A8";
    void colorPosicion(int fila, int columna);
    
    if ( (play[0] < 'I') && (play[1] < '9')) {
        printf("Valida.\r\n");
        if (chess[play[1] - 49][play[0] - 65] == 0) {
            printf("Vacia\r\n");
            colorPosicion( (play[1] - 48), (play[0] - 64));
        }
        else {
            printf("Ocupada\r\n");
            switch (chess[play[1] - 49][play[0] - 65])
            {
            case 1:
                printf("la pieza es un peon\r\n");
                break;
            case 2:
                printf("la pieza es una torre\r\n");
                break;
            case 3:
                printf("la pieza es un caballo\r\n");
                break;
            case 4:
                printf("la pieza es un alfil\r\n");
                break;
            case 5:
                printf("la pieza es una reina\r\n");
                break;
            case 6:
                printf("la pieza es un rey\r\n");
                break;
            default:
                break;  
            }
            if (play[1] < '3') {
                printf("La pieza es negra\r\n");
            }
            else {
                printf("la pieza es blanca\r\n");
            }
            colorPosicion( (play[1] - 48), (play[0] - 64));
        }
    }
    else {
        printf("Invalida.\r\n");
        return 0;
    }
}

void colorPosicion(int fila, int columna) {
    if ( fila % 2 == 0 && columna % 2 !=0) {
        printf("la casilla es negra");
    }
    else {
        printf("la casilla es blanca");
    }
}