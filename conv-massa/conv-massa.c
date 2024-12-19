#include <stdio.h>
#include <stdlib.h>

// Declara��o das fun��es
float tonelada(int entrada, float valor);
float kilograma(int entrada, float valor);
float hectograma(int entrada, float valor);
float decagrama(int entrada, float valor);
float grama(int entrada, float valor);
float decigrama(int entrada, float valor);
float centigrama(int entrada, float valor);
float miligrama(int entrada, float valor);

int main(){
     
    // Resolve as quest�es do acento
    system("chcp 65001 > null");

    // Variaveis de controle do tipo de covers�o
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
        printf("Digite aqui sua op��o: ");

        scanf("%d", &entrada);

        printf("\n\n\n\nPara qual unidade de medida deseja converter? \n");
        printf("1 - Tonelada \n");
        printf("2 - Quilograma \n");
        printf("3 - Hectograma \n");
        printf("4 - Decagrama \n");
        printf("5 - Grama \n");
        printf("6 - Decigrama \n");
        printf("7 - Centigrama \n");
        printf("8 - Miligrama \n");
        printf("Digite aqui sua op��o: ");

        scanf("%d", &saida);

        // Tratamento de erros antes realizar as convers�es
        if((entrada < 1 || entrada > 8) || (saida < 1 || saida > 8)){
            printf("Algum n�mero digitado est� fora do intervalo proposto. Tente novamente.");
        }
        else if(entrada == saida){
            printf("\n\nN�o h� nada para converter.\n\n\n");
        }
        else{
            float valor;
            float resultado;
            printf("Digite o valor da massa: ");
            scanf("%f", &valor);
            switch (saida)
            {
            case 1:
                resultado = tonelada(entrada, valor);
                printf("Resposta: %.4f toneladas", resultado);
                break;

            case 2:
                resultado = kilograma(entrada, valor);
                printf("Resposta: %.4f kilogramas", resultado);
                break;

            case 3:
                resultado = hectograma(entrada, valor);
                printf("Resposta: %.4f hectogramas", resultado);
                break;

            case 4:
                resultado = decagrama(entrada, valor);
                printf("Resposta: %.4f decagramas", resultado);
                break;

            case 5:
                resultado = grama(entrada, valor);
                printf("Resposta: %.4f gramas", resultado);
                break;

            case 6:
                resultado = decigrama(entrada, valor);
                printf("Resposta: %.4f decigramas", resultado);
                break;

            case 7:
                resultado = centigrama(entrada, valor);
                printf("Resposta: %.4f centigramas", resultado);
                break;

            case 8:
                resultado = miligrama(entrada, valor);
                printf("Resposta: %.4f miligramas", resultado);
                break;

            default:
                printf("\n\nErro! Algum parametro est� incorreto. \n\n\n");
                break;
            }
        }

        // Define se o usu�rio permanece no looping
        printf("Gostaria de tentar outra convers�o? Digite 1 para sim e 0 para voltar ao menu principal: ");
        scanf("%d", &logout);
        printf("\n\n\n\n\n\n\n\n\n");

    } while (logout == 1);
    

    return 0;
}

// Implementa��o das fun��es

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