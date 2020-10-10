#include<stdio.h>
#include<ctype.h>

int main () {
    char str[100];
    int i;

    printf("\nDigite uma frase:");
    scanf ("%100[^\n]",&str);

    for (i=0; str[i]!='\0'; i++){
        str[i]= toupper(str[i]);
            if (str[i]== 'E' || str[i]== 'A' || str[i]== 'I' || str[i]== 'O' || str[i]== 'U' )
                str[i]= '*';
    }
    printf("\nFase Criptografada: %s", str);

    return 0;
}
