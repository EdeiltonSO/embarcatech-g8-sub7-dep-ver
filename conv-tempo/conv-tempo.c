#include <stdio.h>

int main(){

    int opc;
    double segundos,minutos,horas;
inicio:
    printf("Qual tipo de conversao de tempo deseja fazer?\n");
    printf("1 - Segundos para minutos.\n");
    printf("2 - Segundos para Horas.\n");
    printf("3 - Minutos para segundos.\n");
    printf("4 - Minutos para horas.\n");
    printf("5 - Horas para segundos.\n");
    printf("6 - Horas para minutos.\n");
    scanf("%d",&opc);

    switch (opc){
        case 1:{
            printf("Digite quantos segundos:\n");
            scanf("%lf",&segundos);
            minutos=segundos/60;
            printf("%.2f segundos em minutos = %.0fmin", segundos,minutos);
            break;
        }
        case 2:{
            printf("Digite quantos segundos:\n");
            scanf("%lf",&segundos);
            horas=segundos/3600;
            minutos=segundos/60;
            printf("%.2f segundos em horas = %.2fh", segundos,horas);

            break;
        }
        case 3:{
            printf("Digite quantos minutos:\n");
            scanf("%lf",&minutos);
            segundos=minutos*60;
            printf("%.2f minutos em segundos = %.2fseg", minutos,segundos);
            break;
        }
        case 4:{
            printf("Digite quantos minutos:\n");
            scanf("%lf",&minutos);
            horas=minutos/60;
            printf("%.2f minutos em horas = %.2fh", minutos,horas);

            break;
        }
        case 5:{
            printf("Digite quantas horas:\n");
            scanf("%lf",&horas);
            segundos=horas*3600;
            printf("%.2f horas em segundos = %.2fseg",horas,segundos);

            break;
        }
        case 6:{
            printf("Digite quantas horas:\n");
            scanf("%lf",&horas);
            minutos=horas*60;
            printf("%.2f horas em minutos = %.2fmin",horas,minutos);

            break;
        }

  
         default:
        printf("Opcaoo invalida! Digite novamente.\n");
        goto inicio;
        break;
        }

}