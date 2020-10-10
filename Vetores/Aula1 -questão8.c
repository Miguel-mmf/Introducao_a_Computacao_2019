#include <stdio.h>

int main()
{
    int i,j;
    float A[10];

    for(i=0;i<10;i++){
        printf("Valor de A[%d] =",i);
        scanf("%f",&A[i]);
    }
    for(i=9,j=0;i>=0,j<10;i--,j++){
        printf("Valor de B[%d] = %.1f\n",j,A[i]);
    }
    return 0;
}
