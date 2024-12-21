#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#include "conv-comp.h"

// Convers�o de metros
float metroParaCentimetro(float medidaMetro);
float metroParaMilimetro(float medidaMetro);

// Convers�o de centimetros
float centimetroParaMetro(float medidaCentimetro);
float centimetroParaMilimetro(float medidaCentimetro);

// Convers�o de milimetros
float milimetroParaMetro(float medidaMilimetro);
float milimetroParaCentimetro(float medidaMilimetro);

int indexComprimento()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao = 0;
    float medida = 0;

    do{
        printf("\n---------------------------------------");
        printf("\nConversor de medidas");
        printf("\n---------------------------------------");

        printf("\nInforme o tipo de convers�o\n\n1 - Metros para cent�metros\n2 - Metros para mil�metros\n3 - Cent�metros para metro\n4 - Cent�metro para mil�metro\n5 - Mil�metro para metro\n6 - M�limetro para cent�metro\n0 - Sair\n");

        scanf("%d",&opcao);
        fflush(stdin);

        if(opcao > 6 || opcao < 0){
            printf("\nop��o invalida. Por favor selecione uma op��o de convers�o apropriada");
            continue;
        }
        if(opcao == 0)break;

        printf("Informe o valor da medida para realizar a convers�o: ");
        
        scanf("%f",&medida);
        fflush(stdin);

        switch (opcao)
        {
        case 1:
            printf("\n%.2f metro(s) � o equivalente a %.2f cent�metro(s)",medida,metroParaCentimetro(medida));
        break;

        case 2:
            printf("\n%.2f metro(s) � o equivalente a %.2f mil�metro(s)",medida,metroParaMilimetro(medida));
        break;

        case 3:
            printf("\n%.2f cent�metro(s) � o equivalente a %.2f metro(s)",medida,centimetroParaMetro(medida));
        break;

        case 4:
            printf("\n%.2f cent�metro(s) � o equivalente a %.3f mil�metro(s)",medida,centimetroParaMilimetro(medida));
        break;

        case 5:
            printf("\n%.2f mil�metro(s) � o equivalente a %.3f metro(s)",medida,milimetroParaMetro(medida));
        break;
        
        case 6:
            printf("\n%.2f mil�metro(s) � o equivalente a %.2f cent�metro(s)",medida,milimetroParaCentimetro(medida));
        break;
        
        }

    } while (opcao != 0);

        return 0;
}

// Convers�o de metros
float metroParaCentimetro(float medidaMetro)
{
    return medidaMetro * 100;
}
float metroParaMilimetro(float medidaMetro)
{
    return medidaMetro * 1000;
}

// Convers�o de centimetros
float centimetroParaMetro(float medidaCentimetro)
{
    return medidaCentimetro / 100;
}
float centimetroParaMilimetro(float medidaCentimetro)
{
    return medidaCentimetro * 10;
}

// Convers�o de milimetros
float milimetroParaMetro(float medidaMilimetro)
{
    return medidaMilimetro / 1000;
}
float milimetroParaCentimetro(float medidaMilimetro)
{
    return medidaMilimetro / 10;
}