#include <stdio.h>

int fatorial(int *A[10],int *B[10])
{
    int i,j,f;

    for(j=0;j<10;j++){
        for(i=1;i<=*A[j];i++){
            f=f*i;
        }
        *B[j]=f;
        f=1;
    }
    return *B[j];
}

int main()
{
    int j,A[10],B[10];

    printf("Digite o vetor A:\n");
    for(j=0;j<10;j++){
        printf("A[%d]= ",j);
        scanf("%d",&A[j]);
    }
    printf("O vetor B:\n");
    fatorial(&A[10],&B[10]);

    printf("Vetor B:\n");
    for(j=0;j<10;j++)
        printf("B[%d]= %d",j,B[j]);
}
