#include <stdio.h>
#include <stdlib.h>



void ordena (int a, int b, int c);

int main (){
    
    int a = 0,b = 0,c = 0;
    printf("Digite tres valores inteiros distintos para serem exibidos ordenados\n\n");
    printf("Insira o valor de a: ");
    scanf("%d",&a);
    printf("\nInsira o valor de b: ");
    scanf("%d",&b);
    printf("\nInsira o valor de c: ");
    scanf("%d",&c);
    printf("\n\n\n");
    
    if ((a==b) && (b==c)){
       printf("Numeros iguais. Devem ser digitados numeros diferentes.\n\n");
       system("pause");
       return 1;
       }
    else
        ordena (a, b, c);
        
    printf("\n\n\n");   
    system("pause");
    return 0;
}

void ordena (int a, int b, int c){
    int aux=0;
    
    if ((a <= b) && (b <= c))
        printf ("Dados ordenados: a = %d  b = %d  c = %d\n",a,b,c);
    
    else if ((a <= c) && (c <= b)){
         aux=c;
         c=b;
         b=aux;
         printf ("Ordenando temos: a = %d  b = %d  c = %d\n",a,b,c);
         }    
    else if ((b <= a) && (a <= c)){
         aux=b;
         b=a;
         a=aux;
         printf ("Ordenando temos: a = %d  b = %d  c = %d\n",a,b,c);
         }    
    else if ((b <= c) && (c <= a)){
         aux=a;
         a=b;
         b=c;
         c=aux;
         printf ("Ordenando temos: a = %d  b = %d  c = %d\n",a,b,c);
         }
    else if ((c <= a)&& (a <= b)){
         aux=b;
         b=a;
         a=c;
         c=aux;
         printf ("Ordenando temos: a = %d  b = %d  c = %d\n",a,b,c);
         }
    else if ((c <= b) && (b <= a)){
         aux=a;
         a=c;
         c=aux;
         printf ("Ordenando temos: a = %d  b = %d  c = %d\n",a,b,c);
         }

}

