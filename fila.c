#include <stdlib.h>
#include <stdio.h> 

struct node
{
	int info;
	struct node *proximo;
}*frente, *cauda, *aux, *frenteAux;

int tam;

void inicia();
int first();
void insere(int dado);
void apaga();
void limpar();
void imprimir();

void inicia(){
	frente = NULL;
	cauda = NULL;
}
int first(){
	if((frente != NULL) && (cauda != NULL)){
		return frente->info;
	}
	else{
		return 0;
	}
}
void insere(int dado){
	if(cauda == NULL)
	{
		cauda = (struct node *)malloc (1 * sizeof(struct node));
		cauda->proximo = NULL;
		cauda->info = dado;
		frente = cauda;
	}else
	{
		aux = (struct node *)malloc (1 * sizeof(struct node));
		cauda->proximo = aux;
		aux->info = dado;
		aux->proximo = NULL;

		cauda = aux;
	}
	tam++;
}
void imprimir(){
	frenteAux = frente;
	if((frenteAux == NULL) && (cauda == NULL)){
		printf("\n Fila Vazia \n");
		return;
	}
	printf("Fila: ");
	while (frenteAux != cauda){
		printf("%d, ", frenteAux->info);
		frenteAux = frenteAux->proximo;
	}
	if(frenteAux == cauda){
		printf("%d", frenteAux->info);
	}
}
void apaga(){
	frenteAux = frente;

	if(frenteAux == NULL){
		printf("\n Fila vazia \n");
		return;
	}
	else{
		if(frenteAux->proximo != NULL){
			frenteAux = frenteAux->proximo;
			printf("\n Excluido o valor: %d \n", frente->info);
			free(frente);
			frente = frenteAux;
		}
		else{
			printf("\n Excluido o valor: %d \n", frente->info);
			free(frente);
			frente = NULL;
			cauda = NULL;
		}
	}
	tam--;
}
void limpar(){
	if((frente == NULL) && (cauda == NULL)){
		printf("\n Fila apagada! \n");
	}
	else{
		inicia();
		tam = 0;
		printf("\n Apagando...");
		printf("\n Fila apagada \n");
	}
}
int main(void){
	int elemento, digito, primeiro;
	inicia();		
	while(1){
			printf("\n 1 para inserir um elemento na fila");
		printf("\n 2 para apagar um elemento");
		printf("\n 3 para o primeiro um elemento");
		printf("\n 4 para limpar a fila");
		printf("\n 5 para Imprimir a fila");
		printf("\n 6 para ver o tamanho da fila");
		printf("\n 7 para sair");
		printf("\n Opção: ");
		scanf("%d", &digito);

		switch(digito){
			case 1:
				printf("\n Digite um numero para inserir:");
				scanf("%d", &elemento);
				insere(elemento);
				break;
			case 2:
				apaga(); break;
			case 3:
				primeiro = first();
				if(primeiro != 0){
					printf("\n O primeiro da fila é: %d", primeiro);
				}
				else{
					printf("\n Fila Vazia.");
				}
				break;
			case 4: 
				limpar();
				break;
			case 5:
				imprimir();
				break;
			case 6:
				if(tam == 0){
					printf("\n A fila está vazia \n");
				}
				else{
					printf("\n O tamanho da fila é: %d", tam);
				}
				break;
			case 7:
				exit(0);
				break;
			default:
				printf("\n Digite um numero que consta no menu \n");
				break;
		}
	}
}


