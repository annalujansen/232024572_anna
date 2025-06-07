// Copyright 2025 <Anna Luiza Jansen>
#ifndef INCLUDE_JOGO_VELHA_HPP_
#define INCLUDE_JOGO_VELHA_HPP_

/**
 * @brief Verifica o estado de uma partida de jogo da velha.
 * 
 * @param tabuleiro Matriz 3x3 de inteiros representando o jogo:
 *                  0 → vazio, 1 → X, 2 → O
 * @return int Código de status:
 *         1 → X venceu  
 *         2 → O venceu  
 *         0 → Empate  
 *        -1 → Jogo indefinido  
 *        -2 → Jogo impossível
 */
int verifica_jogo_da_velha(int tabuleiro[3][3]);

#endif  // INCLUDE_JOGO_VELHA_HPP_
