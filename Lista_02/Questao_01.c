#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Seja V um vetor. Vamos analisar a diferenca entre as expressoes abaixo. 

int main (){
    
    int v[] = {0,2,4,6,8};
    int *ptrvet;
    int aux1 = 0, aux2 = 0, aux3 = 0;
    ptrvet = v;
	printf("\n\nExplique a diferenca entre as expressoes abaixo.\n\n");
	aux1 = v[3];
	aux2 = (v + 3);
	aux3 = *(ptrvet + 3);
	printf("\nOresultado da expressao 'v[3]' eh: %d \n\n", aux1);
	printf("\nOresultado da expressao 'v + 3' eh: %d \n\n", aux2);
	printf("\nOresultado da expressao '*(ptrvet + 3)' eh: %d \n\n", aux3);
	
	/* SAIDA: Explique a diferenca entre as expressoes abaixo.
	Oresultado da expressao 'v[3]' eh: 6 
	Oresultado da expressao 'v + 3' eh: -1078126152 
	Oresultado da expressao '*(ptrvet + 3)' eh: 6
	*/
	return 0;
	
}
