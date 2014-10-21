#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A funcao recebe um vetor e duas variaveis e retorna o menor e o maior elementos desse vetor nas veriaveis.

int MM (int *min, int *max, int n, int vet[]);

int main (){
    
	int  min = 1000, max = 0, n = 0, i = 0;
	int vet[n];
		
	printf("\n\nDigite o tamanho 'n' de um vetor.\n\n");
	scanf("%d",&n);
		
	for(i = 0; i < n; i++)
		vet[i] = (i*2);
	
	MM (&min, &max, n, vet);
		
	printf("\n\nO menor elemento do vetor eh: %d\n",min);
	printf("\n\nO maior elemento do vetor eh: %d\n",max);
	printf("\n\n");
	
	//system("pause");
	return 0;
}


int MM (int *min, int *max, int n, int vet[]){

	int i = 0;
	
	for(i = 0; i < n; i++){
		if(*min > vet[i])
			*min = vet[i];
	}

	
	for(i = 0; i < n; i++){
		if(*max < vet[i])
			*max = vet[i];
	}
			
	return 0;
}
