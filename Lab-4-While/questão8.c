#include <stdio.h>

int main()
{
    int id,idM=0,sexo,cab,olhos,q=0,qt=0;

    printf("Digite sua idade:");
    scanf("%d",&id);

    while(id>=0){

        printf("Digite o seu sexo:\n1-masculino\n2-feminino\n");
        scanf("%d",&sexo);
        printf("Digite o numero correspondente a cor dos seus olhos:\n1-Azuiz\n2-verdes\n3-Castanhos\n");
        scanf("%d",&olhos);
        printf("Digite o numero correspondente a cor do seus cabelos:\n1-loiro\n2-castanhos\n3-pretos\n");
        scanf("%d",&cab);

        qt++;

        if(id>idM)
            idM=id;

        if(sexo==2){
            if(id>=18 && id<=35){
                if(olhos==2 && cab==1)
                    q++;
        }
        }
        printf("Digite sua idade:");
        scanf("%d",&id);
    }
    printf("A maior idade dos habitantes e: %d\n",idM);
    printf("A porcentagem dos habitantes do sexo feminino com idade entre 18 e 35 com cabelos loiros e olhos verdes e: %.3f %",((float)q/qt)*100);

    return 0;
}
