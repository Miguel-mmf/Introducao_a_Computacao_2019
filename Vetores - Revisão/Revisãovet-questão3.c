#include <stdio.h>

int main()
{
    int i,x=0,y=0;
    float v[8],n[8],p[8];

    for(i=0;i<8;i++){
        printf("V[%i] =",i);
        scanf("%i",&v[i]);
        if(v[i]<0){
            v[i]=n[y];
            y++;
        }else{
            v[i]=p[x];
            x++;
        }
    }
    printf("\n\nPositivo =");
    for(i=0;i<x;i++)
        printf("%d",p[i]);

    printf("\n\nNegativo =");
    for(i=0;i<y;i++)
        printf("%d",n[i]);

    return 0;
}
