#include <stdio.h>
#include <stdlib.h>

int main() {
    char min, max;
    char min_a_max(char min);

    printf("ingrese un caracter: ");
    scanf("%c",&min);
    max = min_a_max(min);
    printf("\nla masyucula equivalente es: %c", max);

}
char min_a_max(char c1) {
    char c2;
    c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 - 'a'): c1;
    return c2;
}