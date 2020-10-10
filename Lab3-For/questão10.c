#include <stdio.h>

int main()
{
    int i,q=0,w=0,s;
    float h,hM=180,hm=500,ht=0;

    for(i=1;i<=15;i++){
        printf("Digite seu sexo:\n1-M\n2-F\n=");
        scanf("%d",&s);
        printf("Digite sua altura em cm: ");
        scanf("%f",&h);
        switch(s){
    case 1:
        q++;
        break;
    case 2:
        w++;
        ht=ht+h;
        break;
    default:
        break;
        }
        if(h>=hM)
            hM=h;
        if(h<hm)
            hm=h;
    }
    printf("A maior altura do grupo e: %.2f\n",hM);
    printf("A menor altura do grupo e: %.2f\n",hm);
    printf("A media de altura das mulheres e: %.2f\n",ht/(float)w);
    printf("O numero de homems e: %d\n\n",q);

   return 0;
}
