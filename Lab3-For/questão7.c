#include <stdio.h>

int main()
{
    int i,s=0,q=0;

    for(i=13;i<=73;i++){
        if(i%2==0){
            s=s+i;
            q++;
            }
    }
    printf("A media aritmetica dos numeros pares e : %.3f",(float)s/q);

    return 0;
}

