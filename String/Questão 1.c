#include <stdio.h>

int main()
{
    char str[20],c;
    int i,q=0;

    printf ("Digite uma string: ");
    gets(str); //ou scanf("%20[^\n], &str")
    printf ("Digite o caracter: ");
    scanf("%c",&c);

    for (i=0;str[i]!='\0';i++)
        if(str[i]==c)
            q++;

    printf("Ocorrencia do caracter %c= %d",str[i],q);

    return 0;

}
