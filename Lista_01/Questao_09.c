#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A funcao recebe dois vetores e retorna um terceiro vetor com a soma dos elementos dos outro dois.

int SomaVet (int x, int y, int vet1[], int vet2[], int vet3[]);

int main (){
    
	int  n = 0, m = 0, p = m, i = 0, j = 0;
	int vet1[n], vet2[m], vet3[p];
	
	printf("\n\nDigite um numero inteiro para determinar o tamanho do vetor 1\n\n");
	scanf("%d",&n);
	printf("\n\nDigite o mesmo valor inteiro para determinar o tamanho do vetor 2\n\n");
	scanf("%d",&m);
	p = m;
		
	printf("\n\nDigite os valores do vetor 1\n");
	for(i = 0; i < n; i++)
		scanf("%d",(vet1 + i));

	printf("\n\nDigite os valores do vetor 2\n");
	for(j = 0; j < m; j++)
		scanf("%d",(vet2 + j));

	SomaVet (n, m, vet1, vet2, vet3);

	if(n != m)
		return 1;
	printf("\n\nA soma dos valores dos dois vetores eh:\n\n");
	for(j = 0; j < n; j++){
		printf("%d ",*(vet3 + j));
	}
	printf("\n\n\n");
	
	system("pause");
	return 0;
}


int SomaVet (int x, int y, int vet1[], int vet2[], int vet3[]){

	int i = 0;
	
	
	if(x != y){
		printf("\nOs vetores possuem tamanhos diferentes\n\n");
		return 1;
	}	
	
	for(i = 0; i < x; i++)
		*(vet3 + i) = (*(vet1 + i) + *(vet2 + i));
		

	
	return 0;
}

