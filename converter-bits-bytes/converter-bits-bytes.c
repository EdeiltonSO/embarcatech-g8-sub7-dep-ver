#include <stdio.h>
#include <stdlib.h> 

void converterBitsBytes() {
    double bits, bytes, kilobytes, megabytes, gigabytes;

    printf("Digite o valor em bits: ");
    scanf("%lf", &bits);

    bytes = bits / 8;
    kilobytes = bytes / 1024;
    megabytes = kilobytes / 1024;
    gigabytes = megabytes / 1024;

    printf("Conversões:\n");
    printf("Bytes: %.2lf\n", bytes);
    printf("Kilobytes (KB): %.2lf\n", kilobytes);
    printf("Megabytes (MB): %.2lf\n", megabytes);
    printf("Gigabytes (GB): %.2lf\n", gigabytes);
}

int main() {
    system("chcp 65001 > nul"); 
    printf("Conversor de Bits e Bytes\n\n");
    converterBitsBytes();
    return 0;
}
