#include <stdio.h>

int main()
{
    char str[20], c;
    int i, j=0, OC[20];

    printf("Digite a string: ");
    gets(str);
    printf("Digite o caracter: ");
    scanf("%c",&c);

    for(i=0;str[i]!='\0';i++)
        if(str[i]==c){
            OC[j]=i;
            j++;
        }
    OC[j]=-1;

    printf("Vetor de Ocorrencias: ");

    for(i=0;i<=j;i++)
        printf("%d ",OC[i]);

    return 0;
}
