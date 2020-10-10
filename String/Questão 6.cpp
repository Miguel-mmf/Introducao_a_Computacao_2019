#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], c, aux[20];
    int i, j=0;

    printf("Digite a string: ");
    gets(str);
    printf("Digite o caracter: ");
    scanf("%c",&c);

    for(i=0;str[i]!='\0';i++)
        if(str[i]!=c){
            aux[j]=str[i];
            j++;
        }

    printf("\n A palavra %s sem o caracter escolhido: ",str);
    aux[j]='\0';
    puts(aux);

    return 0;
}
