# Trabalho-final-PDS2

 O trabalho é um jogo tower defense que tem como estrutura primordial o simulador que armazena entidades, tais como torres, inimigos e estruturas.

## Como Compilar

Para compilar o programa utilizamos a biblicoteca do CMAKE, Utilize o comando sudo apt-get install cmake para instalar
    -Crie um diretório de build mkdir build dentro da pasta Trabalho-final-PDS2;
    -Acesse o diretório criado cd build;
    -Execute o comando cmake ..;
    -Compile o projeto usando o makefile gerado make;
    -Execute o programa criado jogo usando "./jogo".


## Mais informações

Defense PDS 2 é um jogo de defesa onde o jogador deve escolher a dificuldade, o mapa e alocar torres em colunas específicas para proteger seu território contra hordas de inimigos.

Ao iniciar o jogo, você será solicitado a escolher a dificuldade digitando o número correspondente: [1] Fácil, [2] Médio, [3] Difícil, para encerrar o programa digite [0] para sair. Após escolher a dificuldade, selecione o mapa digitando o número correspondente: [1] Floresta do Crepúsculo, [2] Cemitério Tenebroso, [3] Deserto Misterioso,  para encerrar o programa digite [0] para sair

Com o mapa escolhido, o layout será exibido, mostrando as colunas disponíveis para alocar suas torres, indicadas com um "⭕". As torres devem sempre alocadads em colunas ímpares. O Layout do mapa irá variar de acordo com a dificuldade escolhida. Para alocar as torres nas colunas disponíveis (1, 3, 5), basta digitar tais números correspondentes no terminal. Após alocar as torres, o jogo continuará com a defesa contra as ondas de inimigos, de acordo com a lógica implementada no código.

Divirta-se jogando Defense PDS 2!

