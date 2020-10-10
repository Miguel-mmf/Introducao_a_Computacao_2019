#include <stdio.h>

int main()
{
    int x,y,c;

    printf("Digite dois valores:\n");
    scanf("%d %d",&x,&y);
    printf("Digite a operação que vc deseja realizar:\n1-adicao\n2-subtracao\n3-multiplicacao\n4-divisao\n");
    scanf("%d",&c);

    if(x>=0 && y>=0)
    switch(c){
        case 1:
            printf("%d + %d : %d",x,y,x+y);
            break;
        case 2:
            printf("%d - %d : %d",x,y,x-y);
            break;
        case 3:
            printf("%d * %d : %d",x,y,x*y);
            break;
        case 4:
            printf("%d / %d : %d",x,y,x/y);
            break;
        default:
            printf("Operacao invalida");
    }
    else
        printf("numeros invalidos");

    return 0;
}
