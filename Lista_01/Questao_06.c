#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//O programa recebe valores para a, b, e c, e calcula as raizes de uma equacao do segundo grau do tipo ax²+bx+c=0. 

int raizes (float a, float b, float c, float *x1, float *x2);

int main (){
    
    int n = 0;
    float a, b, c, x1 = 0, x2 = 0;
    printf("\n\nDigite tres valores nao nulos para os fatores de uma equacao do segundo grau do tipo ax2+bx+c = 0.\n\n");
    do {
    printf("Insira o valor de a: ");
    scanf("%f",&a);
    printf("\nInsira o valor de b: ");
    scanf("%f",&b);
    printf("\nInsira o valor de c: ");
    scanf("%f",&c);
    if (a == 0 || b == 0 || c == 0)
		printf("\n\nValores incoerentes. Digite tres valores nao nulos\n\n");
	}while (a == 0 || b == 0 || c == 0);
    printf("\n\n");
    n = raizes (a, b, c, &x1, &x2);
    if (n == 0){
		system("pause");
		return 1;
	}
    printf("\n\nAs raizes da equacao do segundo grau informada sao:\n");
    printf("\n\nX1 = %.2f\n",x1);
    printf("\n\nX2 = %.2f\n",x2);
    
    system("pause");
    return 0;
}

int raizes (float a, float b, float c, float *x1, float *x2){
	float delta = 0;
	int n = 0;
	
	delta = ((b*b)-(4*a*c));
	
	if (delta < 0){
		printf("Para os dados informados, delta eh menor que zero\n\n");
		printf("Sendo assim, a equacao nao possue raizes reais!\n\n");
		system("break");
		
	}
	else if (delta == 0){
		printf("O valor de Delta eh = %.2f\n\n",delta);
		printf("\nA equacao possue duas raizes iguais\n");
		*x1 = (-b)/(2*a);
		*x2 = *x1;
		n = 1;
	}
	else{
		printf("O valor de Delta eh = %.2f\n\n",delta);
		printf("\nA equacao possue duas raizes distintas\n");
		*x1 = ((-b) - sqrt(delta)) / (2*a);
		*x2 = ((-b) + sqrt(delta)) / (2*a);
		n = 2;
	}

	return n;
}

