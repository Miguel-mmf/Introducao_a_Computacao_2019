#include <stdio.h>
#include <locale.h> //biblioteca para usar acentuação na execução do programa

int main()
{
    int x;

    setlocale(LC_ALL,"Portuguese"); //acentuação
    printf("digite um valor:\n");
    scanf("%d",&x);

    if(x>0)
        printf("Número positivo!");
    else if(x<0)
            printf("Número Negativo!");
            else
                printf("ZERO!");

    return 0;
}
