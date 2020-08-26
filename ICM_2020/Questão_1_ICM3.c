#include <stdio.h>
#include <math.h>

int main(){

    int celula;
    float raio,volume_nm,aresta,C;

    printf("Digite o tipo da celula unitaria:\n\n1- Cubica Simples;\n2- Cubica de Corpo Centrado (CCC);\n3- Cubica de Face Centrada (CFC);\n4- Hexagonal Simples;\n5- Hexagonal Compacta (HC);\nTIPO: ");
    scanf("%d",&celula);
    printf("\nDigite o raio atomico do elemento que forma o solido em nanometros: ");
    scanf("%f",&raio);

    switch(celula){
case 1:
    aresta=2*raio;
    volume_nm=pow(aresta,3);  //o VOLUME DO CUBO É SUA ARESTA AO CUBO.
    printf("\nA celula unitaria e um cubo simples.\nVolume: %.2e A^3.\nVolume: %.2e nm^3.",volume_nm*1000,volume_nm);
    break;
case 2:
    aresta=(4*raio)/sqrt(3);  //A ARESTA É 4 VEZES O RAIO DIVIDO PELA RAIZ QUADRADA DE 3.
    volume_nm=pow(aresta,3);
    printf("\nA celula unitaria e um Cubo de Corpo Centrado.\nVolume: %.2e A^3.\nVolume: %.2e nm^3.",volume_nm*1000,volume_nm);
    break;
case 3:
    aresta=(4*raio)/sqrt(2);  //A ARESTA É 4 VEZES O RAIO DIVIDO PELA RAIZ QUADRADA DE 2.
    volume_nm=pow(aresta,3);
    printf("\nA celula unitaria e um Cubo de Face Centrada.\nVolume: %.2e A^3,\nVolume: %.2e nm^3.",volume_nm*1000,volume_nm);
    break;
case 4:
    aresta=2*raio;
    C=aresta;  ////ALTURA DO HEXAGONO, O QUAL É IGUAL A ARESTA DA BASE DO HEXAGONO.
    volume_nm=6*((pow(aresta,2)*sqrt(3))/4)*C;
    printf("\nA celula unitaria e um Cubo de Face Centrada.\nVolume: %.2e A^3.\nVolume: %.2e nm^3.",volume_nm*1000,volume_nm);
    break;
case 5:
    aresta=2*raio;
    C=1.633*aresta;  //A ALTURA DO HEXAGONO É 1.633 VEZES MAIOR QUE A ARESTA DA BASE.
    volume_nm=6*((pow(aresta,2)*sqrt(3))/4)*C;
    printf("\nA celula unitaria e um Cubo de Face Centrada.\nVolume: %.2e A^3.\nVolume: %.2e nm^3.",volume_nm*1000,volume_nm);
    break;
default:
    printf("\nCELULA UNITARIA NAO EXISTENTE !!!");
    break;
    }

    return 0;
}
