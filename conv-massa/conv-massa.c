#include <stdio.h>
#include <stdlib.h>

// Declaração das funções
float tonelada(int entrada, float valor);
float kilograma(int entrada, float valor);
float hectograma(int entrada, float valor);
float decagrama(int entrada, float valor);
float grama(int entrada, float valor);
float decigrama(int entrada, float valor);
float centigrama(int entrada, float valor);
float miligrama(int entrada, float valor);

int indexMassa(){
     
    // Resolve as questões do acento
    system("chcp 65001 > nul");

    // Variaveis de controle do tipo de coversão
    int entrada, saida; 
    
    // Variavel de controle do menu
    int logout;
    
    logout = 1; // Flag do menu
    
    // Menu
    do {
        printf("Qual a unidade de medida de entrada? \n");
        printf("1 - Tonelada \n");
        printf("2 - Quilograma \n");
        printf("3 - Hectograma \n");
        printf("4 - Decagrama \n");
        printf("5 - Grama \n");
        printf("6 - Decigrama \n");
        printf("7 - Centigrama \n");
        printf("8 - Miligrama \n");
        printf("Digite aqui sua opção: ");

        scanf("%d", &entrada);
        fflush(stdin);

        printf("\n\n\n\nPara qual unidade de medida deseja converter? \n");
        printf("1 - Tonelada \n");
        printf("2 - Quilograma \n");
        printf("3 - Hectograma \n");
        printf("4 - Decagrama \n");
        printf("5 - Grama \n");
        printf("6 - Decigrama \n");
        printf("7 - Centigrama \n");
        printf("8 - Miligrama \n");
        printf("Digite aqui sua opção: ");

        scanf("%d", &saida);
        fflush(stdin);

        // Tratamento de erros antes realizar as conversões
        if((entrada < 1 || entrada > 8) || (saida < 1 || saida > 8)){
            printf("Algum número digitado está fora do intervalo proposto. \n\n\n");
        }
        else if(entrada == saida){
            printf("Não há nada para converter. \n\n\n");
        }
        else{
            float valor;
            float resultado;
            printf("Digite o valor da massa: ");
            scanf("%f", &valor);
            fflush(stdin);
            switch (saida)
            {
            case 1:
                resultado = tonelada(entrada, valor);
                printf("Resposta: %.4f toneladas\n", resultado);
                break;

            case 2:
                resultado = kilograma(entrada, valor);
                printf("Resposta: %.4f quilogramas\n", resultado);
                break;

            case 3:
                resultado = hectograma(entrada, valor);
                printf("Resposta: %.4f hectogramas\n", resultado);
                break;

            case 4:
                resultado = decagrama(entrada, valor);
                printf("Resposta: %.4f decagramas\n", resultado);
                break;

            case 5:
                resultado = grama(entrada, valor);
                printf("Resposta: %.4f gramas\n", resultado);
                break;

            case 6:
                resultado = decigrama(entrada, valor);
                printf("Resposta: %.4f decigramas\n", resultado);
                break;

            case 7:
                resultado = centigrama(entrada, valor);
                printf("Resposta: %.4f centigramas\n", resultado);
                break;

            case 8:
                resultado = miligrama(entrada, valor);
                printf("Resposta: %.4f miligramas\n", resultado);
                break;

            default:
                printf("\n\nErro! Algum parâmetro está incorreto. \n\n\n");
                break;
            }
        }

        // Define se o usuário permanece no looping
        printf("Gostaria de tentar outra conversão? Digite 1 para sim e 0 para voltar ao menu principal: ");
        scanf("%d", &logout);
        printf("\n\n\n\n\n\n\n\n\n");

    } while (logout == 1);
    

    return 0;
}

// Implementação das funções

float tonelada(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 2:
        resultado = valor / 1000;
        break;

    case 3:
        resultado = valor / 10000;
        break;

    case 4:
        resultado = valor / 100000;
        break;

    case 5:
        resultado = valor / 1000000;
        break;

    case 6:
        resultado = valor / 10000000;
        break;

    case 7:
        resultado = valor / 100000000;
        break;

    case 8:
        resultado = valor / 1000000000;
        break;

    default:
        break;
    }
    return resultado;
}

float kilograma(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 1000;
        break;

    case 3:
        resultado = valor / 10;
        break;

    case 4:
        resultado = valor / 100;
        break;

    case 5:
        resultado = valor / 1000;
        break;

    case 6:
        resultado = valor / 10000;
        break;

    case 7:
        resultado = valor / 100000;
        break;

    case 8:
        resultado = valor / 1000000;
        break;

    default:
        break;
    }
    return resultado;
}

float hectograma(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 10000;
        break;

    case 2:
        resultado = valor * 10;
        break;

    case 4:
        resultado = valor / 10;
        break;

    case 5:
        resultado = valor / 100;
        break;

    case 6:
        resultado = valor / 1000;
        break;

    case 7:
        resultado = valor / 10000;
        break;

    case 8:
        resultado = valor / 100000;
        break;

    default:
        break;
    }
    return resultado;
}

float decagrama(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 100000;
        break;

    case 2:
        resultado = valor * 100;
        break;

    case 3:
        resultado = valor * 10;
        break;

    case 5:
        resultado = valor / 10;
        break;

    case 6:
        resultado = valor / 100;
        break;

    case 7:
        resultado = valor / 1000;
        break;

    case 8:
        resultado = valor / 10000;
        break;

    default:
        break;
    }
    return resultado;
}

float grama(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 1000000;
        break;

    case 2:
        resultado = valor * 1000;
        break;

    case 3:
        resultado = valor * 100;
        break;

    case 4:
        resultado = valor * 10;
        break;

    case 6:
        resultado = valor / 10;
        break;

    case 7:
        resultado = valor / 100;
        break;

    case 8:
        resultado = valor / 1000;
        break;

    default:
        break;
    }
    return resultado;
}

float decigrama(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 10000000;
        break;

    case 2:
        resultado = valor * 10000;
        break;

    case 3:
        resultado = valor * 1000;
        break;

    case 4:
        resultado = valor * 100;
        break;

    case 5:
        resultado = valor * 10;
        break;

    case 7:
        resultado = valor / 10;
        break;

    case 8:
        resultado = valor / 100;
        break;

    default:
        break;
    }
    return resultado;
}

float centigrama(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 100000000;
        break;

    case 2:
        resultado = valor * 100000;
        break;

    case 3:
        resultado = valor * 10000;
        break;

    case 4:
        resultado = valor * 1000;
        break;

    case 5:
        resultado = valor * 100;
        break;

    case 6:
        resultado = valor * 10;
        break;

    case 8:
        resultado = valor / 10;
        break;

    default:
        break;
    }
    return resultado;
}

float miligrama(int entrada, float valor){
    float resultado;
    switch (entrada)
    {
    case 1:
        resultado = valor * 1000000000;
        break;

    case 2:
        resultado = valor * 1000000;
        break;

    case 3:
        resultado = valor * 100000;
        break;

    case 4:
        resultado = valor * 10000;
        break;

    case 5:
        resultado = valor * 1000;
        break;

    case 6:
        resultado = valor * 100;
        break;

    case 7:
        resultado = valor * 10;
        break;

    default:
        break;
    }
    return resultado;
}