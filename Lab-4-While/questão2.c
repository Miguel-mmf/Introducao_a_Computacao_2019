#include <stdio.h>

int main()
{
    int n,q=0,s=0;
    float m;

    do{
        printf("digite o valor de N, 0 para encerrar:");
        scanf("%d",&n);
        if (n!=0){
            s=s+n;
            q++;
        }
    }while (n!=0);
    m=(float)s/q;
    printf("\nSoma = %d\nMedia = %.2f",s,m);

    return 0;
}
