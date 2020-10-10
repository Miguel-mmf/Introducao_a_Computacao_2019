#include <stdio.h>
#include <math.h>

int main()
{
    int i,k,n,y;

    printf("Digite a base:");
    scanf("%d",&k);
    printf("Digite o expoente:");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
            y=pow(k,i);
            printf("%d elevado a %d = %d\n",k,i,y);
    }

   return 0;
}
