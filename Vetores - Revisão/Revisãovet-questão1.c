#include <stdio.h>

int main()
{
    float v[10],s=0;
    int i,q=0;

    for(i=0;i<=9;i++){
        printf("Digite um numero :");
        scanf("%f",&v[i]);
        if(v[i]<0)
            q++;
        else
            s=s+v[i];
    }
    printf("A quantidade de numeros negativos desse vetor e: %d\n\n",q);
    printf("A soma dos numeros positivos desse vetor e: %.3f\n",s);

    return 0;
}
