#include <stdio.h>

int medidasRetangulo(float b,float h,float *A,float *P)
{
    *P=2*(b+h);
    *A=(b*h);

    if(b==h)
        return 1;
    else
        return 0;
}
int main()
{
    float h,b,A,P;

    printf("Quais as medidads de base e altura ? ");
    scanf("%f %f",&b,&h);

    if(medidasRetangulo(b,h,&A,&P))
        printf("\nE um quadrado !");
    else
        printf("\nE um retangulo !");

    printf("\nArea = %.2f \nPerimetro = %.2f",A,P);

    return 0;
}
