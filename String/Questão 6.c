#include <stdio.h>
#include <string.h>

int main()
{
    int k,j,n,h=0;
    char str[30],aux[30],aux2[30];

    printf("Digite uma string: ");
    gets(str);
    n=strlen(str);

    for(k=0;str[k]!='\0';k++){
        if(str[k]=='a' || str[k]=='e' || str[k]=='i' || str[k]=='o' || str[k]=='u')
            aux[n]=str[k];
        else
            aux[n]='#';
        n--;
        j++;
    }puts(aux);
    for(n=0;n<=j;n++){
        aux2[h]=aux[n];
        printf("%s",aux2[h]);
        h++;

    }
    return 0;
}
