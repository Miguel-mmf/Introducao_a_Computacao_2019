#include <stdio.h>

/*O preço de um automóvel é calculado pela soma do preço de fábrica com o preço dos impostos (45% do preço de fábrica) e
a porcentagem do revendedor (28% do preço de fábrica).Fazer um algoritmo que leia o nome do automóvel e o preço
de fábrica. Calcule e mostre o preço final do carro.*/

int main()
{
    float p, i, r;
    char n[10];

    printf("escreva o nome do seu carro:\n");
    scanf("%s",&n);
    printf("escreva o valor de fabrica do seu carro:\n");
    scanf("%f",&p);

    i=p*0.45;
    r=p*0.28;

    printf("O carro do modelo %s custa %.2f",n,p+i+r);

    return 0;
}
