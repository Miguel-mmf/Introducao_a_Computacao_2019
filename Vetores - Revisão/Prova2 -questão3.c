#include <stdio.h>

int main()
{
    int i,id=0,cl=0;
    float h=0,p=0,ht=0,c2=0,c3=0;

    for(i=0;i<=4;i++){
        printf("digite sua idade,altura e peso:\n");
        scanf("%d %f %f",&id,&h,&p);
        if(id>50)
            cl++;
        if(id>=10 && id<=20){
            c2++;
            ht=ht+h;
        }
        if(p<40)
            c3++;
    }
    printf("\nA quantidade de pessoas com idade acima de 50 anos: %i",cl);
    printf("\nA media das alturas da pessoas com idade entre 10 e 20 anos foi: %.2f",ht/c2);
    printf("\nA porcentagem de pessoas com peso inferior a 40kg foi: %.2f",(100*c3)/5);

    return 0;
}
