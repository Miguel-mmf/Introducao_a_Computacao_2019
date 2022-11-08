#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int l,c,A[4][7],menor=100,maior=0,linha,coluna;

    srand(time(NULL));
    printf("MATRIZ A:\n");
    for(l=0;l<4;l++){
        for(c=0;c<7;c++){
            A[l][c]=rand()%100;
            printf(" %d ",A[l][c]);
        }
        printf("\n");
    }

    for(l=0;l<4;l++)
        for(c=0;c<7;c++){
            if(A[l][c]<menor){
                menor=A[l][c];
                linha=l;
            }
        }

    for(l=0;l<4;l++){
        for(c=0;c<7;c++){
            if(l=linha)
                if(A[l][c]>maior){
                   maior=A[l][c];
                   coluna=c;
                }
            }
        }
    printf("\n\nO MINIMAX = %d\n",maior);
    printf("A sua posicao e =>\nlinha: %d\ncoluna: %d",linha+1,coluna+1);

    return 0;
}
