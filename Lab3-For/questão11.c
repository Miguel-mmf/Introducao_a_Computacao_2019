    #include <stdio.h>

int main()
{
    int i,s,e,wth=0,wtm=0,qth=0,qtm=0,h=0,m=0;
    float q=0,w=0;

    for(i=1;i<=5;i++){
        printf("Digite seu sexo:\n1-M \nou\n2-F\n=");
        scanf("%s",&s);
        printf("Gostou do produto:\n1-S \nou\n2-N\n=");
        scanf("%d",&e);

        if(s=1){
            h++;
            switch(e){
        case 1:
            wth++;
            break;
        case 2:
            q++;
            qth++;
            break;
        default:
            break;
        }
        }else {
            m++;
            switch(e){
    case 1:
        w++;
        wtm++;
        break;
    case 2:
        qtm++;
        break;
    default:
        break;
        }
        }
    }
    printf("O numero de pessoas q responderam SIM : %d\n",wth+wtm);
    printf("O numero de pessoas q responderam NAO : %d\n",qth+qtm);
    printf("A porcentagem de mulheres q responderam SIM foi de : %.3f \n",(w/m)*100);
    printf("A porcentagem de homens q responderam NAO foi de : %.3f \n",(q/h)*100);

    return 0;
}
