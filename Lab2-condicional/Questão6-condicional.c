#include <stdio.h>

int main ()
{
    int h1,h2,m1,m2,hM,hm,mM=100,mm;

    printf("Digite a idade do primeiro homem:\n");
    scanf("%d",&h1);
    printf("Digite a idade do segundo homem:\n");
    scanf("%d",&h2);
    printf("Digite a idade da primeira mulher:\n");
    scanf("%d",&m1);
    printf("Digite a idade da segunda mulher:\n");
    scanf("%d",&m2);

    if(h1!=h2){
        if(h1>h2){
            hM=h1;
            hm=h2;
    }else{
        hM=h2;
        hm=m1;
    }
    }else
        printf("Homens com idades iguais!");
    if(m1!=m2){
    if(m1>m2){
        mM=m1;
        mm=m2;
    }else{
        mM=m2;
        mm=m1;
        }
    }else
        printf("Mulheres com idades iguais!");

    printf("A soma entre a mulher mais nova com o homem mais velho e: %d\n",hM+mm);
    printf("O produto entre a mulher mais velha com o homem mais novo e: %d",hm*mM);

    return 0;
}
