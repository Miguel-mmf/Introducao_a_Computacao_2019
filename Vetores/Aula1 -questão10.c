#include <stdio.h>

int main()
{
    int i,j;
    float A[16];

    for(i=0;i<16;i++){
        printf("Valor de A[%d] =",i);
        scanf("%f",&A[i]);
    }
    for(i=15,j=0;i>=8,j<8;i--,j++){
        printf("Valor de B[%d] = %.1f\n",j,A[i]);
    }
    for(i=7,j=8;i>=0,j<16;i--,j++){
        printf("Valor de B[%d] = %.1f\n",j,A[i]);
    }

    return 0;
}
