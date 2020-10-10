/* m[l][c]=rand()%o total de numeros da matriz
*/
#include <stdio.h>

int main()
{
    int R[4][5],maior=0,l,c,lm,cm;


    for(l=0;l<4;l++){
        printf("Digite os elementos da matriz:");
        for(c=0;c<5;c++){
            printf("\nR[%d][%d]=",l,c);
            scanf("%d",&R[l][c]);
            if(R[l][c]>maior){
                maior=R[l][c];
                lm=l;
                cm=c;
            }
        }
    }

    printf("O maior elemento de R e %d sua posição e R[%d][%d]",maior,lm,cm);
    return 0;
}
