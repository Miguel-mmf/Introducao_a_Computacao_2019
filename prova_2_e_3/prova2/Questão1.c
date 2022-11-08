#include <stdio.h>

int main()
{
    int cod,inv;
    float valor,tinv=0,tjuros=0,rend;

    printf("Digite o seu codigo:\n");
    scanf("%d",&cod);
    while(cod!=0){
        printf("Qual o tipo de investimento:\n1-Poupança\n2-Poupança Plus\n3-Fundos de Renda Fixa\n");
        scanf("%d",&inv);
        printf("Qual o valor do investimento: ");
        scanf("%f",&valor);
        switch(inv){
    case 1:
        rend=valor*0.015;
        tinv=tinv+valor;
        tjuros=tjuros+rend;
        break;
    case 2:
        rend=valor*0.02;
        tinv=tinv+valor;
        tjuros=tjuros+rend;
        break;
    case 3:
        rend=valor*0.04;
        tinv=tinv+valor;
        tjuros=tjuros+rend;
        break;
    default:
        printf("Operacao invalida !");
        break;
        }

        printf("Codigo do cliente: %d\n",cod);
        printf("Tipo do investimento: %d\n",inv);
        printf("Valor investido: %.1f\n",valor);
        printf("Rendimento mensal: %.2f\n",rend);

        printf("Digite o seu codigo:\n");
        scanf("%d",&cod);
    }
    printf("Total investido: %f\n",tinv);
    printf("Total Juros: %f\n",tjuros);
    return 0;
}
