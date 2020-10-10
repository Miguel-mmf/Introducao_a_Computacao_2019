#include <stdio.h>

int main()
{
    int x,q=0,w=0,a,b,c,d,e,f,g,h,i,j;

    printf("Digite 10 valores em sequencia:");
    scanf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);

    for(x=10;x<=50;x++){
        if(a=x)
            q++;
            else
                w++;
        if(b=x)
            q++;
            else
                w++;
        if(c=x)
            q++;
            else
                w++;
        if(d=x)
            q++;
            else
                w++;
        if(e=x)
            q++;
            else
                w++;
        if(f=x)
            q++;
            else
                w++;
        if(g=x)
            q++;
            else
                w++;
        if(h=x)
            q++;
            else
                w++;
        if(i=x)
            q++;
            else
                w++;
        if(j=x)
            q++;
            else
                w++;
   }
   printf("%d estao na sequencia !\n",q);
   printf("%d estao na sequencia !",w);

   return 0;
}
