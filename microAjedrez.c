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
    int i, j;
    const unsigned char characters[] = "ABCDEFGH";
    const unsigned char numbers[] = "12345678";
    char play[] = "C1";

    if ( (play[0] < 'I') && (play[1] < '9')) {
        printf("valida. la posicion si pertenece al tablero\r\n");
        if ((play[1] < '3') || (play[1]) > '6') {
            printf("ocupada. \r\n");
            if ((play[1] == '2') || (play[1] == '7')) {
            printf("la pieza es un peon");
            }
            else {
                switch (play[0])
                {
                case 'A':
                    printf("la pieza es una torre\r\n");
                    break;
                case 'B':
                    printf("la pieza es un caballo\r\n");
                    break;
                case 'C':
                    printf("la pieza es un alfil\r\n");
                    break;
                case 'D':
                    printf("la pieza es una reina\r\n");
                    break;
                case 'E':
                    printf("la pieza es un rey\r\n");
                    break;
                case 'F':
                    printf("la pieza es un alfil\r\n");
                    break;
                case 'G':
                    printf("la pieza es una caballo\r\n");
                    break;
                case 'H':
                    printf("la pieza es una torre\r\n");
                    break;
                default:
                    break;
                }
                if (play[1] < '3') {
                    printf("la pieza es negra\r\n");
                }
                else {
                    printf("la pieza es blanca");
                }
            }
        }
        else {
            printf("vacia. \r\n");
        }
    }
    else {
        printf("invalida. la posicion no pertenece al tablero\r\n");
    }
    return 0;
}