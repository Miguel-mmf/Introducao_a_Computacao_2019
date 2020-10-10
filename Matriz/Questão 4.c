#include <stdio.h>

int main()
{
    int l,c,A[3][3],T[3][3];


    for(l=0;l<3;l++){
        printf("Digite os elementos da matriz: ");
        for(c=0;c<3;c++){
            printf("\nA[%d][%d] = ",l,c);
            scanf("%d",&A[l][c]);
        }
    }

    printf("\nA matriz transposta da matriz A e:\n");

    for(l=2;l>=0;l--){
        for(c=0;c<3;c++){
            //printf("\nT[%d][%d] = %d",l,c,T[l][c]);
            printf("%3d",A[c][l]);
        }
        printf("\n");
    }

    return 0;
}
