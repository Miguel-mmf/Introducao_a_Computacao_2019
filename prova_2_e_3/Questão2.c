#include <stdio.h>

int main()
{
    int t,q=0,w=0,pc;
    float valor,vpp,s=0;

    printf("Digite o codigo da transacao:\n1-A vista\n2-A prazo\n");
    scanf("%d",&t);

    while(t!=0){

    printf("Insira o valor da transacao:\n");
    scanf("%f",&valor);

    if(t==1){
        q++;
    }else if(t==2){
        printf("Em quantas parcelas:\n1-Duas Parcelas\nou\n2-Tres Parcelas\n");
        scanf("%d",&pc);
        switch(pc){
        case 1:
            vpp=valor/2;
            break;
        case 2:
            vpp=valor/3;
            break;
        default:
            printf("Quantidade de parcelas invalida !");
            break;
        }
        w++;
        s=s+vpp;
        }else
            printf("Codigo de transacao invalido !\n");
        printf("Digite o codigo da transacao:\n1-A vista\n2-A prazo\n");
    scanf("%d",&t);
    }
    printf("Valor total das compras a vista: %d\n",q);
    printf("Valor total das compras a prazo: %d\n",w);
    printf("Valor da soma das primeiras prestacoes: %.2f",s);

    return 0;
}
