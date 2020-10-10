#include <stdio.h>

//Fazer um programa que converta centímetros para polegadas (obs.: 1pol = 2.54cm).

int main()
{
    float x,y;

    printf("Digite o comprimento em cm:");
    scanf("%f",&x);

    y=x/2.54;

    printf("%.1f em polegadas e %.2f",x,y);

    return 0;
}
