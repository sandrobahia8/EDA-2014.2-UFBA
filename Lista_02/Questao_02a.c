#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Vamos analisar o trecho de codigo abaixo. 

int main (){
    
    int x = 0, *ptr;
    x = 100;
    ptr = x;
    
    printf("\n\nO valor do ponteiro eh: %d \n\n",*ptr);
    printf("\n\nO valor esta incoerente porque o ponteiro recebeu o endereco da variavel. Nao seu valor!\n\n");
    ptr = &x;
    *ptr = x;
    printf("\n\nApos dereferenciar o ponteiro, seu valor eh impresso corretamente. O valor eh: %d \n\n",*ptr);
    
	/* SAIDA: Falha de segmentação (imagem do núcleo gravada)
	*/
	return 0;
	
}
