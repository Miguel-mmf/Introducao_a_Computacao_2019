#include<stdio.h>
int main(){
    char str[25],c;
    int i,j;
printf("string:");
gets(str);
printf("\ncaracter eliminado:");
scanf("%c",&c);
for(i=0;str[i]!='\0';i++)
  if(str[i]==c){
  for (j=i;str[j]!='\0';j++)
str[j]= str[j+1];
  str[j-1]='\0';
  }
  printf("\nNova string:");
  puts(str);
  return 0;
}
