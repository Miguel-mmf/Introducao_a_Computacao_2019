#include <stdio.h>

int par_impar(int x)
{
    if(x%2==0)
        return 0;
    else
        return 1;
}

int main()
{
    int n,r;

    printf("Digite um numero: ");
    scanf("%d",&n);
    r=par_impar(n);

    if(r==0)
        printf("\nO numero %d e par !",n);
    else
        printf("\nO numero %d e impar !",n);

    /*if(par_impar(n))
        printf("O numero e impar!") pois a saida return 1 é verdadeira
     else
        printf("O numero e par !") pois a saida return 0 é falsa.*/

    return 0;
}
