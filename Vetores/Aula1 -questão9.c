#include <stdio.h>

int main()
{
    int i,p;
    float v[10],M=0;

    for(i=0;i<10;i++){
        printf("Valor de v[%d] =",i);
        scanf("%f",&v[i]);
    }
    for(i=0;i<10;i++){
        if(v[i]>M)
            M=v[i];
            p=i;
    }
    printf("O maior elemento desse vetor e: %.1f\n",M);
    printf("O indice do maior elemento e: %d\n",p);

    return 0;
}
