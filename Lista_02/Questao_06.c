#include <stdio.h>
#include <stdlib.h>


// O codigo recebe dois inteiros e os imprime trocando os valores das variaveis 

void troca (float *a, float *b);

int main()
{   
    
	float a = 0, b = 0;
	printf("Insira dois numeros reais: 'a' e 'b' \n\n");
	scanf("%f",&a);
	scanf("%f",&b);
	
	troca (&a, &b);

	printf("\nAgora o valor de 'a' eh: %.2f \n\nE o valor de 'b' eh: %.2f \n\n",a, b);

	system ("pause");
	return 0;   
}



void troca (float *a, float *b){

	float aux = *a;
	*a = *b;
	*b = aux;


}
