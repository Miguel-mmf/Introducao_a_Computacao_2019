#include <stdio.h>
#include <string.h>

int main ()
{
    char str[100],c;
    int i,q=0;

    printf ("Digite uma frase: ");
    gets(str);

    for(i=0;str[i]!='\0';i++){
        if (i>0)
            if (str[i]=='r' && str[i+1]==' ' || str[i+1]=='.' || str[i+1]==',' || str[i+1]==';' || str[i+1]=='?' || str[i+1]=='!')
                q++;
            else if(str[i]=='r' && str[i+1]=='\0')
                q++;
    }
    printf ("\n\nO total de verbos e %d",q);

    return 0;
}
