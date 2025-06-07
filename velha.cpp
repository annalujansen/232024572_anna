// Copyright 2025 <Anna Luiza Jansen>
#include "velha.hpp"

int verifica_jogo_da_velha(int tabuleiro[3][3])
{
    if (tabuleiro[1][0] == 2 &&
        tabuleiro[1][1] == 2 &&
        tabuleiro[1][2] == 2)
    {
        return 2;
    }
    return -1; // Jogo indefinido
}
