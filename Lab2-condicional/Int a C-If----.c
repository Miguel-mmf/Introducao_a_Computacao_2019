#include <stdio.h>

int main()
{
    int x,y,z,t,tt;

    printf("Digite tres numeros:");
    scanf("%d %d %d",&x,&y,&z);

    if (x!=y && y!=z){
            if (y>z && x>z){
                t=x;
                tt=y;
                printf("A soma dos dois maiores valores e: %d + %d = %d",x,y,t+tt);
                }
            else if (z>x && y>x){
                t=y;
                tt=z;
                printf("A soma dos dois maiores valores e: %d + %d = %d",y,z,t+tt);
            }
            else if (x>y && z>y){
                t=x;
                tt=z;
                printf("A soma dos dois maiores valores e: %d + %d = %d",z,x,t+tt);
            } else
                printf("Existe numeros iguais !");
    }

    return 0;
}
