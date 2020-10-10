#include <stdio.h>

int main()
{
    int x;
    printf("digite um valor:\n");
    scanf("%d",&x);

    if(x>0)
        if(x%2==0)
            printf("%d e par",x);
        else
            printf("%d e impar",x);
    else
        printf("numero invalido");

    return 0;
}
