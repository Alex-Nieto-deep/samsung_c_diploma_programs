#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

static const int MAX_LENGTH = 4;
static const unsigned int PERMUTATIONS = 500000;

int main() {

    const unsigned char characters[] = "1234567890abcdefghijk";
    unsigned char password[] = "55a5";
    unsigned char result[] = "aaaa";
    unsigned char foundResults[PERMUTATIONS][MAX_LENGTH];
    unsigned int counter = 0;

    srand(time(NULL));
    do {
        do {
            int i;
            for (i = 0; i < MAX_LENGTH; i++) {
                unsigned int index = (rand() % strlen(characters)) ;
                result[i] = characters[index];
            } 
        } while(isResultAlreadyfound(foundResults, result, counter));
            strcpy(foundResults[counter], result);
            counter = counter + 1;
            printf("Generated password N%d: %s - %d\n", counter, result, strcmp(password, result));
    } while(strcmp (password, result));

    return 0;
}

int isResultAlreadyfound(unsigned char foundResults[][MAX_LENGTH], unsigned char result[], int counter) {
    int j;
    for (j = 0; j < counter; j++) {
        if ( !strcmp(foundResults[j], result))
        return TRUE;
    }
    return FALSE;
}