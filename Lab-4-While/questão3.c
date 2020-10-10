#include <stdio.h>

int main()
{
    int n, q=0, i;

    for (i=1;i<=5;i++){
        printf("Digite o valor de N:");
        scanf("%d",&n);
        if (n<0)
            q++;
    }
    printf("\n\nO total de numeros negativos e de: %d",q);

    return 0;
}
