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

...

Implementado por...

## 🔵 Como executar o programa?

Na raiz do projeto, execute uma das sequências de comandos:

### Com o GCC
1. `gcc .\index.c .\conv-comp\conv-comp.c .\conv-tempo\conv-tempo.c .\conv-vel\conv-vel.c .\converter-bits-bytes\converter-bits-bytes.c .\conv-massa\conv-massa.c`
2. `./a`

### Com o Makefile
1. `mingw32-make` (Windows) ou `make` (Linux/MacOS)
2. `./conversor.exe`

Você também pode modificar o nome do executável gerado ao utilizar o GCC diretamente.
Para isso, adicione a flag `-o conversor` no final do primeiro comando.