#include <stdio.h>
#include <stdlib.h>

//A funcao recebe um numero real e retorna a parte inteira e a parte fracionaria separadamente.

int Frac (float num, int *inteiro, float *fr);

int main (){
    
	float num = 0, fr = 0;
	int inteiro = 0;
	printf("\n\nDigite um numero real para separarmos as partes inteira e fracionaria(com duas casas)\n\n");
	scanf("%f",&num);
	
	Frac (num, &inteiro, &fr);
	
	printf("\nA parte inteira do numero eh: %d\n\n",inteiro);
	printf("\nA parte fracionaria do numero eh: %0.2f\n\n",fr);

	system("pause");
	return 0;
}


int Frac (float num, int *inteiro, float *fr){

	*inteiro = num;
	*fr = num-(*inteiro);

	return 0;	

}
