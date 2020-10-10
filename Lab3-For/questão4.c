#include <stdio.h>

int main()
{
    int i,s=0;

    printf("S= ");
    for(i=1;i<=50;i++){
        s=s+(float)1/i;
        printf("1/%d",i);
        if(i<50)
        printf(" + ");
    }
    printf("\na soma e : %d\n",s);

    return 0;
}
