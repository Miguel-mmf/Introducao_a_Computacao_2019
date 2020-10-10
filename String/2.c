#include<stdio.h>
int main () {
char str[100];
int i, q=1;
printf("\nDigite uma frase:");
scanf ("%100[^\n]",&str);
for (i=0; str[i]!='\0'; i++)
    if (i>0)
    if (str[i]==' ')
    q = q+1;
printf("\nQuantidade de palavras: %i", q);
return 0;
}
