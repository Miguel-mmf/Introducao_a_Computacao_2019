#include <stdio.h>

int main()
{
    float he,hf,H;

    printf("Digite o total de horas extras em minutos:");
    scanf("%f",&he);
    printf("Digite a quantidade de horas em minutos que o trabalhador faltou:");
    scanf("%f",&hf);

    H=he-(hf*(2/3));

    if(H>=2400)
        printf("O valor do premio sera de 500 reais !");
    else if(H>1800 && H<2400)
        printf("O valor do premio sera de 400 reais !");
    else if(H>=1200 && H<1800)
        printf("O valor do premio sera de 300 reais !");
    else if(H>=600 && H<1200)
        printf("O valor do premio sera de 200 reais !");
    else if(H<600)
        printf("O valor do premio sera de 100 reais !");

    return 0;

}
