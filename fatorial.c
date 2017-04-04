#include <stdlib.h>
#include <stdio.h> 

int fatorial(int);

int main(void){
	int num = 0;
	printf("\n Digite um numero para calcular o fatorial: ");
	scanf("%d", &num);

	int resultadoFatorial = fatorial(num);
	printf("\n O fatorial de %d é %d \n", num, resultadoFatorial);
	exit(0);
}
int fatorial(int num){
	if (num < 1){
		return 1;
	}
	return num * fatorial(num-1);
}