#include <stdlib.h>
#include <stdio.h> 


void apagar();
void inserir();
void mostrar();

int limiteFila = 50;
int fila[50];
int cauda = -1;
int frente = -1;

void inserir(){
	int item;
	if(cauda == limiteFila -1 ){
		printf("\n A fila está cheia \n");
	}
	else{
		if(frente == -1){
			frente = 0;
		}
		printf("\n Digite o elemento para inserir na fila: ");
		scanf("%d", &item);
		cauda = cauda + 1;
		fila[cauda] = item;
	}
}
void apagar(){
	if(frente == -1 || frente > cauda){
		printf("\n A fila está vazia \n");
	}
	else{
		printf("\n Elemento apagado: %d", fila[frente]);
		frente = frente +1;
	}
}
void mostrar(){
	int indice;
	if(frente == -1){
		printf("\n A fila está vazia \n");
	}
	else{
		printf("\n Elementos");
		for(indice = frente; indice <= cauda; indice++){
			printf("\n %d", fila[indice]);
		}
		printf("\n");
	}
}
int main(void){
	int digito;
	while(1){
		printf("\n 1 para inserir um elemento na fila");
		printf("\n 2 para apagar um elemento");
		printf("\n 3 para Imprimir a fila");
		printf("\n 4 para sair");
		printf("\n Opção: ");
		scanf("%d", &digito);

		switch(digito){
			case 1:
				inserir(); break;
			case 2:
				apagar(); break;
			case 3:
				mostrar(); break;
			case 4:
				exit(0);
				break;
			default:
				printf("\n Digite um numero que consta no menu \n");
				break;
		}
	}
}