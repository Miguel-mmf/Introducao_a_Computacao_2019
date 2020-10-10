#include <stdio.h>
#include <math.h>

int main()
{
    int x,y,o,z;
    float r;

    printf("digite dois numeros:");
    scanf("%d %d",&x,&y);
    printf("digite a operação q vc deseja executar\n 1- soma\n 2-raiz quadrada\n =");
    scanf("%d",&o);

    switch(o){
    case 1:
        printf("A soma e: %d",x+y);
        break;
    case 2:
        printf("Escolha o numero para obter a raiz:\n   1-%d\n  ou\n    2-%d\n =",x,y);
        scanf("%d",&z);
        switch(z){
    case 1:
        printf("A raiz quadrada e: %f",sqrt(x));
        break;
    case 2:
        printf("A raiz quadrada e:%f",sqrt(y));
        break;
    default:
        printf("Opcao invalida!");
        break;
        }
    }
    return 0;
}
