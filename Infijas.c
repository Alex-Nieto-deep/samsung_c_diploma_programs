#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define tam 20



int prioridad(char simbolo) {
	int priori;
	switch(simbolo) {
		case '^': priori = 3;
		break;
		case '/': priori = 2;
		break;
		case '*': priori = 2;
		break;
		case '-': priori = 1;
		break;
		case '+': priori = 1;
		break;
		case ')': priori = 0;
		break;
		case '(': priori = 0;
		break;
	}
	return priori;
}

int prioridad(char simbolo);
int main()
{
	
 	 
	int opcion, tope = -1, pos = -1, tamexp;
	int pila[tam], epos[tam];
	char expinf[tam], simbolo;
	do{
		system("cls");
	 	printf("\n --------------------------------------------------");
		printf("\n         	Menu de Opciones           ");
		printf("\n  1.-->Convertir una Expresion de Infija a Postfija");
		printf("\n  2.-->Convertir una Expresion de Infija a Prefija");
		printf("\n  3.-->Salir del Menu");
		printf("\n --------------------------------------------------");
		printf("\n Ingrese su opcion: ");
		scanf("%d",&opcion);
		switch(opcion)
 		{
		case 1:
  			system("cls");
  			printf("\n Ingrese la expresion en notacion Infija (sin espacios): ");
			scanf("%s",&expinf);

			tope = -1;
			tamexp = strlen(expinf);
			int i;

			for (i = 0; i < tamexp; i++) {
				simbolo = expinf[i];
				if (simbolo == '(') {
					tope = tope + 1;
					pila[tope] = simbolo;
				} 
				else if (simbolo == ')') {
					while(pila[tope] != '(') {
						pos++;
						epos[pos] = pila[tope];
						tope--;

					}
					tope--;
				}
				else if ((simbolo >= '1' ) && (simbolo <= '9' )) {
					pos++;
					epos[pos] = simbolo;
				}
				else {
					while(tope > -1 && (prioridad(simbolo) <= prioridad(pila[tope]))) {
						pos++;
						epos[pos] = pila[tope];
						tope = tope - 1;
					}
					tope = tope + 1;
					pila[tope] = simbolo;
				}
			}
			while(tope >= -1) {
				pos++;
				epos[pos] = pila[tope];
				tope = tope - 1;
			}

			for (i = 0; i <= pos; i++) {
				printf("%c", epos[i]);
			}
			getch();
    	
    	
		break;
	
		case 2:
			system("cls");
			printf("\n Ingrese la expresion en notacion Infija (sin espacios): ");
			scanf("%s",&expinf);
    	
		break;
	
		case 3:
		break;
	
		default: printf("\n Por favor seleccione una opcion valida...");
		getch();
		break;
		}
	
	}while(opcion!=3);
	getch();
}




