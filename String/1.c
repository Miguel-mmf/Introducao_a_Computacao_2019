#include<stdio.h>
int main(){
char str[25],c;
int q=0,i;
printf("\n string:");
gets(str);
printf("\n caracter procura:");
scanf("%c",&c);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==c)
{
q=q+1;
}
}
printf("\nOcorrencias do caracter %c = %i",c,q);
return 0;
}
