#include <stdio.h>

int MAIOR(int x,int y)
{
    if(x>y)
        return 0;
    else
        return 1;
}

int main()
{
    int x,y,r;

    printf("Digite um numero: ");
    scanf("%d",&x);
    printf("Digite um numero: ");
    scanf("%d",&y);

    r=MAIOR(x,y);

    if(r==0)
        printf("\nO numero %d e maior que o numero %d !",x,y);
    else
        printf("\nO numero %d e menor que o numero %d !",x,y);

    return 0;
}
