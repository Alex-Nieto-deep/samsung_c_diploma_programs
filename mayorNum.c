#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b, c;
    int maximo(int x, int y);

    printf("ingrese tres numeros: ");
    scanf("%d %d %d",&a , &b, &c);

    printf("el numero maximo es: %d", maximo(c, maximo(a, b)));

}

maximo(int x, int y) {
    int max;
    
    max = (x >= y) ? x : y;
    return max;
}