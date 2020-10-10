#include <stdio.h>

int conv(int *seg,int *min,int *hr);

int main()
{
    int seg,min,hr;

    printf("Digite o total de segundos: ");
    scanf("%i",&seg);
    conv(&seg,&min,&hr);
    printf("\nO total de segundos convertido: %d hr,%d min,%d seg",hr,min,seg);

    return 0;
}

int conv(int *seg,int *min,int *hr)
{
    *hr=*seg/3600;
    *min=(*seg%3600)/60;
    *seg=*seg%60;
}
