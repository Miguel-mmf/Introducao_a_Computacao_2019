#include <stdio.h>

int main ()
{
    float vc,pf,p6,p8,p36;

    printf("Digite o valor do carro:");
    scanf("%f",&vc);

    pf=vc*0.8;
    p6=vc*1.03;
    p8=vc*1.09;
    p36=vc*1.18;

    printf("O preco final do carro:\n\n");
    printf("A vista = %.3f\n",pf);
    printf("Em 6 parcelas = %.2f    Com 1 parcela = %.2f\n",p6,p6/6);
    printf("Em 18 parcelas = %.2f    Com 1 parcela = %.2f\n",p8,p8/8);
    printf("Em 36 parcelas = %.2f    Com 1 parcela = %.2f\n",p36,p36/36);

    return 0;

   }
