#include <stdio.h>

int main()
{
    float v[10];
    int i;

    /*for(i=0;i<10;i++){
        printf("v[%d] =",i);
        scanf("%f",&v[i]);
    }*/
    for(i=0;i<10;i++){
        if(i%2==1){
            v[i]=1;
            printf("v[%i] = %.0f\n",i,v[i]);
        } else {
            v[i]=0;
             printf("v[%i] = %.0f\n",i,v[i]);
        }
    }
    return 0;
}
