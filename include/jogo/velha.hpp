// Copyright 2025 <Anna Luiza Jansen>
#ifndef INCLUDE_JOGO_VELHA_HPP_
#define INCLUDE_JOGO_VELHA_HPP_

/**
 * @brief Verifica o estado atual do jogo da velha.
 *
 * Esta função analisa um tabuleiro 3x3 e determina:
 * - Se houve um vencedor (X ou O),
 * - Se houve empate,
 * - Se o jogo ainda está em andamento,
 * - Ou se a configuração do tabuleiro é impossível.
 *
 * @param tabuleiro Matriz 3x3 representando o estado do jogo:
 *  - 0: posição vazia,
 *  - 1: jogador X,
 *  - 2: jogador O
 *
 * @return int
 *  - 1: vitória do jogador X  
 *  - 2: vitória do jogador O  
 *  - 0: empate  
 *  - -1: jogo indefinido (em andamento)  
 *  - -2: jogo impossível (mais jogadas de O do que X ou dois vencedores)
 */

int verifica_jogo_da_velha(int tabuleiro[3][3]);
int verifica_jogo_da_velha(int tabuleiro[3][3]);

#endif  // INCLUDE_JOGO_VELHA_HPP_
