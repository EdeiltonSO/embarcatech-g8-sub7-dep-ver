# Atividade de Depuração e Versionamento

## 💡 O que é este projeto?

Este é um software para converter unidades de medida utilizado para praticar depuração e versionamento de projetos em C.

## 🔎 Quais recursos estão disponíveis?

### Menu principal

O arquivo `index.c` implementa um menu no qual o usuário pode escolher entre diferentes conversores de unidade de medida. Depois de escolhida uma opção, o menu chama a função responsável pela conversão desejada por meio de módulos separados através de cabeçalhos. Após a execução, o software volta para o menu principal e continua executando até que o usuário escolha encerrar.

Implementado por [Edeilton Oliveira](https://www.linkedin.com/in/edeiltonso/).

### Conversor de unidades de comprimento

O conversor de unidades de comprimento é uma funcionalidade que permite o usuário converter 3 diferentes tipos de medidas, sendo elas: metro, centímetro e milímetro. A utilização da funcionalidade se dá a partir de quatro passos simples:

1. Selecionar a opção "conversor de comprimento" no menu principal;
2. Selecionar o tipo de conversão(metros, centímetros ou milímetros);
3. Fornecer o valor da medida que será convertida;
4. Apresentação da conversão.

Implementado por [Rogerio Silva Palafoz Junior - Kuroikenshiga](https://github.com/Kuroikenshiga).

### Conversor de unidades de armazenamento da computação

O conversor de unidades de armazenamento de dados permite a conversão de bits para outras unidades de medida comumente usadas na computação, como bytes, kilobytes (KB), megabytes (MB) e gigabytes (GB). Nela, o usuário insere um valor em bits e o programa realiza as seguintes conversões:

- **Bits para bytes** (1 byte = 8 bits);
- **Bytes para kilobytes** (1 KB = 1024 bytes);
- **Kilobytes para megabytes** (1 MB = 1024 KB);
- **Megabytes para gigabytes** (1 GB = 1024 MB).

Implementado por [Edemir Carvalho](https://github.com/demyshow).

### Conversor de unidades de tempo

O conversor de tempo permite que você converta as unidades de tempo mais utilizadas: segundos, minutos e horas.

É possível converter:

- Segundos para minutos;
- Segundos para horas;
- Minutos para segundos;
- Minutos para horas;
- Horas para segundos;
- Horas para minutos.

Cada conversão possui uma precisão de 5 casas decimais.

Implementado por [Gustavo Oliveira Alves](https://github.com/Astorolus-11).

### Conversor de unidades de velocidade

O arquivo `conv-vel.c`, implementa um conversor de velocidade em linguagem C. Ele permite converter valores entre três diferentes unidades de medida de velocidade:

- Metros por Segundo (m/s);
- Quilômetros por Hora (km/h);
- Milhas por Hora (mph).

A aplicação é interativa, solicitando ao usuário as unidades de entrada e saída, bem como o valor que deseja converter. Tem como funcionalidades a seleção da unidade de entrada, seleção da unidade de saída, além do cálculo de conversão, baseado nas constantes de conversão pré-definidas e claro a exibição do resultado exibindo o valor convertido, formatado com duas casas decimais.

Implementado por [Valnei Sousa](https://www.linkedin.com/in/valnei-sousa-45a831286/).

### Conversor de unidades de massa

O arquivo `conv-massa.c` implementa um menu no qual o usuário pode realizar conversões de unidades de medidas de massa. Ao escolher uma unidade de medida de entrada e de saída o usuário terá printado na tela o valor convertido na unidade de medida selecionada. Após realizar a conversão o usuário pode decidir se deseja permanecer convertendo outros valores ou se deseja voltar ao menu principal.

Implementado por [Cibelle Sousa Rodrigues](https://github.com/CibelleSousa).

### Conversor de unidades de volume

O conversor de unidades de volume realiza conversões entre diferentes unidades de medida volumétrica:

- Quilolitros (kL);
- Hectolitros (hL);
- Decalitros (daL);
- Litros (L);
- Decilitros (dL);
- Centilitros (cL);
- Mililitros (mL).

A aplicação utiliza constantes pré-definidas e exibe instruções durante todo o processo, incluindo possíveis mensagens de erro.

Implementado por [Joabis Jr](https://github.com/Joabis25).

## 🛠 Quais são os pré-requisitos?

1. Se você estiver no Windows, instale o [MinGW](https://sourceforge.net/projects/mingw/) (GCC e Make);
2. Baixe o repositório com `git clone`.

No Linux, GCC e Make normalmente já estão disponíveis de forma nativa.

## 💻 Como executar o programa no Windows?

Acesse a pasta raiz do projeto clonado e execute uma das sequências de comandos:

### Com o GCC
1. `gcc .\index.c .\conv-comp\conv-comp.c .\conv-tempo\conv-tempo.c .\conv-vel\conv-vel.c .\conv-dados\conv-dados.c .\conv-massa\conv-massa.c .\conv-volume\conv-volume.c -o conversor`
2. `./conversor.exe`

### Com o Makefile
1. `mingw32-make`
2. `./conversor.exe`

## 🐧 Como executar o programa no Linux?

Acesse a pasta raiz do projeto clonado e execute uma das sequências de comandos:

### Com o GCC
1. `gcc ./index.c ./conv-comp/conv-comp.c ./conv-tempo/conv-tempo.c ./conv-vel/conv-vel.c ./conv-dados/conv-dados.c ./conv-massa/conv-massa.c ./conv-volume/conv-volume.c -o conversor`
2. `./conversor`

### Com o Makefile
1. `make`
2. `./conversor`

Você também pode modificar o nome do executável gerado no Windows ou no Linux ao utilizar o GCC diretamente. Para isso, modifique a flag `-o conversor` no final do comando 1 com GCC.