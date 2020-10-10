#include <stdio.h>

int main()
{
    int op;
    float x,y,z,x1,y1,z1;

    printf("digite a operacao :\n1-Media aritmetica\n2-Media ponderada\n3-Sair\n");
    scanf("%d",&op);

    switch(op){
case 1:
    printf("digite duas notas:\n");
    scanf("%f %f",&x,&y);
    printf("%.2f + %.2f / 2 = %.2f",x,y,(x+y)/2);
    break;
case 2:
    printf("Digite 3 notas:\n");
    scanf("%f %f %f",&x,&y,&z);
    printf("Digite os respectivos pesos:\n");
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("%.2f x %.2f + %.2f x %.2f + %.2f x %.2f / 3 = %.2f",x,x1,y,y1,z,z1,(x*x1+y*y1+z*z1)/3);
    break;
case 3:
    printf("Fim do programa !");
    break;
default:
    printf("Operacao invalida !");
    break;
           }
    return 0;
}
