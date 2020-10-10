#include <stdio.h>

int main()
{
    int t=0;
    float mi,mf=0;

    printf("Digite a massa inicial do material:");
    scanf("%f",&mi);

    while(mi>=0.5){
        mi=mi/2;
        t++;
        mf=mi;
    }
    printf("A massa inicial e : %.3f g\n",mi);
    printf("A massa final e : %.3f g\n",mf);
    printf("O tempo calculado em segundos e : %d s",t*50);

    return 0;
}
