#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A funcao recebe um vetor e retorna o maior elemento desse vetor. O programa le um vetor com N valores inteiros e imprime o vetor com K elementos por linha. N e K sao informados pelo usuario.

int MaiorElem (int x, int vet[]);

int main (){
    
	int  n = 0, k = 0, i = 0, maior = 0, cont = 0;
	int vet[n];
		
	printf("\n\nDigite dois valores, 'n' e 'k'.\n");
	printf("\nSendo 'n' o tamanho do vetor e 'k' o numeros de elementos a ser impresso por linha!\n\n");
	scanf("%d",&n);
	scanf("%d",&k);
	
	printf("Digite os '%d' valores do vetor:\n\n",n);
	for(i = 0; i < n; i++)
		scanf("%d", &vet[i]);
	
	maior = MaiorElem (n, vet);
		
	printf("\n\nO maior elemento do vetor eh: %d\n",maior);
	printf("\n\nO vetor digitado foi:\n");

	for(i = 0; i < n; i++){
		printf(" %d ", vet[i]);
		cont++;
		if(cont == k){
			cont = 0;
			printf("\n");
		}
	}
	printf("\n\n");

	system("pause");
	return 0;
}


int MaiorElem (int x, int vet[]){

	int maior = 0, i = 0;
	
	for(i = 0; i < x; i++){
		if(maior < vet[i])
			maior = vet[i];
	}
			
	return maior;
}
