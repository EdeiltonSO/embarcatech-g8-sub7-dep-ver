#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int opc;
    double segundos,minutos,horas;

do{
    printf("Qual tipo de conversao de tempo deseja fazer?\n");
    printf("1 - Segundos para minutos.\n");
    printf("2 - Segundos para Horas.\n");
    printf("3 - Minutos para segundos.\n");
    printf("4 - Minutos para horas.\n");
    printf("5 - Horas para segundos.\n");
    printf("6 - Horas para minutos.\n");
    printf("0 - Sair.\n");
    scanf("%d",&opc);

    switch (opc){ //cases das opções

        case 1:{
            printf("Digite quantos segundos:\n");
            scanf("%lf",&segundos);
            minutos=segundos/60;
            printf("%.2f segundos em minutos = %.4fmin\n", segundos,minutos);
            break;
        }
        case 2:{
            printf("Digite quantos segundos:\n");
            scanf("%lf",&segundos);
            horas=segundos/3600;
            minutos=segundos/60;
            printf("%.2f segundos em horas = %.4fh\n", segundos,horas);

            break;
        }
        case 3:{
            printf("Digite quantos minutos:\n");
            scanf("%lf",&minutos);
            segundos=minutos*60;
            printf("%.2f minutos em segundos = %.4fseg\n", minutos,segundos);
            break;
        }
        case 4:{
            printf("Digite quantos minutos:\n");
            scanf("%lf",&minutos);
            horas=minutos/60;
            printf("%.2f minutos em horas = %.4fh\n", minutos,horas);

            break;
        }
        case 5:{
            printf("Digite quantas horas:\n");
            scanf("%lf",&horas);
            segundos=horas*3600;
            printf("%.2f horas em segundos = %.4fseg\n",horas,segundos);

            break;
        }
        case 6:{
            printf("Digite quantas horas:\n");
            scanf("%lf",&horas);
            minutos=horas*60;
            printf("%.2f horas em minutos = %.4fmin\n",horas,minutos);

            break;
        }
        case 0:{
            printf("Fim da conversão\n");
            break;
        }

        default:{
          printf("Opção inválida! Digite novamente.\n");
        break;
        }
        
        }
}while(opc!=0);




}
   

