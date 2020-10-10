#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char str[20],c,d;
    int i,j,k,y,C[100];

    printf("Digite a string: ");
    gets(str);
    j=strlen(str);

    for(k=0;k<j;k++){
        y=rand()%j;
        C[k]=y;
        printf("%d ",C[k]);
    }
    for(i=0;str[i]!='\0';i++){
        for(k=0;k<j;k++)
            if(C[k]==i){
                str[i]=toupper(str[i]);
            }
    }
    printf("\n\n%s ",str);

    return 0;
}
