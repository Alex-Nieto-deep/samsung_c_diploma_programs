#include <stdio.h>
#include <stdlib.h>

#define INCREMENTO 0.001 //directice de procesamiento

float raiz(float number) {
    int iteraciones = 0;
    float iter = 0;
    float delta = INCREMENTO;

    while (iter < number)
    {
        iteraciones++;
        iter = delta * delta;
        delta = delta + INCREMENTO;
    }
}
    
