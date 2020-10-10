#include <stdio.h>

int main ()
{
    int h1,h2,m1,m2,hM=100,hm,mM=100,mm;

    printf("Digite a idade do primeiro homem:\n");
    scanf("%d",&h1);
    printf("Digite a idade do segundo homem:\n");
    scanf("%d",h2);
    printf("Digite a idade da primeira mulher:\n");
    scanf("%d",&m1);
    printf("Digite a idade da segunda mulher:\n");
    scanf("%d",m2);

    if(h1<hM)
        hM=h1;
    if(h2>hM)
        hM=h2;
        else
            hm=h2;
    if(m1<mM)
        mM=m1;
    if(m2>mM)
        mM=m2;
        else
            mm=m2;
    printf("A soma entre a mulher mais nova com o homem mais velho e: %d\n",hM+mm);
    printf("O produto entre a mulher mais velha com o homem mais novo e: %d",hm*mM);

    return 0;
}
