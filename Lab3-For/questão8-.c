#include <stdio.h>

int main()
{
    int x,q=0,w=0,a,b,c,d,e,f,g,h,i,j;

    printf("Digite 10 valores em sequencia:");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    for(x=10;x<=50;x++){
        if(a==x || b==x || c==x || d==x || e==x || f==x || g==x || h==x || i==x || j==x)
            q++;
   }
   printf("%d estao na sequencia !\n",q);
   printf("%d estao na sequencia !",(10-q));

   return 0;
}
