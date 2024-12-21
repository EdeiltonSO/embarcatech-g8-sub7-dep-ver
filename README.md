# Atividade de Depuração e Versionamento

## 🔵 O que é este projeto?

Este é um software para converter unidades de medida utilizado para praticar depuração e versionamento de projetos em C.

## 🔵 Quais recursos estão disponíveis?

### Menu principal

O arquivo `index.c` implementa um menu no qual o usuário pode escolher entre diferentes conversores de unidade de medida. Depois de escolhida uma opção, o menu chama a função responsável pela conversão desejada por meio de módulos separados através de cabeçalhos. Após a execução, o software volta para o menu principal e continua executando até que o usuário escolha encerrar.

Implementado por [Edeilton Oliveira](https://www.linkedin.com/in/edeiltonso/).

### Conversor de unidades de comprimento

...

Implementado por...

### Conversor de unidades de armazenamento da computação

...

Implementado por...

### Conversor de unidades de tempo

...

Implementado por...

### Conversor de unidades de velocidade

O arquivo `conv-vel.c`, implementa um conversor de velocidade em linguagem C. Ele permite converter valores entre três diferentes unidades de medida de velocidade:

- Metros por Segundo (m/s)
- Quilômetros por Hora (km/h)
- Milhas por Hora (mph)

A aplicação é interativa, solicitando ao usuário as unidades de entrada e saída, bem como o valor que deseja converter. Tem como funcionalidades a seleção da unidade de entrada, seleção da unidade de saída, além do cálculo de conversão, baseado nas constantes de conversão pré-definidas e claro a exibição do resultado exibindo o valor convertido, formatado com duas casas decimais.

Implementado por [Valnei Sousa](https://www.linkedin.com/in/valnei-sousa-45a831286/)

## 🔵 Como executar o programa?

Na raiz do projeto, execute uma das sequências de comandos:

### Com o GCC
1. `gcc .\index.c .\conv-comp\conv-comp.c .\conv-tempo\conv-tempo.c .\conv-vel\conv-vel.c .\converter-bits-bytes\converter-bits-bytes.c`
2. `./a`

### Com o Makefile do MinGW
1. `mingw32-make`
2. `./conversor.exe`

Você também pode modificar o nome do executável gerado ao utilizar o GCC diretamente.
Para isso, adicione a flag `-o conversor` no final do primeiro comando.