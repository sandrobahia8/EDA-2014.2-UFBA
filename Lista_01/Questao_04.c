#include <stdio.h>
#include <stdlib.h>



void Le_Notas (float *n1, float *n2);

void Calc_Media (float n1, float n2, float *m1, float *m2);

void Exibe_Dados (float n1, float n2, float m1, float m2);

int main (){
    
	float n1 = -1, n2 = -1, MedSimples = 0, MedPonderada = 0;
	
	Le_Notas (&n1, &n2);
	
	Calc_Media (n1, n2, &MedSimples, &MedPonderada);
	
	Exibe_Dados (n1, n2, MedSimples, MedPonderada);

	system("pause");
	return 0;
}

void Le_Notas (float *n1, float *n2){
	
	float aux1 = -1, aux2 = -1;
	printf("\n\nDigite dois valores nao nulos das notas do aluno\n\n");
	do {
		scanf("%f",&aux1);
		scanf("%f",&aux2);
		if (aux1 < 0 || aux1 > 10 || aux2 < 0 || aux2 > 10)
			printf("\n\nValores incoerentes.\n\n");
	}while (aux1 < 0 || aux1 > 10 || aux2 < 0 || aux2 > 10);

	*n1 = aux1;
	*n2 = aux2;

}

void Calc_Media (float n1, float n2, float *m1, float *m2){

	*m1 = ((n1 + n2)/2);
	*m2 = ((n1 + n2*2)/3);

}

void Exibe_Dados (float n1, float n2, float m1, float m2){
	
	printf("\n\n\t*****Os dados digitados foram os seguinte:*****\n\n");
	printf("\n\t\tPrimeira nota: %.2f\n",n1);
	printf("\n\t\tSegunda nota: %.2f\n",n2);
	printf("\n\t\tA media simples de aluno eh: %.2f\n",m1);
	printf("\n\t\tA media ponderada que o aluno obteve foi: %.2f\n\n\n",m2);




}
