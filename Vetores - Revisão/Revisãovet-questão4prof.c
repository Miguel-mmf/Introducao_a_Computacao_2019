#include <stdio.h>

int main (){
    int T[12],i,maior=-100, menor=100,ima,ime;
    printf ("Digite as temperaturas do ano: \n");
    for (i=0;i<12;i++){
        printf ("T[%i] = ",i);
        scanf ("%i",&T[i]);
        if (T[i] < menor){
            menor=T[i];
            ime=i;}
        if (T[i] > maior){
            maior=T[i];
            ima=i;}
    }
    printf ("\n\nMenor temperatura = %i ",menor);
    switch (ime){
    case 0: printf (" em Janeiro\n");break;
    case 1: printf (" em Fevereiro\n"); break;
    case 2: printf (" em Marco\n"); break;
    case 3: printf (" em Abril\n"); break;
    case 4: printf (" em Maio\n"); break;
    case 5: printf (" em Junho\n"); break;
    case 6: printf (" em Julho\n"); break;
    case 7: printf (" em Agosto\n"); break;
    case 8: printf (" em Setembro\n"); break;
    case 9: printf (" em Outubro\n"); break;
    case 10: printf (" em Novembro\n"); break;
    case 11: printf (" em Dezembro\n"); break;
    }
    printf ("\n\nMaior temperatura = %i",maior);
    switch (ima){
    case 0: printf (" em Janeiro\n");break;
    case 1: printf (" em Fevereiro\n"); break;
    case 2: printf (" em Marco\n"); break;
    case 3: printf (" em Abril\n"); break;
    case 4: printf (" em Maio\n"); break;
    case 5: printf (" em Junho\n"); break;
    case 6: printf (" em Julho\n"); break;
    case 7: printf (" em Agosto\n"); break;
    case 8: printf (" em Setembro\n"); break;
    case 9: printf (" em Outubro\n"); break;
    case 10: printf (" em Novembro\n"); break;
    case 11: printf (" em Dezembro\n"); break;
    }
    return 0;
}
