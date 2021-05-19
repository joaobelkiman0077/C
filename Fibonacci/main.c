#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidadeDeElementos = 0;
    printf("Digite o numero de elementos da sequencia: ");
    scanf("%d", &quantidadeDeElementos);
    int numeroAtual = 1;
    printf("Sequencia gerada: \n");
    printf("%d  ", numeroAtual);
    int numeroAnterior = 0;
    int i = 0;
    int temporario = 0;//para poder fazer a rotaçao de valores, no caso para atualizar/corrigir o valor do int numero atual
    for(i = 1 ; i < quantidadeDeElementos; i++){
        temporario = numeroAtual;//aqui no caso, ja que estamos mudando essa parte para que o valor do numero atual mude para criar uma sequencia
        numeroAtual = numeroAtual + numeroAnterior;
        numeroAnterior = temporario;
        printf("%d  ", numeroAtual);
    }
    return 0;
}
