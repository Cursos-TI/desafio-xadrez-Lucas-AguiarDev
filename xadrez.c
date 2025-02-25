#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int Rainha = 0;
    int Torre;
    int Bispo = 0;

    // Implementação de Movimentação do Bispo

    while (Bispo < 5)
    {
        printf("Bispo para Cima + Direita\n");
        Bispo ++;
    }
    

    // Implementação de Movimentação da Torre

    for (Torre = 0; Torre < 5; Torre++) //torre movimenta até valor ser igual a 5
    {
        printf("Torre para Direita\n"); //indica o sentido da movimentacao da peca
    }

    // Implementação de Movimentação da Rainha

    do
    {
        printf("Rainha para Esquerda\n");

        Rainha ++;

    } while (Rainha < 8);
    

   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
