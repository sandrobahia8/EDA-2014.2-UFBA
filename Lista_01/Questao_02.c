#include <stdio.h>
#include <stdlib.h>

//O programa lê dois valores inteiros e chama uma subrotina que ordena esses valores nas variaveis. 

void ordena (int *x, int *y);

int main (){
    
    int a = 0, b = 0;
    printf("Digite dois valores inteiros distintos para serem exibidos ordenados\n\n");
    printf("Insira o valor de a: ");
    scanf("%d",&a);
    printf("\nInsira o valor de b: ");
    scanf("%d",&b);
    printf("\n\n\n");
    
    ordena (&a, &b);
    printf("\n\nDados ordenados: a = %d  b = %d\n",a,b);
    
    system("pause");
    return 0;
}

void ordena (int *x, int *y){
	int a = 0, b = 0;
    a = *x;
    b = *y;
    if ((a <= b)){
		*x = b;
		*y = a;		
		}        
    
    else 
	/*	if ((a > b)){
			*x = a;
			*y = b;
		}*/
         
}
