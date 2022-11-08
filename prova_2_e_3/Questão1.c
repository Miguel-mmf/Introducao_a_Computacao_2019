#include <stdio.h>

int main()
{
    int cod,q,punit,ptotal;
    float desc,vdes;

    printf("Digite o codigo do produto:\n");
    scanf("%d",&cod);
    printf("Digite a quantidade do produto:\n");
    scanf("%d",&q);

    if(cod>0 && cod<=10){
        punit=10;
        printf("O preco unitario do produto comprado e: %d.00\n",punit);
        ptotal=10*q;
        printf("O preco total da nota: %d.00\n",ptotal);

    }else if(cod>10 && cod<=20){
        punit=15;
        printf("O preço unitario do produto comprado e: %d.00\n",punit);
        ptotal=15.00*q;
        printf("O preco total da nota: %d.00\n",ptotal);
    } else if(cod>20 && cod<=30){
        punit=20;
        printf("O preço unitario do produto comprado e: %d.00\n",punit);
        ptotal=20.00*q;
        printf("O preco total da nota: %d.00\n",ptotal);
    } else
        printf("Codigo invalido !");

    if(ptotal<=250.00){
        vdes=ptotal*0.05;
        printf("Valor do desconto: %.2f\n",vdes);
        desc=ptotal*0.95;
        printf("Preco final: %.2f\n",desc);
    }else if(ptotal>250.00 && ptotal<=500.00){
        vdes=ptotal*0.1;
        printf("Valor do desconto: %.2f\n",vdes);
        desc=ptotal*0.9;
        printf("Preco final: %.2f\n",desc);
    }else if(ptotal>500.00){
        vdes=ptotal*0.15;
        printf("Valor do desconto: %.2f\n",vdes);
        desc=ptotal*0.85;
        printf("Preco final: %.2f\n",desc);
        }

    return 0;
}
