#include <stdio.h>

int triangulo(int a,int b, int c)
{
    if(a==b && b==c)
        return 0;
    else if(a==b || b==c)
        return 1;
    else
        return 2;
}

int main()
{
    int a,b,c;

    printf("Digite os lados do triangulo:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b+c && b<a+c && c<b+a)
    switch(triangulo(a,b,c)){
case 0:
    printf("Triangulo Equilatero !");
    break;
case 1:
    printf("Triangulo Isosceles !");
    break;
case 2:
    printf("Triangulo escaleno !");
    break;
    }

    return 0;
}
