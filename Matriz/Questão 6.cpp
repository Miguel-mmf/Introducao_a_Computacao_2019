#include <stdio.h>

int main()
{
    int l,c,mmed,A[3][3];
    float v[3],ma=0,maior=0;

    for(l=0;l<3;l++){
        printf("Digite os elementos da matriz:");
        for(c=0;c<3;c++){
            printf("\nA[%d][%d]=",l,c);
            scanf("%d",&A[l][c]);
        }
    }
    printf("O numero de elementos iguais a zero em cada uma das linhas:");
    for(l=0;l<3;l++)
        for(c=0;c<3;c++){
            if(A[l][c]==0)
                printf("\nA[%d][%d] = %d",l,c,A[l][c]);
        }
    printf("\nO numero de elementos iguais a zero em cada uma das colunas:");
    for(c=0;c<3;c++)
        for(l=0;l<3;l++){
            if(A[l][c]==0)
                printf("\nA[%d][%d] = %d",l,c,A[l][c]);
        }
    printf("\nO numero de elementos pares em determinada linha:");
    for(c=0;c<3;c++)
        for(l=0;l<3;l++){
            if(A[l][c]%2==0)
                printf("\nA[%d][%d] = %d",l,c,A[l][c]);
        }
    printf("\nO numero de elementos pares em determinada coluna:");
    for(l=0;l<3;l++)
        for(c=0;c<3;c++){
            if(A[l][c]%2==0)
                printf("\nA[%d][%d] = %d",l,c,A[l][c]);
        }
    printf("\nMedia aritmetica dos elementos de cada linha:\n");
    for(c=0;c<3;c++){
        for(l=0;l<3;l++)
            ma=ma+A[l][c];
    v[l]=(ma/3);
    printf("Linha %d : %.2f\n",l,v[l]);
    ma=0;
    }if(v[l]>maior){
        maior=v[l];
        mmed=l;
        }
    printf("A linha com maior media aritmetica e: %d\nCom media: %f",mmed,maior);

    return 0;
}
