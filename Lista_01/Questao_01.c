#include <stdio.h>
#include <stdlib.h>


// O codigo recebe dois inteiros e os imprime trocando os valores das variaveis 
int main()
{   
    fflush (stdin);
    int a = 0, b = 0, aux = 0;
    printf("Insira dois numeros inteiros: 'a' e 'b' \n\n");
    fflush (stdin);
    scanf("%d",&a);
    fflush (stdin);
    scanf("%d",&b);
    fflush (stdin);
    aux = a;
    a = b;
    b = aux;
    printf("\nAgora o valor de 'a' eh: %d \n\nE o valor de 'b' eh: %d \n\n",a, b);
    
    system ("pause");
    return 0;   
}

