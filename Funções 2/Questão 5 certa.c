#include <stdio.h>

int procurar(char pa[],char c)
{
    int i,p=-1;

    for(i=0;pa[i]!='\0';i++)
        if(pa[i]==c)
            p=i;
    return p;
}
int main()
{
    char pa[20],c;
    int p;

    printf("Digite uma string: ");
    gets(pa);
    printf("Digite o caracter para pesquisar: ");
    scanf("%c",&c);

    p=procurar(pa,c);
    if(p!=-1)
        printf("O caracter foi encontrado na posicao %d",p);
    else
        printf("O caracter nao foi encontrado !");

    return 0;
}
