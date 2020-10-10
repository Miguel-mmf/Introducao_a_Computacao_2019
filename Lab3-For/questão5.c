#include <stdio.h>

int main()
{
    int i,j;
    float s=0;

    printf("S= ");
    for(i=1,j=1;i<=50,j<=99;i++,j+=2){
        s=s+(float)j/i;
        printf("%d/%d",j,i);
        if(i<50)
        printf(" + ");
    }
    printf("\na soma e : %d\n",s);

    return 0;
}
