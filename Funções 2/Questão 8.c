#include <stdio.h>

float S(int *n,float s)
{
    float i;

    for(i=1;i<=*n;i++)
        s=s+(((i*i)+1)/(i+3));
    return s;
}
void seq(int *n,int se)
{
    int i,se1,se2;

    printf("S= ");
    for(i=1;i<=*n;i++){
        se1=((i*i)+1);
        se2=i+3;
        printf("%d/%d",se1,se2);
        if(i<*n)
            printf(" + ");
    }
}
int main()
{
    int n,se;

    printf("Digite um numero positivo: ");
    scanf("%d",&n);
    printf("\nValor de S: %.2f\n\n",S(&n,0));
    printf("A sequencia e:");
    seq(&n,se);

    return 0;
}
