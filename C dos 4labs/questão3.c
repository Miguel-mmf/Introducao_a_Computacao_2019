#include <stdio.h>
#define pe 0.3048

int main ()
{
    int t;
    float h;


    for (t=0;t<=15; t++){
        h=3*(t*t);
        printf("Altura = %.2f     Tempo = %.2d\n",h*pe,t);
    }
    return 0;
}
