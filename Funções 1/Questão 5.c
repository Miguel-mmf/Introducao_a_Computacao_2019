#include <stdio.h>

int soma(int a,int b,int c);

int main()
{
    int a,b,c;

    printf("Digite um numero: ");
    do{
    scanf("%d",&a);
    }while(a<=1);

    printf("\nDigite o numero b: ");
    scanf("%d",&b);
    printf("\nDigite o numero c: ");
    scanf("%d",&c);

    printf("\n\nA soma dos divisiveis por %d entre %d e %d: %d",a,b,c,soma(a,b,c));

    return 0;
}

int soma(int a,int b,int c)
{
    int i,s=0;
    for(i=b;i<=c;i++){
       if(i%a==0)
            s=s+i;
    }
    return s;
}
