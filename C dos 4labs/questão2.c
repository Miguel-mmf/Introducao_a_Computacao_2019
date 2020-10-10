#include <stdio.h>

int main ()
{
    float s=1015,i,a=0.015;


    for(i=2007;i<=2019;i++){
        a=a*2;
        s=s+s*a;
        printf("Salario = %.2f\n",s);
    }
    printf("Aumento = %.2f",a);

    return 0;
}
