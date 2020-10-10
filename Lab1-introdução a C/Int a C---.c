#include <stdio.h>
#define p 3.14

//Fazer um programa que calcule e mostre a área e o volume de um cilindro (A = 2 π r(h+r), V = π r² h).

int main()
{
    float x,y;

    printf("Digite a altura e o raio:");
    scanf("%f %f",&x,&y);

    printf("A area e: %.2f\n", 2*p*y*(x+y));
    printf("O volume e: %.2f", p*y*y*x);

    return 0;
}
