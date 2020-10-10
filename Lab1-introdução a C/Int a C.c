#include <stdio.h>

//Fazer um programa que leia um número e mostre o seu antecessor e o seu sucessor
int main()
{
    int x;

    printf("digite um numero:");
    scanf("%d",&x);
    printf("Antecessor: %d\n",x-1);
    printf("Sucessor: %d",x+1);

    return 0;
}
