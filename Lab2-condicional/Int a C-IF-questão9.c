#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    float y,x,D,r,x1,x2;

    printf("Digite os coeficientes de uma equação do segundo grau (a,b,c):");
    scanf("%d %d %d",&a,&b,&c);

    D=(b*b)-(4*a*c);

    if((a!=b && b!=c) || (a==b || b==c)){
    if(D<0)
        printf("Nao ha solucao real, pois nao existe raiz quadrada de um numero negativo !");
    if(D==0){
        x=-(b/(2*a));
        printf("Ha duas solucoes iguais :\nx1=x2=%f",x);
    }
    if(D>0){
        r=sqrt(D);
        x1=-(b+r)/(2*a);
        x2=-(b-r)/(2*a);
        printf("As solucoes sao :\nX1=%f\nX2=%f",x1,x2);
    }
    }else
    printf("Nao foi inserido todos os numeros !");

    return 0;
}
