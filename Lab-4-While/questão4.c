#include <stdio.h>

int main()
{
    int n,i=1;

    printf("Digite o valor de N:");
    scanf("%d",&n);

    while (i<=n){
        if (i%3==0 && i%5==0)
            printf("Valor multiplo de 3 e 5 = %d\n",i);
        i++;
    }
}
