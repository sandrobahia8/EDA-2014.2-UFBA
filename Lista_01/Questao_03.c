#include <stdio.h>
#include <stdlib.h>


int ordena (int a, int b, int c);

int main (){
    
    int a = 0,b = 0,c = 0;
    printf("Insira o valor de a: ");
    scanf("%d",&a);
    printf("Insira o valor de b: ");
    scanf("%d",&b);
    printf("Insira o valor de c: ");
    scanf("%d",&c);
    
    ordena (a, b, c);
        
    system("pause");
    return 0;
}

int ordena (int a, int b, int c){
    
    if ((a >= b) && (b >= c))
       printf ("a: %d > b: %d > c: %d\n",a,b,c);
    
    else if ((a >= c) && (c >= b))
         printf ("a: %d > c: %d > b: %d\n",a,c,b);
    
    else if ((b >= a) && (a >= c))
         printf ("b: %d > a: %d > c: %d\n",b,a,c);
    
    else if ((b >= c) && (c >= a))
         printf ("b: %d > c: %d > a: %d\n",b,c,a);
    
    else if ((c >= a)&& (a >= b))
         printf ("c: %d > a: %d > b: %d\n",c,a,b);
    
    else if ((c >= b) && (b >= a))
         printf ("c: %d > b: %d > a: %d\n",c,b,a);
    

}
