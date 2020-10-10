#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main ()
{
    char str[100];
    int i;
    printf ("Digite uma frase:\n");
    scanf ("%100[^\n]",&str);
    for (i=0;str[i]!='\0';i++){
        str[i]= toupper (str[i]);
        if (str[i]=='A'|| str[i]=='E'||str[i]=='I'||str[i]==' ')
        str[i]='*';
    }
    printf ("Frase criptografada: %s",str);
    return 0;
}
