#include <stdio.h>
#include <string.h>

int main()
{
    int k,j,n;
    char str[30],aux[30],c='#';

    printf("Digite uma string: ");
    gets(str);
    n=strlen(str);

    for(k=0;str[k]!='\0';k++){
        if(str[k]!='a' && str[k]!='e' && str[k]!='i' && str[k]!='o' && str[k]!='u')
            str[k]='#';
        aux[k]=str[k];
    }
    printf("\n");
    //puts(aux);
    for(k=n;k>=0;k--)
        printf("%c",aux[k]);

    return 0;
}
