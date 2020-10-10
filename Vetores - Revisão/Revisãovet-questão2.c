#include <stdio.h>

int main()
{
    int i;
    float v[10];

    for(i=0;i<10;i++){
        printf("A[%d] =",i);
        scanf("%f",&v[i]);
    }
    for(i=0;i<10;i++){
        if(i%2==0){
            v[i]=v[i]*5;
            printf("B[%d] = %.1f\n",i,v[i]);
        }else{
            v[i]=v[i]+5;
            printf("B[%d] = %.1f\n",i,v[i]);
    }
    }
    return 0;
}
