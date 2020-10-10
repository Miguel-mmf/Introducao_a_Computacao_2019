#include <stdio.h>

int main()
{
    int l,c,A[3][3],sd,ls,D[3],maior=0;

    for(l=0;l<3;l++){
        printf("Digite os elementos da matriz:");
        sd=0;
        for(c=0;c<3;c++){
            printf("\nA[%d][%d]=",l,c);
            scanf("%d",&A[l][c]);
            sd=sd+A[l][c];
            }
        D[l]=sd;
        if(D[l]>maior){
            maior=D[l];
            ls=l;
            }
        }

    printf("\n\nA linha %d possui a maior soma: %d\n",ls,maior);

    return 0;
}
