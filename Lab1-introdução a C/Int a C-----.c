#include <stdio.h>

int main()
{
    int id;
    char n[20],ca[20];
    float sb,rea,gr,st;

    printf("Digite seu primeiro nome:");
    scanf("%s",&n);
    printf("Digite seu cargo:");
    scanf("%s",&ca);
    printf("Digite sua idade:");
    scanf("%d",&id);
    printf("Digite seu salario bruto:");
    scanf("%f",&sb);

    rea=sb+sb*0.38;
    gr=sb*0.2;
    st=(rea+gr)*0.85;

    printf("Seu salario liquido é de %.2f\n",st);
    printf("Nome : %s\n",n);
    printf("Idade : %d\n",id);
    printf("Cargo : %s", ca);

    return 0;
}
