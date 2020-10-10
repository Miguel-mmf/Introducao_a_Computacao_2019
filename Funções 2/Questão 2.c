#include <stdio.h>

void medidasRetangulo(float b,float h,float *A,float *P)
{
    *P=2*(b+h);
    *A=(b*h);
}
int main()
{
    float h,b,A,P;

    printf("Quais as medidads de base e altura ? ");
    scanf("%f %f",&b,&h);
    medidasRetangulo(b,h,&A,&P);
    printf("\nArea = %.2f \nPerimetro = %.2f",A,P);

    return 0;
}
