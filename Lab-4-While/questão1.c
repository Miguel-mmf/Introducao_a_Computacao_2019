#include <stdio.h>

int main()
{
    int n, s=0;

    printf("Digite o valor de N, 0 para encerrar:");
    scanf("%d", &n);

    while (n!=0){
        s=s+n;
        printf("Digite o valor de N, 0 para encerrar:");
        scanf("%d",&n);
    }
    printf("\nSoma = %d",s);

    return 0;
}
