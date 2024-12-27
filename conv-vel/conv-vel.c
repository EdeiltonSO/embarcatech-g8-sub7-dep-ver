#include <stdio.h>
#include <stdlib.h>

#include "conv-vel.h"

int indexVelocidade() {
    #ifdef _WIN32
        system("chcp 65001 > nul");
    #endif
    int opcaoini, opcaofim;
    float vms = 0.0, vmphs = 0.0, vkmhs = 0.0, convfim = 0.0;
    #define mstomph 2.2369; // Constante de Conversão de Metros por Segundo Para Milhas Por Hora
    #define kmhtoms  3.6; // Constante de Conversão de Metros por Segundo para Quilômetros por Hora
    #define kmhtomph 0.621371; // Constante de Quilômetros por Hora para Milhas por Hora
    printf("Bem vindo ao Conversor de velocidade \n");
    printf("Escolha a primeira unidade para Conversão:\n");
    printf("1 - Metros por Segundo \n2 - Quilômetros por Hora \n3 - Milhas por Hora \n");
    scanf("%d", &opcaoini);
    fflush(stdin);
    printf("Escolha a segunda unidade para Conversão: \n");
    printf("1 - Metros por Segundo \n2 - Quilômetros por Hora \n3 - Milhas por Hora \n");
    scanf("%d", &opcaofim);
    fflush(stdin);
    
    if (opcaoini == 1) 
    {
        printf("\nInforme o valor em Metros por Segundo: ");
        scanf("%f", &vms);
        fflush(stdin);
    } 
    
    else if (opcaoini == 2) 
    {
        printf("\nInforme o valor em Quilômetros por Hora: ");
        scanf("%f", &vkmhs);
        fflush(stdin);
    } 
    
    else if (opcaoini == 3) 
    {
        printf("\nInforme o valor em Milhas por Hora: ");
        scanf("%f", &vmphs);
        fflush(stdin);
    } 
    
    else {
        printf("Opção inválida!\n");
        return 1;
    }
    
    // Conversões

    if (opcaoini == 1 && opcaofim == 2)
    {
        convfim = vms * kmhtoms;
        printf("O valor convertido é: %.2f Quilômetros por Hora\n", convfim);
    }
    
    else if (opcaoini == 1 && opcaofim == 3)
    {
        convfim = vms * mstomph;
        printf("O valor convertido é: %.2f Milhas por Hora\n", convfim);
    }
    
    else if (opcaoini == 2 && opcaofim == 1)
    {
        convfim = vkmhs / kmhtoms;
         printf("O valor convertido é: %.2f Metros por Segundo\n", convfim);
    }
    
    else if (opcaoini == 2 && opcaofim == 3)
    {
        convfim = vkmhs * kmhtomph;
        printf("O valor convertido é: %.2f Milhas por Hora\n", convfim);
    }

    else if (opcaoini == 3 && opcaofim == 1)
    {
        convfim = vmphs / mstomph ;
        printf("O valor convertido é: %.2f Metros por Segundo\n", convfim);
    }

    else if (opcaoini == 3 && opcaofim == 2)
    {
        convfim = vmphs / kmhtomph;
        printf("O valor convertido é: %.2f Quilômetros por Hora\n", convfim);
    }

    else if (opcaoini == opcaofim) {
        printf("A unidade inicial e final são iguais. O valor permanece o mesmo.\n");
    } 
    
    else {
        printf("Opção inválida!\n");
    }

    return 0;
}

