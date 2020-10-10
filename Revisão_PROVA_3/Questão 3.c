#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerar_vetor(int A[])
{
    int i;

    srand(time(NULL)); //para gerar o vetor;
    for(i=0;i<10;i++)
        A[i]=rand()%10;
}
void mostrar_vetor(int A[])
{
    int i;

    printf("\n\nVetor = ");
    for(i=0;i<10;i++)
        printf("%d ",A[i]);
}
int fatorial(int n)
{
    int i,f=1;

    for(i=1;i<=n;i++)
        f=f*i;
    return f;
}
void calcular_vetorB(int A[],int B[])
{
    int i;

    for(i=0;i<10;i++)
        B[i]=fatorial(A[i]);
}
int main()
{
    int A[10],B[10];

    gerar_vetor(A);
    mostrar_vetor(A);
    calcular_vetorB(A,B);
    mostrar_vetor(B);

    return 0;
}
