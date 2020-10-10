#include<stdio.h>
int main(){
    char str[20],c;
int i,j=0,OC[20];
printf("\n string:");
gets(str);
printf("\n caracter procura:");
scanf("%c",&c);
for(i=0;str[i]!='\0';i++)
if(str[i]==c){
OC[j]=i;
j++;}
OC[j]=-1;
printf("\nVetor de ocorrencias: ");
for (i=0;i<=j;i++)
    printf(" %i",OC[i]);
return 0;
}
