#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int l,c,cm,p1=0,p2=0,p3=0;
    float nota[10][3],menor;

    printf("Digite as notas do aluno:\n");
    srand (time(NULL));
    for(l=0;l<10;l++)
        for(c=0;c<3;c++)
            nota[l][c]=rand()%10;

    for(l=1;l<=10;l++){
        printf("\nNotas do aluno %d = ",l);
        for(c=0;c<3;c++)
            printf("%d ",l,c);
    }

    printf("\n\nMatriz de Notas:\n");
    for(l=0;l<10;l++){
        for(c=0;c<3;c++)
            printf("  %.2f  ",nota[l][c]);
        printf("\n");
    }
    printf("\n");

    for(l=0;l<10;l++){
        printf("Aluno: %d",l);
        menor=11;
        for(c=0;c<3;c++)
            if(nota[l][c]<menor){
                menor=nota[l][c];
                cm=c;
            }
        printf(" - Menor nota = %.2f\n",menor);
        if(cm==0)
            p1++;
        else if(cm==1)
                p2++;
        else
            p3++;
    }
    printf("\nQuantidade de alunos com nota baixa na primeira prova = %d",p1);
    printf("\nQuantidade de alunos com nota baixa na segunda prova = %d",p2);
    printf("\nQuantidade de alunos com nota baixa na terceira prova = %d",p3);

    return 0;
}
