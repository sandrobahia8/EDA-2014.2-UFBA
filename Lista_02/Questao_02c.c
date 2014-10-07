#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//Vamos analisar o trecho de codigo abaixo. 


int main (){
    
    char *a, *b;
    a = "uva";
    b = "abacate";
        
    if (a < b)
	printf("\n'%s' vem antes de '%s' no dicionario\n\n", a,b);
    else
	printf("\n'%s' vem antes de '%s' no dicionario\n\n", b,a);
        
    printf("\nA comparacao alfabetica esta correta abaixo:\n\n");

    if (strcmp(a,b) == 0)
	printf("\n'%s' e '%s' eh a mesma palavra, estao no mesmo lugar do dicionario\n\n", a,b);
    else if (strcmp(a,b) == -1)
        	printf("\n'%s' vem antes de '%s' no dicionario\n\n", a,b);
	else
		printf("\n'%s' vem antes de '%s' no dicionario\n\n", b,a);

	return 0;
	
}
