#include <stdio.h>

int main()
{
    int X[10],Y[5],R[10],n=0,i,j;

    printf("Digite os elementos do vetor:\n");
    for(i=0;i<10;i++){
        printf("X[%i] = ",i);
        scanf("%i",&X[i]);
    }
    for(j=0;j<5;j++){
        printf("Y[%i] = ",j);
        scanf("%i",&Y[j]);
    }
    for(i=0;i<10;i++){
        if(X[i]%2==0){
            for(j=0;j<5;j++){
            n=n+Y[j];
            }
            R[i]=X[i]+n;
            printf("R[%d] = %d\n",i,R[i]);
        }
        n=0;
    }
    return 0;
}
