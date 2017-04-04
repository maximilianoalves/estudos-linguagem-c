#include <stdlib.h>
#include <stdio.h> 

void bubble_sort(int[], int);
void vetor_desordenado(int[]);

int main(void){
	int vetor[10];
	for (int i = 0; i < 10; ++i){
		int armVetor = 0;
		printf("\n Digite o item para inserir no vetor: ");
		scanf("%d", &armVetor);
		vetor[i] = armVetor;
	}
	vetor_desordenado(vetor);
	bubble_sort(vetor, 10);
	system("Pause");
}
void bubble_sort(int vetorAux[], int tam){
	int numAux;
	for (int i = 1; i < tam; i++){
		for (int j = 0; j < tam -1; j++){
			if(vetorAux[j] > vetorAux[j+1]){
				numAux = vetorAux[j];
				vetorAux[j] = vetorAux[j+1];
				vetorAux[j+1] = numAux;
			}
		}
	}
	printf("\n Vetor ordenado: ");
	for (int i = 0; i < tam; ++i){
		printf("\n %d", vetorAux[i]);
	}
}
void vetor_desordenado(int vetor[]){
	printf("\n Vetor desordenado: ");
	for (int i = 0; i < 10; ++i){
		printf("\n %d", vetor[i]);
	}
}