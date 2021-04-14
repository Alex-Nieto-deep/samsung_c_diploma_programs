#include <stdio.h>
#include <string.h>
#include <time.h>

int main() {
    char palabra[60],rep[100],temporal[100];
    char pal;
    int longitud,inicial,acertado=0,temp=0,oportunidades=5;
    int i,j;
    int repetido=0,gano=0;
   
    printf("\tProyecto final mundo c\n");
    printf("\t  Juego del ahorcado\n  ");
    printf("Ingrese la palabra que se va a adivinar: ");
    gets(palabra);
   
   
    longitud = 0;
    inicial = 0;
    j = 0;
   
    rep[0] = ' ';
    rep[1] = '\0';
   
   
    do {
                system("cls");
        temp=0;
   
        if(inicial == 0) {
         for(i=0;i<strlen(palabra);i++) {
          if(palabra[i] == ' ') {
            temporal[i] = ' ';
             longitud++;
          }
          else {
             temporal[i] = '_';       
             longitud++;
          }
         }
        }
   
        inicial = 1;
       
        temporal[longitud] = '\0';
       
        for(i=0;i<strlen(rep);i++) {
           if(rep[i] == pal) {
            repetido = 1;
            break;
          }
          else {
           repetido = 0;
         }
        }
       
        if(repetido == 0) {
         for(i=0;i<strlen(palabra);i++) {
                    if(palabra[i] == pal) {
             temporal[i] = pal;
              acertado++;
              temp=1;
            }
          }
        }
       
        if(repetido == 0) {
         if(temp == 0) {
           oportunidades = oportunidades - 1;
         }
        }
        else {
         printf("Ya se coloco esa letra");
         printf("\n\n");
        }
       
        printf("\n");
       
        for(i=0;i<strlen(temporal);i++) {
         printf(" %c ",temporal[i]);
        }
       
        printf("\n");
       
        if(strcmp(palabra,temporal) == 0) {
            gano = 1;
            break;
        }
       
        printf("\n");
        printf("Letras Acertadas: %d",acertado);
        printf("\n");
        printf("Oportunidades Restantes: %d",oportunidades);
        printf("\n");
   
        rep[j] = pal;
        j++;
       
        if (oportunidades==0)
        {
           break;
        }
     
        printf("Introduzca una letra:");
        scanf("\n%c",&pal);
      
    }while(oportunidades != 0);
   
   
    if(gano) {
                printf("\n\n");
        printf("Felicidades, has ganado.");
    }
    else {
                printf("\n\n");
        printf("No te preocupes, intentalo de nuevo.");
    }
   
    printf("\n\n");
    system("PAUSE");
    return 0;

} 