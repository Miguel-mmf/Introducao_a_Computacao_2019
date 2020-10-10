#include <stdio.h>

void mostrar_seq()
{
    int i,j=37,k=38;

    printf("Sequencia = ");
    for(i=1;i<=37;i++){
        printf("%d*%d/%d",j,k,i);
        j--;
        k--;
        if(i<37)
            printf(" + ");
    }
}
float calcular_seq()
{
    int i;
    float soma=0;

    for(i=1;i<=37;i++)
        soma=soma+(38-i)*(39-i)/i; //Sem usar as variaveis k e j;

    return soma;
}
int main()
{
    mostrar_seq();
    printf("\n\nSoma = %.2f",calcular_seq());

    return 0;
}
