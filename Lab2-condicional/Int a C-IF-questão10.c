#include <stdio.h>

int main()
{
    float g,VF,VP;
    int Cc;

    printf("Digite sua Classe consumidora:\n1-A\n2-B\n3-C\n");
    scanf("%d",&Cc);
    printf("Digite seu consumo em quilowatts/hora:\n");
    scanf("%f",&g);

    switch(Cc){
        case 1:
            VF=g*0.5;
            break;
        case 2:
            VF=g*0.8;
            break;
        case 3:
            VF=g*1;
            break;
        default:
            printf("Opcao invalida !");
            break;
    }
    VP=VF+(0.3*VF);
    printf("O valor a pagar pela conta de energia eletrica e:%.2f\n",VF);

    return 0;
}
