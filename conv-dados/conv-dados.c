#include <stdio.h>
#include <stdlib.h> 

#include "conv-dados.h"

// Função que realiza as conversões de bits para outras unidades
void converterBitsBytes() {
    double bits, bytes, kilobytes, megabytes, gigabytes;

    // Solicita ao usuário o valor em bits
    printf("Digite o valor em bits: ");
    scanf("%lf", &bits);
    fflush(stdin);

    // Conversões: de bits para bytes, kilobytes, megabytes e gigabytes
    bytes = bits / 8; // 1 byte = 8 bits
    kilobytes = bytes / 1024; // 1 kilobyte = 1024 bytes
    megabytes = kilobytes / 1024; // 1 megabyte = 1024 kilobytes
    gigabytes = megabytes / 1024; // 1 gigabyte = 1024 megabytes

    // Exibe os resultados das conversões
    printf("Conversões:\n");
    printf("Bytes: %.2lf\n", bytes);
    printf("Kilobytes (KB): %.10lf\n", kilobytes);
    printf("Megabytes (MB): %.10lf\n", megabytes);
    printf("Gigabytes (GB): %.10lf\n", gigabytes);
}

int indexDados() {
    // Define a codificação para UTF-8, garantindo suporte a caracteres especiais
    system("chcp 65001 > nul"); 

    // Exibe o cabeçalho do programa
    printf("Conversor de Bits e Bytes\n\n");

    // Chama a função de conversão
    converterBitsBytes();

    system("pause");
    
    return 0; // Indica que o programa terminou com sucesso
}
