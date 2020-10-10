#include <stdio.h>

int main()
{
    int x,y,z;

    printf("Digite 3 numeros:");
    scanf("%d %d %d",&x,&y,&z);

    if (x<y && x<z)
        printf("O menor numero e: %d",x);
    else if(y<z)
            printf("O menor numero e: %d",y);
        else
            printf("O menor numero e: %d",z);

        return 0;
}
