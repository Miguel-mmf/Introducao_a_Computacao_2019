#include <stdio.h>

void MM(int *a,int *b)
{
    int menor;

    if(*b < *a){
        menor=*a;
        *a=*b;
        *b=menor;
    }
}
int main()
{
    int a,b;

    printf("Digite os valores de A e B: ");
    scanf("%d %d",&a,&b);
    MM(&a,&b);
    printf("O menor valor = %d\nO maior valor = %d",a,b);

    return 0;
}
