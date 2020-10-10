#include <stdio.h>
#include <string.h>

int main()
{
    int i,j;
    char str[20],aux[20];

    printf("Digite a string: ");
    gets(str);

    j=strlen(str)-1;

    for(i=0;i<=j;i++)
        aux[j-i]=str[i];

    aux[j+1]='\0';
    //puts(aux)= é usada para mostrar a string ao contrário

    if(strcmp(str,aux)==0)
        printf("\n A string %s e palindromo",str);
    else
        printf("\n A string %s nao e palindromo",str);

    return 0;
}
