#include <stdio.h>
#include <stdlib.h>



void Soma (int *A, int B);

int main (){
    
	int A = 0, B = 0;
	printf("\n\nDigite dois valores inteiros, para armazenar a soma entre eles no primeiro\n\n");
	scanf("%d",&A);
	scanf("%d",&B);
	
	Soma (&A, B);
	
	printf("\nDepois da soma 'A' possui o valor: %d\n\n",A);
	printf("\nO valor de 'B' permanece o mesmo: %d\n\n",B);
	system("pause");
	return 0;
}


void Soma (int *A, int B){
	
	*A += B;	

}
