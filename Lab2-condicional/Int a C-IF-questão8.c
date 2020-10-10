#include <stdio.h>

int main()
{
    float x,y,z,sl1,sl2,sl3;

    printf("digite o valor dos lados do triangulo:");
    scanf("%f %f %f",&x,&y,&z);

    sl1=y+z;
    sl2=x+z;
    sl3=y+x;

    if(x<sl1){
        if(x==y && y==z)
            printf("Triangulo equilatero !\n");
        if(x==y || x==z || z==y)
            printf("Triangulo isoceles !\n");
        if(x!=y && x!=z)
            printf("Triangulo escaleno !\n");
    }else
        printf("Os valores nao formam um triangulo !");

    return 0;

}
