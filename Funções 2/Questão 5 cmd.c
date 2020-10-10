#include <stdio.h>
#include <string.h>

int procurar(char pa[],char c)
{
    int i,p=-1;

    for(i=0;pa[i]!='\0';i++)
        if(pa[i]==c)
            p=i;
    return p;
}
int main(int argc,char *argv[])
{
    char pa[20],c;
    int p;

    //printf("Digite uma string: ");
    //gets(pa);
    //printf("Digite o caracter para pesquisar: ");
    //scanf("%c",&c);
    if(argc==3){
        strcpy (pa,argv[1]);
        c=*argv[2];
        p=procurar(pa,c);
        if(p!=-1)
            printf("\nO caracter foi encontrado na posicao %d",p+1);
        else
            printf("\nO caracter nao foi encontrado !");
        }else
            printf("ERRO !");

    return 0;
}
