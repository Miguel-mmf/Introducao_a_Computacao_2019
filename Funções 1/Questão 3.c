#include <stdio.h>

int MAIOR(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}

int main()
{
    int n1,n2,n3,r;

    printf("Digite um numero: ");
    scanf("%d",&n1);
    printf("Digite um numero: ");
    scanf("%d",&n2);
    printf("Digite um numero: ");
    scanf("%d",&n3);

    r=MAIOR(MAIOR(n1,n2),n3);
    printf("O maior numero e %d",r);

    return 0;
}
