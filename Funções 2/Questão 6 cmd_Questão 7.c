#include <stdio.h>

int conv(int *seg,int *min,int *hr);

int main(int argc,char *argv[])
{
    int seg,min,hr;

    if(argc==2){
        seg=atoi(argv[1]);
        conv(&seg,&min,&hr);
        printf("\nO total de segundos convertido: %d hr,%d min,%d seg",hr,min,seg);
    }
    return 0;
}
int conv(int *seg,int *min,int *hr)
{
    *hr=*seg/3600;
    *min=(*seg%3600)/60;
    *seg=*seg%60;
}
