#include <stdio.h>

int main()
{
    int i;
    float C;

    for(i=50;i<=65;i++){
        C=(i-32)/1.8;
        printf("%d F -------> %.3f\n",i,C);
    }
    return 0;
}
