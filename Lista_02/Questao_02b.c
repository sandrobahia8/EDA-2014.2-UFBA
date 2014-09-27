#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Vamos analisar o trecho de codigo abaixo. 

void troca (int *i, int *j);

int main (){
    
    int a = 50, b = 125;
    
    troca (&a, &b);
    
    printf("\n\nTrocando os valores das variaveis temos: 'a = %d' e 'b = %d' \n\n",a,b);
    
	/* SAIDA: Falha de segmentação (imagem do núcleo gravada)
	*/
	return 0;
	
}

void troca (int *i, int *j){
	
	int *temp, aux;
	temp = &aux;
	*temp = *i;
	*i = *j;
	*j = *temp;
	
}
