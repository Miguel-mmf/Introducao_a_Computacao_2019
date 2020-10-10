#include <stdio.h>

void conv(int seg);

int main()
{
    int seg;

    printf("Digite o total de segundos: ");
    scanf("%d",&seg);
    printf("O total de segundos convertido: ");
    conv(seg);

    return 0;
}

void conv(int seg)
{
    int h,min;

    h=seg/3600;
    min=(seg%3600)/60;
    seg=seg%60;

    printf("%d hr, %d min, %d s",h,min,seg);
}
