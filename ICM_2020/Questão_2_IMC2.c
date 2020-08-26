#include <stdio.h>
#include <math.h>

#define pi 3.14
float densidade(int n,float A,float vol_celula)
{
    float d,N;
    N=6.023e23;

    d=(n*A)/(N*vol_celula);
    return d;
}

int main()
{
    int celula,n;
    float area,vol,raio,aresta,vol_celula,vol_at,den,FEA,A,C;

    printf("Digite o tipo de estrutura cristalina do elemento:\n\n1- Cubica Simples;\n2- Cubica de Corpo Centrado (CCC);\n3- Cubica de Face Centrada (CFC);\n4- Haxagonal Simples;\n5- Hexagonal Compacta (HC);\n >>");
    scanf("%d",&celula);
    printf("\nDigite o raio atomico do elemento que forma o solido em nanometros: ");
    scanf("%f",&raio);
    printf("Digite a Massa Atomica do elemento que forma o solido em g/mol: ");
    scanf("%f",&A);  //A É A MASSA ATÔMICA DO ELEMENTO.

    switch(celula){
case 1:
    aresta=2*raio*1e-7;
    vol_celula=pow(aresta,3); // VOLUME DA CÉLULA CÚBICA SIMPLES.
    n=1;  //NÚMERO DE ÁTOMOS POR CELULA.
    FEA=(pi*100)/6; // FATOR DE EMPACOTAMENTO DA CÉLULA UNITÁRIA. ATRAVÉS DE MANIPULAÇÃO ALGEBRICA, PODEMOS RELACIONAR OS RAIOS E SIMPLIFICAR A EXPRESSÃO FEA.
    den=densidade(n,A,vol_celula);  //FUNÇÃO DENSIDADE PARA CALCULAR E RETORNAR A DENSIDADE TEÓRICA.
    printf("\nESTRUTURA: Cubica Simples.\nVolume da Celula: %.2e cm^3.\nFEA: %.2f %%.\nDensidade teorica: %.2f g/cm^3.\n",vol_celula,FEA,den);
    break;
case 2:
    aresta=(4*raio*1e-7)/sqrt(3);
    vol_celula=pow(aresta,3);
    n=2;
    FEA=(pi*(sqrt(3))*100)/8;
    den=densidade(n,A,vol_celula);
    printf("\nESTRUTURA: Cubica de Corpo Centrado.\nVolume da Celula: %.2e cm^3.\nFEA: %.2f %%.\nDensidade teorica: %.2f g/cm^3.\n",vol_celula,FEA,den);
    break;
case 3:
    aresta=(4*raio*1e-7)/sqrt(2);
    vol_celula=pow(aresta,3);
    n=4;
    FEA=(pi*sqrt(2)*100)/6;
    den=densidade(n,A,vol_celula);
    printf("\nESTRUTURA: Cubica de Face Centrada.\nVolume da Celula: %.2e cm^3.\nFEA: %.2f %%.\nDensidade teorica: %.2f g/cm^3.\n",vol_celula,FEA,den);
    break;
case 4:
    aresta=2*raio*1e-7;  //VALOR DA ARESTA DA BASE DO HEXAGONO.
    C=aresta;  //ALTURA DO HEXAGONO, O QUAL É IGUAL A ARESTA DA BASE DO HEXAGONO.
    vol_celula=6*((pow(aresta,2)*sqrt(3))/4)*C;
    n=3;
    FEA=(pi*100)/(3*sqrt(3));
    den=densidade(n,A,vol_celula);
    printf("\nESTRUTURA: Hexagonal Simples.\nVolume da Celula: %.2e cm^3.\nFEA: %.2f %%.\nDensidade teorica: %.2f g/cm^3.\n",vol_celula,FEA,den);
    break;
case 5:
    aresta=2*raio*1e-7;
    C=1.633*aresta;  //A ALTURA DO HEXAGONO É 1.633 VEZES MAIOR QUE A ARESTA DA BASE.
    vol_celula=6*((pow(aresta,2)*sqrt(3))/4)*C;
    n=6;
    FEA=(4*pi*100)/(3*sqrt(3)*3.266);
    den=densidade(n,A,vol_celula);
    printf("\nESTRUTURA: Hexagonal Compacta.\nVolume da Celula: %.2e cm^3.\nFEA: %.2f %%.\nDensidade teorica: %.2f g/cm^3.\n",vol_celula,FEA,den);
    break;
default:
    printf("\nCELULA UNITARIA NAO EXISTENTE !!!");
    break;
    }

    return 0;
} //O CÓDIGO FOI PRODUZIDO E TESTADO COM OS EXERCÍCIOS FEITOS EM SALA.
