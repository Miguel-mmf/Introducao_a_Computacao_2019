#include <stdio.h>
#include <stdlib.h>

void MM(int *a,int *b)
{
    int menor;

    if(*b < *a){
        menor=*a;
        *a=*b;
        *b=menor;
    }
}
int main(int argc,char*argv[])
{
    int a,b;

    //printf("Digite os valores de A e B: ");
    //scanf("%d %d",&a,&b);
    if(argc==3){
        a=atoi(argv[1]);
        b=atoi(argv[2]);
        MM(&a,&b);
        printf("O menor valor = %d\nO maior valor = %d",a,b);
    }else
        printf("ERRO !");

    return 0;
}
