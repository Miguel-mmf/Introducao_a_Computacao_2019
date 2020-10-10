#include <stdio.h>

void peso_ideal(float h,int sexo)
{
    if(sexo==1)
        printf("\n\nPeso ideal %.2f",(72.7*h)-58);
    else
        printf("\n\nPeso ideal %.2f",(62.1*h)-44.7);
}

int main()
{
    int sexo;
    float h;

    printf("Digite sua Altura: ");
    scanf("%f",&h);
    printf("Digite seu sexo -\n1-Masculino\n2-Feminino\n");
    scanf("%d",&sexo);
    peso_ideal(h,sexo);

    return 0;
}
