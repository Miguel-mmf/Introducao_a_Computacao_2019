#include <stdio.h>

void fat(int n)
{
    int i,s=1,f=1;

    printf("\nS= ");
    for(i=1;i<=n;i++){
        f=f*i;
        printf("1/%d ",f);
        if(i<n)
            printf(" + ");
    }
}
void soma(int n)
{
    int i;
    float sm=0,f=1;

    for(i=1;i<=n;i++){
        f=f*i;
        sm=sm+(1/f);
    }
    printf("\n\nA soma da sequencia: %.2f",sm);
}
int main()
{
    int n;

    printf("Digite um numero: ");
    scanf("%d",&n);
    fat(n);
    soma(n);

    return 0;
}
