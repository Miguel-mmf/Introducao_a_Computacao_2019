#include <stdio.h>

void escrevechar (char c, int linha){
    int i, j;
    for (i=1;i<=linha;i++){
        for (j=1;j<=70;j++)
            printf ("%c",c);
        printf ("\n");
    }
}

int main (){
    int lin;
    char c;
    printf ("Qual o caracter? ");
    scanf ("%c",&c);
    printf ("Quantas linhas? ");
    scanf ("%i",&lin);
    escrevechar (c,lin);
    return 0;
}
