#include <stdio.h>

int main()
{
    int A[10],B[10],i,j;
    float C,total=0;

    printf("Digite os elementos do vetor:\n");
    for(i=0;i<10;i++){
        printf("A[%i] = ",i);
        scanf("%i",&A[i]);
    }

    printf("\nDigite os elementos do vetor:\n");
    for(j=0;j<10;j++){
        printf("B[%i] = ",j);
        scanf("%i",&B[j]);
    }
    printf("Vetor resultante da subtracao:\n");
    for(i=0,j=9;i<10,j>=0;i++,j--){
        C=A[i]-B[j];
        printf("\nC[%d] = %.1f",i,C);
        total=total+C;
    }
    printf("\nTotal das subtracoes: %.2f",total);

    return 0;
}
