#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//O programa le um array de inteiros do teclado, e imprime o endereco das posicoes que contem valores pares. 

int main (){
    
	int *ptrvet, aux = 0, vet [5], i = 0;
    
	printf("\n\nDigite cinco valores inteiros para preencher seu vetor\n\n");
    
	for (i = 0; i < 5; i++)
		scanf("%d",&vet[i]);
		
	for (i = 0, ptrvet = vet; i < 5; i++){
		aux = *ptrvet;
		if (aux % 2 == 0)
			printf("O endereco da posicao '%d' eh: '%p', e contem o valor '%d'\n\n",i, ptrvet, aux);
		ptrvet += 1;
	}
		system("pause");
		
    return 0;
}
