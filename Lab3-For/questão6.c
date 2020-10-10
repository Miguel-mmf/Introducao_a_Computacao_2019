#include <stdio.h>

int main()
{
    int i,a=0,b=1,F;

    for(i=1;i<=8;i++){
        F=a+b;
        a=b;
        b=F;
        printf("%d\n",F);
    }
}
