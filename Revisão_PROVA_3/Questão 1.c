#include <stdio.h>

float media(float n1,float n2, float n3,int op)
{
    float med;

    if(op==1){
        med=(n1+n2+n3)/3;
        printf("Media Aritmetica !");
    }
    if(op==2){
        med=(n1*5+n2*3+n3*2)/10;
        printf("Media Ponderada !");
    }
    return med;
}
int main()
{
    float n1,n2,n3;
    int op;

    printf("Digite suas notas: ");
    scanf("%f %f %f",&n1,&n2,&n3);
    do{
        printf("Digite a operacao: ");
        scanf("%d",&op);

    }while(op!=1 && op!=2);
    printf("\nA media e: %.2f",media(n1,n2,n3,op));

    return 0;
}
