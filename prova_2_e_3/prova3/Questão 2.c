#include <stdio.h>
#include <stdlib.h>

void divisao(int n1,int n2,int *sm)
{
    do{
        if(n1%2==1)
            *sm=*sm+n2;

        n1=n1/2;
        n2=n2*2;
    }while(n1>=1);
}

int main(int argc,char *argv[])
{
    int n1,n2,sm=0;

    if(argc==3){
        n1=atoi(argv[1]);
        n2=atoi(argv[2]);
        divisao(n1,n2,&sm);
        printf("\nA multiplicacao entre e = %d\n",sm);
    }

    return 0;
}
