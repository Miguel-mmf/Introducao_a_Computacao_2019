#include <stdio.h>

int main()
{
    int i;
    float A[10],B[10],C[10],D[10],E[10],F[10];

    for(i=0;i<10;i++){
        printf("Valor de A[%d] =",i);
        scanf("%f",&A[i]);
    }
    for(i=0;i<10;i++){
        printf("Valor de B[%d] =",i);
        scanf("%f",&B[i]);
    }

    for(i=0;i<10;i++){
        C[i]=A[i]+B[i];
        D[i]=A[i]*B[i];
        E[i]=A[i]-B[i];
        F[i]=A[i]/B[i];
        printf("Valor de C[%i]=%.2f  C[%i]=%.2f  C[%i]=%.2f  C[%i]=%.2f\n",i,C[i],D[i],E[i],F[i]);
    }
    return 0;
}
