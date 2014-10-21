#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//A funcao recebe dois numeros inteiros e retorna a soma do dobro dos dois valores. Deve armazenar o dobro de de cada variavel na propria variavel.

int SomaDobro (int *x, int *y);

int main (){
    
	int  a = 0, b = 0, dobro = 0;
		
	printf("\n\nDigite dois valores, 'a' e 'b', para determinar o dobro da soma dos dois!\n\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	dobro = SomaDobro (&a, &b);
		
	printf("\n\nO novo valor de 'a' eh: %d\n",a);
	printf("\n\nO novo valor de 'b' eh: %d\n",b);
	printf("\n\nA soma do dobro de 'a' e 'b' eh: %d\n\n",dobro);

	
	system("pause");
	return 0;
}


int SomaDobro (int *x, int *y){

	int da = 0, db = 0, aux1 = 0, aux2 = 0, sdobro = 0;
	
	da = ((*x)*2);
	db = ((*y)*2);
	sdobro = da + db;
	*x = da;
	*y = db;
		
	return sdobro;
}
