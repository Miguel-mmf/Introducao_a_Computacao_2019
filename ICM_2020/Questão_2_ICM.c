#include <stdio.h>
#include <math.h>

#define pi 3.14

float vol_ato(int n,float raio){
    float V;

    V=n*(4/3)*pi*(pow(raio,3));
    return V;
}

int main()
{
    int celula,n;
    float area,vol,raio,aresta,vol_celula,vol_at,den,FEA,A,N,C;

    N=6.023*(pow(10,23));

    printf("Digite o tipo de estrutura cristalina do elemento:\n\n1- Cubica Simples;\n2- Cubica de Corpo Centrado (CCC);\n3- Cubica de Face Centrada (CFC);\n4- Haxagonal Simples;\n5- Hexagonal Compacta (HC);\n >>");
    scanf("%d",&celula);
    printf("\nDigite o raio atomico do elemento que forma o solido em nanometros: ");
    scanf("%f",&raio);
    printf("Digite a Massa Atomica do elemento que forma o solido em g/mol: ");
    scanf("%f",&A);  //A é a massa aômica do elemento.

    switch(celula){
case 1:
    aresta=2*raio;
    vol_celula=pow(aresta,3);
    n=1;  //NUMERO DE ATOMOS POR CELULA.
    FEA=(vol_ato(n,raio)/vol_celula)*100;
    den=A/(N*vol_celula);
    printf("\nESTRUTURA: Cubica Simples.\nCom Volume da Celula: %f nm^3.\nFEA: %f %.\nDensidade teorica: %f %.",vol_celula,FEA,den);
    break;
case 2:
    aresta=(4*raio)/sqrt(3);
    vol_celula=pow(aresta,3);
    n=2;
    FEA=(vol_ato(n,raio)/vol_celula)*100;
    den=(2*A)/(N*vol_celula);
    printf("\nESTRUTURA: Cubica de Corpo Centrado.\nCom Volume da Celula: %f nm^3.\nFEA: %f %.\nDensidade teorica: %f %.",vol_celula,FEA,den);
    break;
case 3:
    aresta=(4*raio)/sqrt(2);
    vol_celula=pow(aresta,3);
    vol_at=pow(aresta,3);
    FEA=
    printf("\nA celuna unitaria e um Cubo de Face Centrada.\nCom Area: %f A^3 e Volume: %f nm^3",area,vol);
    break;
case 4:
    aresta=2*raio;
    C=aresta;
    area=(aresta*C*6)+(2*6*(pow(aresta,2)*sqrt(3))/4);
    vol=6*((pow(aresta,2)*sqrt(3))/4)*C;
    printf("\nA celuna unitaria e um Cubo de Face Centrada.\nCom Area: %f A^3 e Volume: %f nm^3",area,vol);
    break;
case 5:
    aresta=2*raio;
    C=1.633*aresta;
    area=(aresta*C*6)+(2*6*(pow(aresta,2)*sqrt(3))/4);
    vol=6*((pow(aresta,2)*sqrt(3))/4)*C;
    printf("\nA celuna unitaria e um Cubo de Face Centrada.\nCom Area: %f A^3 e Volume: %f nm^3",area,vol);
    break;
default:
    printf("\nCELULA UNITARIA NAO EXISTENTE !!!");
    break;
    }

    return 0;
}
