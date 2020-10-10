#include <stdio.h>

int main()
{
    int id,idM,idm;
    float peso,pM=10,pm=1000;

    printf("Escreva a identificacao do boi, 0 para encerrar:");
    scanf("%d",&id);
    while(id>0){
    printf("Escreva o peso do boi em kg, 0 para encerrar:");
    scanf("%f",&peso);

    if(peso>pM){
        pM=peso;
        idM=id;
    }
    if(peso<pm){
        pm=peso;
        idm=id;
    }
    printf("Escreva a identificacao do boi, 0 para encerrar:");
    scanf("%d",&id);
    }
    printf("O boi mais gordo e o %d com %.2f KG.\n\n",idM,pM);
    printf("O boi mais magro e o %d com %.2f KG.",idm,pm);

    return 0;
}
