#include <stdio.h>

int main() {
    int op = -1;

    do
    {
        printf("\n---------------------------------------");
        printf("\n--- Conversor de unidades de medida ---");
        printf("\n---------------------------------------\n");

        printf("\nDigite o número do conversor que deseja utilizar e tecle ENTER");
        printf("\n(ou tecle 0 seguido de ENTER para encerrar o programa)\n\n");
        printf("1 - Conversor de comprimento\n");
        printf("2 - Conversor de tempo\n");
        printf("3 - Conversor de velocidade\n");
        printf("4 - Conversor de dados\n");

        printf("\n> ");
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
        case 1:
            printf("comprimento\n");
            break;
        case 2:
            printf("tempo\n");
            break;
        case 3:
            printf("velocidade\n");
            break;
        case 4:
            printf("dados\n");
            break;
        
        default:
            break;
        }
    } while (op != 0);
    
    return 0;
}