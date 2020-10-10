#include <stdio.h>
#include <string.h>

int main(){
    char str[20],aux[20];
    int i,t;

    printf("\n string:");
    gets(str);
    t=strlen(str)-1;

    for (i=0;i<=t;i++)
        aux[t-i]=str[i];

    aux[t+1] = '\0';

    if(strcmp(str,aux)==0)
        printf("\n A string eh palindromo");
    else
        printf("\n A string NAO eh palindromo");

    return 0;
}
