#include <stdio.h>

int main()
{
    int v[10],i;
    float m,s=0;

    printf("Digite o valor do elemento:\n");
    for(i=0;i<10;i++){
        printf("v[%d] = ",i);
        scanf("%d",&v[i]);
        s=s+v[i];
    }
    m=s/10;

    printf("A media dos valores inseridos é = %.2f",m);

    return 0;
}
