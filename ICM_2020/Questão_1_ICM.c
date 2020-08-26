#include <stdio.h>
#include <math.h>

int main()
{
    int celula;
    float raio,area,vol,aresta;

    printf("Digite o tipo da celula unitaria:\n1- Cubica Simples;\n2- Cubica de Corpo Centrado (CCC);\n3- Cubica de Face Centrada (CFC);\n4- Haxagonal Simples;\n3- Hexagonal Compacta (HC);\n");
    scanf("%d",&celula);
    printf("\nDigite o raio atomico do elemento que forma o solido em nanometros: ");
    scanf("%f",&raio);

    switch(celula){
case 1:
    aresta=2*raio;
    area=(aresta*aresta)*6;
    vol=pow(aresta,3);
    printf("A celula unitaria e um cubo simples com Area: %f A^3 e Volume: %f nm^3",area,vol);
    break;
case 2:
    aresta=(4*raio)/sqrt(3);
    area=(aresta*aresta)*6;
    vol=pow(aresta,3);
    printf("A celula unitaria e um Cubo de Corpo Centrado com Area: %f A^3 e Volume: %f nm^3",area,vol);
    break;
case 3:
    aresta
default:
    printf("Fez errado porra");
    break;
    }

    return 0;
}
