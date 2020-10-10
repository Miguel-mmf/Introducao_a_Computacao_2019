#include <stdio.h>

int main()
{
    int i,s=0;

    for(i=0;i<=200;i+=2){
        s=s+i;
        printf(" %d --> %d \n",s,i);
    }
    printf("A soma dos 100 primeiros numeros pares e :%d ",s);

    return 0;
}
