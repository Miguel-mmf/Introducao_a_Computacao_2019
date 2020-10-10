#include <stdio.h>
#include <math.h>

void raiz(float a,float b,float c,float delta);

int main()
{
    float a,b,c,delta;

    printf("Digite os coeficientes da equacao do segundo grau: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a==0)
        printf("\nNao existe raizes para a sua equacao !");
    else
        delta=b*b-4*a*c;
    raiz(a,b,c,delta);

    return 0;
}

void raiz(float a,float b, float c,float delta)
{
    float x1,x2;

    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("\nx1 = %.2f\n",x1);
    printf("x2 = %.2f",x2);
}
