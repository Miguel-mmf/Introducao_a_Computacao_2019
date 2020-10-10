#include <stdio.h>

int main()
{
    int v[10],i,s=0;

    printf("Digite os elementos do vetor:\n");
    for(i=0;i<10;i++){
        printf("v[%i] = ",i);
        scanf("%i",&v[i]);
        s=s+v[i];
    }
    printf("A soma de todos os valores: %d",s);

    return 0;
}
