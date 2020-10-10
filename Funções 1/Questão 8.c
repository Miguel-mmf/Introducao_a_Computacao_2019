#include <stdio.h>

void rea(int dia,int mes)
{
    dia=dia+5;
    if(dia>28 && mes==2){
        dia=dia-28;
        mes++;
    }
    else if(dia>30 && mes==6 || mes==9 || mes==11){
            dia=dia-30;
            mes++;
        }
    else if(dia>31 && mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){
            dia=dia-31;
            mes++;
        }
    printf("\n\nDia com o reajuste: %d",dia);
    printf("\nMes com o reajuste: ");
    switch(mes){
case 1:
    printf("Janeiro"); break;
case 2:
    printf("Fevereiro");break;
case 3:
    printf("Marco");break;
case 4:
    printf("Abril");break;
case 5:
    printf("Maio");break;
case 6:
    printf("Junho");break;
case 7:
    printf("Julho");break;
case 8:
    printf("Agosto");break;
case 9:
    printf("Setembro");break;
case 10:
    printf("Outubro");break;
case 11:
    printf("Novembro");break;
case 12:
    printf("Dezembro");break;
    }
}

int main()
{
    int dia,mes;

    printf("Digite uma data: ");
    scanf("%d",&dia);
    printf("Digite o numero do respectivo mes(1 a 12):");
    scanf("%d",&mes);

    rea(dia,mes);

    return 0;
}
