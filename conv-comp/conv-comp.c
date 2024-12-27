#include <stdio.h>
#include <stdlib.h>

#include "conv-comp.h"

// Conversao de metros
float metroParaCentimetro(float medidaMetro);
float metroParaMilimetro(float medidaMetro);

// Conversao de centimetros
float centimetroParaMetro(float medidaCentimetro);
float centimetroParaMilimetro(float medidaCentimetro);

// Conversao de milimetros
float milimetroParaMetro(float medidaMilimetro);
float milimetroParaCentimetro(float medidaMilimetro);

int indexComprimento()
{
    #ifdef _WIN32
        system("chcp 65001 > nul");
    #endif

    int opcao = 0;
    float medida = 0;

    do{
        printf("\n---------------------------------------");
        printf("\nConversor de medidas");
        printf("\n---------------------------------------");

        printf("\nInforme o tipo de conversão\n\n1 - Metros para centímetros\n2 - Metros para milímetros\n3 - Centímetros para metro\n4 - Centímetro para milímetro\n5 - Milímetro para metro\n6 - Mílimetro para centímetro\n0 - Sair\n");

        scanf("%d",&opcao);
        fflush(stdin);

        if(opcao > 6 || opcao < 0){
            printf("\nOpção inválida. Por favor selecione uma opção de conversão apropriada.");
            continue;
        }
        if(opcao == 0)break;

        printf("Informe o valor da medida para realizar a conversão: ");
        
        scanf("%f",&medida);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("\n%.2f metro(s) é o equivalente a %.2f centímetro(s)",medida,metroParaCentimetro(medida));
        break;

        case 2:
            printf("\n%.2f metro(s) é o equivalente a %.2f milímetro(s)",medida,metroParaMilimetro(medida));
        break;

        case 3:
            printf("\n%.2f centímetro(s) é o equivalente a %.2f metro(s)",medida,centimetroParaMetro(medida));
        break;

        case 4:
            printf("\n%.2f centímetro(s) é o equivalente a %.3f milímetro(s)",medida,centimetroParaMilimetro(medida));
        break;

        case 5:
            printf("\n%.2f milímetro(s) é o equivalente a %.3f metro(s)",medida,milimetroParaMetro(medida));
        break;
        
        case 6:
            printf("\n%.2f milímetro(s) é o equivalente a %.2f centímetro(s)",medida,milimetroParaCentimetro(medida));
        break;
        
        }

    } while (opcao != 0);

        return 0;
}

// Conversao de metros
float metroParaCentimetro(float medidaMetro)
{
    return medidaMetro * 100;
}
float metroParaMilimetro(float medidaMetro)
{
    return medidaMetro * 1000;
}

// Conversao de centimetros
float centimetroParaMetro(float medidaCentimetro)
{
    return medidaCentimetro / 100;
}
float centimetroParaMilimetro(float medidaCentimetro)
{
    return medidaCentimetro * 10;
}

// Conversao de milimetros
float milimetroParaMetro(float medidaMilimetro)
{
    return medidaMilimetro / 1000;
}
float milimetroParaCentimetro(float medidaMilimetro)
{
    return medidaMilimetro / 10;
}