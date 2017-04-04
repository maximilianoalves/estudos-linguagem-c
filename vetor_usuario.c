#include <stdlib.h>
#include <stdio.h> 


int main(void){
	int tamVetor;
	printf("\n Digite o tamanho do vetor: ");
	scanf("%d", &tamVetor);
	int vetor[tamVetor];
	for (int i = 0; i < tamVetor; ++i){
		int armVetor = 0;
		printf("\n Digite um valor para armazenar no vetor: ");
		scanf("%d", &armVetor);
		vetor[i] = armVetor;
	}
	printf("\n Imprimindo o vetor:");
	for (int i = 0; i < tamVetor; ++i){
		printf("\n %d", vetor[i]);
	}
	printf("\n");
}