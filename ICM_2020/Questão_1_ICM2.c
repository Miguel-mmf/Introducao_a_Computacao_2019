#include <stdio.h>
#include <math.h>

int main(){

    int celula;
    float raio,area,vol,aresta,C;

    printf("Digite o tipo da celula unitaria:\n\n1- Cubica Simples;\n2- Cubica de Corpo Centrado (CCC);\n3- Cubica de Face Centrada (CFC);\n4- Hexagonal Simples;\n5- Hexagonal Compacta (HC);\nTIPO: ");
    scanf("%d",&celula);
    printf("\nDigite o raio atomico do elemento que forma o solido em nanometros: ");
    scanf("%f",&raio);

    switch(celula){
case 1:
    aresta=2*raio;
    area=(aresta*aresta)*6; //A ÁREA DO CUBO E A ÁREA DE CADA FACE MULTIPLICADA PELA QUANTIDADE DE FACES.
    vol=pow(aresta,3);  //o VOLUME DO CUBO É SUA ARESTA AO CUBO.
    printf("\nA celula unitaria e um cubo simples.\nArea: %.2e A^3.\nVolume: %.2e nm^3.",area,vol);
    break;
case 2:
    aresta=(4*raio)/sqrt(3);  //A ARESTA É 4 VEZES O RAIO DIVIDO PELA RAIZ QUADRADA DE 3.
    area=(aresta*aresta)*6;
    vol=pow(aresta,3);
    printf("\nA celula unitaria e um Cubo de Corpo Centrado.\nArea: %.2e A^3.\nVolume: %.2e nm^3.",area,vol);
    break;
case 3:
    aresta=(4*raio)/sqrt(2);  //A ARESTA É 4 VEZES O RAIO DIVIDO PELA RAIZ QUADRADA DE 2.
    area=(aresta*aresta)*6;
    vol=pow(aresta,3);
    printf("\nA celuna unitaria e um Cubo de Face Centrada.\nArea: %.2e A^3,\nVolume: %.2e nm^3.",area,vol);
    break;
case 4:
    aresta=2*raio;
    C=aresta;  ////ALTURA DO HEXAGONO, O QUAL É IGUAL A ARESTA DA BASE DO HEXAGONO.
    area=(aresta*C*6)+(2*6*(pow(aresta,2)*sqrt(3))/4);
    vol=6*((pow(aresta,2)*sqrt(3))/4)*C;
    printf("\nA celuna unitaria e um Cubo de Face Centrada.\nArea: %.2e A^3.\nVolume: %.2e nm^3.",area,vol);
    break;
case 5:
    aresta=2*raio;
    C=1.633*aresta;  //A ALTURA DO HEXAGONO É 1.633 VEZES MAIOR QUE A ARESTA DA BASE.
    area=(aresta*C*6)+(2*6*(pow(aresta,2)*sqrt(3))/4);
    vol=6*((pow(aresta,2)*sqrt(3))/4)*C;
    printf("\nA celuna unitaria e um Cubo de Face Centrada.\nArea: %.2e A^3.\nVolume: %.2e nm^3.",area,vol);
    break;
default:
    printf("\nCELULA UNITARIA NAO EXISTENTE !!!");
    break;
    }

    return 0;
}
