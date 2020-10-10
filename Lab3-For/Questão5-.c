#include <stdio.h>

int main()
{
    int i,j;
    float s=0;

    printf("S= ");
    for(i=1,j=1;i<=50;i++,j+=2){
        s=s+(float)j/i;
        printf("%d/%d",j,i);
        if(i<50)
        printf(" + ");
    }
    printf("\n\na soma e : %.3f\n",s);

    return 0;
}
