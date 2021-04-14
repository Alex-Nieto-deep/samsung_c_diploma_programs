#include<stdio.h>
#include<math.h>
int x;
float result;
int main(){
    printf("ingrese el valor de x: ");
    scanf("%d",&x);
    result = sin(x);
    printf("El valor ingresado es: %d\n", x);
    printf("El valor del seno de x es: %f", result);
    return 0;
}