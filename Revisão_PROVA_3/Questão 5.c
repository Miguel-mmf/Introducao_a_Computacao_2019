#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int v[4][4],l,c,i=0,smds,smdp,smc=0,sml=0,smll[2],smcc[2],igual=0;

    srand(time(NULL));
    for(l=0;l<4;l++)
        for(c=0;c<4;c++)
            v[l][c]=rand()%100;

    for(l=0;l<4;l++){
        for(c=0;c<4;c++){
            sml=sml+v[l][c];
            if(l==c)
                smdp=smdp+v[l][c];
            else if(c+l==4)
                smds=smds+v[l][c];
        }
        smll[i]=sml;
        printf("Soma da linha %d = %d\n",i,smll[i]);
        i++;
    }
    i=0;
    printf("\n");
    for(c=0;c<4;c++){
        for(l=0;l<4;l++)
            smc=smc+v[l][c];
        smcc[i]=smc;
        printf("Soma da linha %d = %d\n",i,smcc[i]);
        i++;
    }
    printf("\nSoma da diagonal principal = %d",smdp);
    printf("\nSoma da diagonal secundaria = %d",smds);

    if(smdp==smds){
        for(i=0;i<4;i++)
            if(smcc[i]==smll[i])
                igual++;
        if(igual=4)
            printf("\n\nA matriz forma o quadrado magico !");
        else
            printf("\n\nA matriz nao forma o quadrado magico !MAS TEM A SOMA DE CADA LINHA IGUAL A SOMA DE CADA COLUNA !");
    }else
        printf("\n\nA matriz nao forma o quadrado magico !");

    return 0;
}
