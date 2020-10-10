#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100],c;
    int i,q=1;

    printf ("Digite uma frase:\n");
    scanf ("%100[^\n]",&str);

    for (i=0;str[i]!='\0';i++){
        if (i>0)
            if (str[i-1]!=' ' && str[i+1]!=' ' && str[i]==' ')
        q++;
    }
    printf ("\n\nA quantidade de palavras eh %i",q);

    return 0;
}
