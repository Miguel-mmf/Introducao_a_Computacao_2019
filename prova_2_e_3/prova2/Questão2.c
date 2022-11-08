#include <stdio.h>

int main()
{
    int num,cont,du,tra,grau;

    printf("Digite o numero da amostra: ");
    scanf("%d",&num);
    printf("Digite o conteudo de carbono(em porcentagem): ");
    scanf("%d",&cont);
    printf("Digite a dureza Rokwell: ");
    scanf("%d",&du);
    printf("Digite o valor da resistencia a Tracao(em psi): ");
    scanf("%d",&tra);

    if(cont<7){
        if(du>50){
            if(tra>80000)
                grau=10;
                else
                    grau=9;
        }else
            grau=8;
    }else
        grau=7;

    printf("\nNumero da Amostra: %d\n",num);
    printf("Conteudo do Carbono: %d %\n",cont);
    printf("Dureza Rokwell: %d\n",du);
    printf("Resistencia Tracao(em psi): %d\n\n",du);
    printf("Grau da Amostra de numero %d: %d",num,grau);
    printf("\n\nObrigado !");

    return 0;
}
