// Copyright 2025 <Anna Luiza Jansen>
#include "velha.hpp"

int verifica_jogo_da_velha(int tabuleiro[3][3])
{
    for (int i=0; i<3; i++) {
        if ((tabuleiro[1][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[1][2]) && tabuleiro[1][0] != 0) {
            return tabuleiro[1][0]; // Vitória na segunda linha
        }
    }
    return -1; // Jogo indefinido
}
