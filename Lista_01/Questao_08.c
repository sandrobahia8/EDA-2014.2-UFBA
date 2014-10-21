#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A funcao recebe um vetor com n elementos e retorna o maior elemento e quantas vezes ele ocorre no vetor.

void ElemVet (int *elemento, int *cont, int n, int vet[]);

int main (){
    
	int  n = 0, vet [] = {5,2,15,3,7,15,8,15,6,15}, i = 0;
	int elemento = 0, cont = 0;
	printf("\n\nDigite um numero inteiro para determinar a quantidade de elementos de um vetor\n\n");
	scanf("%d",&n);
		
	for(i = 0; i < n; i++)
		scanf("%d",&vet[i]);
			
	ElemVet (&elemento, &cont, n, vet);
	
	printf("\nO maior elemento do vetor eh: %d\n\n",elemento);
	printf("\nEsse numero ocorre '%d' vezes no vetor. \n\n",cont);

	system("pause");
	return 0;
}


void ElemVet (int *elemento, int *cont, int n, int vet[]){

	int i = 0, j = 0, aux = 0, maior = 0;
	int *ptr;

	for(i = 0; i < n; i++){
		if (maior <= vet[i])
			maior = vet[i];
		
	}

	for(j = 0; j < n; j++){
		if (maior == vet[j])
			aux += 1;
	}
	
	*elemento = maior;
	*cont = aux;
}
