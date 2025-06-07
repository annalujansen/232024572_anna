// Copyright 2025 <Anna Luiza Jansen>
#include "jogo/velha.hpp"

int verifica_jogo_da_velha(int tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        if ((tabuleiro[1][0] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[1][2]) && tabuleiro[1][0] != 0)
            { return tabuleiro[1][0]; }  // Vitória na segunda linha
        if ((tabuleiro[0][0] == tabuleiro[0][1] &&
            tabuleiro[0][1] == tabuleiro[0][2]) && tabuleiro[0][0] != 0)
            { return tabuleiro[0][0]; }  // Vitória na primeira linha
        if ((tabuleiro[2][0] == tabuleiro[2][1] &&
            tabuleiro[2][1] == tabuleiro[2][2]) && tabuleiro[2][0] != 0)
            { return tabuleiro[2][0]; }  // Vitória na terceira linha
        if ((tabuleiro[0][0] == tabuleiro[1][0] &&
            tabuleiro[1][0] == tabuleiro[2][0]) && tabuleiro[0][0] != 0)
            { return tabuleiro[0][0]; }  // Vitória na primeira coluna
        if ((tabuleiro[0][1] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[2][1]) && tabuleiro[0][1] != 0)
            { return tabuleiro[0][1]; }  // Vitória na segunda coluna
        if ((tabuleiro[0][2] == tabuleiro[1][2] &&
            tabuleiro[1][2] == tabuleiro[2][2]) && tabuleiro[0][2] != 0)
            { return tabuleiro[0][2]; }  // Vitória na terceira coluna
        if ((tabuleiro[0][0] == tabuleiro[1][1] &&
            tabuleiro[1][1] == tabuleiro[2][2]) && tabuleiro[0][0] != 0)
            { return tabuleiro[0][0]; }  // Vitória na diagonal principal
    }
    return -1;  // Jogo indefinido
}
