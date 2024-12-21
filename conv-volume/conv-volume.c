#include <stdio.h>
#include <locale.h>

void exibirOpcoesGerais();
void exibirOpcoesConversao(int tipo);
void realizarConversao(int tipo, int opcao);
float obterValor(const char* unidade);

void volume() {
    int conversores = 0;

    setlocale(LC_ALL, "Portuguese");
    do {
        exibirOpcoesGerais();
        printf("Escolha uma opção (ou 8 para sair): ");
        scanf("%d", &conversores);
        fflush(stdin);

        if (conversores >= 1 && conversores <= 7) {
            int valor;
            exibirOpcoesConversao(conversores);
            printf("Escolha uma conversao (ou 0 para voltar): ");
            scanf("%d", &valor);
            fflush(stdin);

            if (valor != 0) {
                realizarConversao(conversores, valor);
            }
        } else if (conversores != 8) {
            printf("Numero invalido. Tente novamente.\n");
        }

    } while (conversores != 8);

    printf("Encerrando programa.\n");
}

void exibirOpcoesGerais() {
    printf("\n1-Quilolitro (kL)\n2-Hectolitro (hL)\n3-Decalitro (daL)\n4-Litros (L)");
    printf("\n5-Decilitro (dL)\n6-Centilitro (cL)\n7-Mililitro (mL)\n8-Sair\n");
}

void exibirOpcoesConversao(int tipo) {
    printf("\nOpcoes de conversao:\n");
    switch (tipo) {
        case 1:
            printf("1-qL para hL\n2-qL para daL\n3-qL para L\n4-L para qL\n");
            break;
        case 2:
            printf("1-hL para daL\n2-hL para L\n3-L para hL\n");
            break;
        case 3:
            printf("1-daL para L\n2-L para daL\n");
            break;
        case 4:
            printf("1-L para dL\n2-L para cL\n3-L para mL\n4-mL para L\n");
            break;
        case 5:
            printf("1-dL para cL\n2-dL para mL\n3-mL para dL\n");
            break;
        case 6:
            printf("1-cL para mL\n2-mL para cL\n");
            break;
        case 7:
            printf("1-mL para cL\n2-mL para dL\n3-mL para L\n");
            break;
        default:
            printf("Opcao invalida.\n");
    }
}

void realizarConversao(int tipo, int opcao) {
    float valor, resultado;

    switch (tipo) {
        case 1: // Quilolitro
            valor = obterValor("quilolitro (kL)");
            if (opcao == 1) resultado = valor * 10;  // qL para hL
            else if (opcao == 2) resultado = valor * 100;  // qL para daL
            else if (opcao == 3) resultado = valor * 1000;  // qL para L
            else if (opcao == 4) resultado = valor / 1000;  // L para qL
            else return;
            printf("Resultado: %.4f\n", resultado);
            break;

        case 2: // Hectolitro
            valor = obterValor("hectolitro (hL)");
            if (opcao == 1) resultado = valor * 10;  // hL para daL
            else if (opcao == 2) resultado = valor * 100;  // hL para L
            else if (opcao == 3) resultado = valor / 100;  // L para hL
            else return;
            printf("Resultado: %.4f\n", resultado);
            break;

        case 3: // Decalitro
            valor = obterValor("decalitro (daL)");
            if (opcao == 1) resultado = valor * 10;  // daL para L
            else if (opcao == 2) resultado = valor / 10;  // L para daL
            else return;
            printf("Resultado: %.4f\n", resultado);
            break;

        case 4: // Litro
            valor = obterValor("litro (L)");
            if (opcao == 1) resultado = valor * 10;  // L para dL
            else if (opcao == 2) resultado = valor * 100;  // L para cL
            else if (opcao == 3) resultado = valor * 1000;  // L para mL
            else if (opcao == 4) resultado = valor / 1000;  // mL para L
            else return;
            printf("Resultado: %.4f\n", resultado);
            break;

        // Outros casos podem ser implementados seguindo o mesmo padr�o
        default:
            printf("Conversao invalida.\n");
    }
}

float obterValor(const char* unidade) {
    float valor;
    printf("Digite o valor em %s: ", unidade);
    scanf("%f", &valor);
    fflush(stdin);
    return valor;
}

int indexVolume() {
    volume();
    return 0;
}