#include <stdio.h>

int main() {
    int opcaoini, opcaofim;
    float vms, vmphs, vkmhs;
    const mstomph = 2.2369; // Constante de Conversão de Metros por Segundo Para Milhas Por Hora
    const kmhtoms = 3.6; // Constante de Conversão de Metros por Segundo para Quilômetros por Hora
    const kmhtomph = 0.621371; // Constante de Quilômetros por Hora para Milhas por Hora
    printf("Bem vindo ao Conversor de velocidade\n");
    printf("Escolha a primeira unidade para Conversão:\n");
    printf("1 - Metros por Segundo/n 2 - Quilômetros por Hora\n 3 - Milhas por Hora/n");
    scanf("%d", opcaoini);
    printf("Escolha a segunda unidade para Conversão:\n");
    printf("1 - Metros por Segundo/n 2 - Quilômetros por Hora\n 3 - Milhas por Hora/n");
    scanf("%d", opcaofim);
    
    if (opcaoini == 1)
    {
        // Caso a unidade seja Metros por Segundo
        printf("Informe o Valor para Conversão em Metros por Segundo (Informe apenas os Números/n)");
        scanf("%f", vms);    
    }
    
    if (opcaoini == 2)
    {
        // Caso a unidade seja Quilômetros por Hora
        printf("Informe o Valor para Conversão em Quilômetros por Hora (Informe apenas os Números/n)");
        scanf("%f", vkmhs);
    }
    
    if (opcaoini == 3)
    {
        // Caso a unidade seja Milhas por Hora
        printf("Informe o Valor para Conversão em Milhas por Hora (Informe apenas os Números/n)");
        scanf("%f", vmphs);
    }

    
    if (opcaofim == 1)
    {
        // Caso a unidade seja Metros por Segundo
        printf("Informe o Valor para Conversão em Metros por Segundo (Informe apenas os Números/n)");
        scanf("%f", vms);
    }
    
    if (opcaofim == 2)
    {
        // Caso a unidade seja Quilômetros por Hora
        printf("Informe o Valor para Conversão em Quilômetros por Hora (Informe apenas os Números/n)");
        scanf("%f", vkmhs);
    }
    
    if (opcaofim == 3)
    {
        // Caso a unidade seja Milhas por Hora
        printf("Informe o Valor para Conversão em Milhas por Hora (Informe apenas os Números/n)");
        scanf("%f", vmphs);
    }

    if (opcaoini == 1 && opcaofim == 1)
    {

    }
    
    if (opcaoini == 1 && opcaofim == 2)
    {
        
    }
    
    if (opcaoini == 1 && opcaofim == 3)
    {
        
    }
    
    if (opcaoini == 2 && opcaofim == 1)
    {
        
    }
    
    if (opcaoini == 2 && opcaofim == 2)
    {
        
    }
    
    if (opcaoini == 2 && opcaofim == 3)
    {
        
    }

    if (opcaoini == 3 && opcaofim == 1)
    {
        
    }

    if (opcaoini == 3 && opcaofim == 2)
    {
        
    }

    if (opcaoini == 3 && opcaofim == 3)
    {
        
    }
    return 0;
}

