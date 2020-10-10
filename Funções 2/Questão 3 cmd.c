#include <stdio.h>
#include <stdlib.h>

int medidasRetangulo(float b,float h,float *A,float *P)
{
    *P=2*(b+h);
    *A=(b*h);

    if(b==h)
        return 1;
    else
        return 0;
}
int main(int argc, char *argv[])
{
    float h,b,A,P;

    //printf("Quais as medidads de base e altura ? ");
    //scanf("%f %f",&b,&h);

    if(argc==3){
        b=atoi(argv[1]);
        h=atoi(argv[2]);
        if(medidasRetangulo(b,h,&A,&P))
            printf("\nE um quadrado !");
        else
            printf("\nE um retangulo !\n");
    }else
        printf("ERRO !");

    printf("\nArea = %.2f \nPerimetro = %.2f",A,P);

    return 0;
}
