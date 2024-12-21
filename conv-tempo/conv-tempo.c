#include <stdio.h>
#include <locale.h>

#include "conv-tempo.h"

int indexTempo(){

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
    fflush(stdin);

    switch (opc){ //cases das op��es

        case 1:{
            printf("Digite quantos segundos:\n");
            scanf("%lf",&segundos);
            fflush(stdin);
            minutos=segundos/60;
            printf("%.2f segundos em minutos = %.4fmin\n", segundos,minutos);
            break;
        }
        case 2:{
            printf("Digite quantos segundos:\n");
            scanf("%lf",&segundos);
            fflush(stdin);
            horas=segundos/3600;
            minutos=segundos/60;
            printf("%.2f segundos em horas = %.4fh\n", segundos,horas);

            break;
        }
        case 3:{
            printf("Digite quantos minutos:\n");
            scanf("%lf",&minutos);
            fflush(stdin);
            segundos=minutos*60;
            printf("%.2f minutos em segundos = %.4fseg\n", minutos,segundos);
            break;
        }
        case 4:{
            printf("Digite quantos minutos:\n");
            scanf("%lf",&minutos);
            fflush(stdin);
            horas=minutos/60;
            printf("%.2f minutos em horas = %.4fh\n", minutos,horas);

            break;
        }
        case 5:{
            printf("Digite quantas horas:\n");
            scanf("%lf",&horas);
            fflush(stdin);
            segundos=horas*3600;
            printf("%.2f horas em segundos = %.4fseg\n",horas,segundos);

            break;
        }
        case 6:{
            printf("Digite quantas horas:\n");
            scanf("%lf",&horas);
            fflush(stdin);
            minutos=horas*60;
            printf("%.2f horas em minutos = %.4fmin\n",horas,minutos);

            break;
        }
        case 0:{
            printf("Fim da convers�o\n");
            break;
        }

        default:{
          printf("Op��o inv�lida! Digite novamente.\n");
        break;
        }
        
        }
}while(opc!=0);




}
   

