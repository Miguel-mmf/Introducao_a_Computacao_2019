#include <stdio.h>

int main()
{
    int m,n,s=0;

    printf("digite um par de valores m e n sendo m < n:\n");
    scanf("%d %d",&m,&n);

    while(m<n){
        s=s+m+n;
        printf("Digite um par de valores m e n sendo m < n:\n");
        scanf("%d %d",&m,&n);
    }
    printf("A soma de todos os numeros m e n foi de :%d",s);

    return 0;
}
