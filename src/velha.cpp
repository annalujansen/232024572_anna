// Copyright 2025 <Anna Luiza Jansen>
#include "jogo/velha.hpp"

int verifica_jogo_da_velha(int tabuleiro[3][3]) {
    int countX = 0, countO = 0;
    int vitoriaX = 0, vitoriaO = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 1)
                countX++;
            else if (tabuleiro[i][j] == 2)
                countO++;
        }
    }

    // Verifica se o número de jogadas é inválido
    if (countO > countX || countX > countO + 1) {
        return -2;  // jogo impossível
    }

    // Verifica vitórias em linhas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] &&
            tabuleiro[i][1] == tabuleiro[i][2] &&
            tabuleiro[i][0] != 0) {
            if (tabuleiro[i][0] == 1) vitoriaX++;
            else vitoriaO++;
        }
    }

    // Verifica vitórias em colunas
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] &&
            tabuleiro[1][i] == tabuleiro[2][i] &&
            tabuleiro[0][i] != 0) {
            if (tabuleiro[0][i] == 1) vitoriaX++;
            else vitoriaO++;
        }
    }

    // Verifica vitória na diagonal principal
    if (tabuleiro[0][0] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][2] &&
        tabuleiro[0][0] != 0) {
        if (tabuleiro[0][0] == 1) vitoriaX++;
        else vitoriaO++;
    }

    // Verifica vitória na diagonal secundária
    if (tabuleiro[0][2] == tabuleiro[1][1] &&
        tabuleiro[1][1] == tabuleiro[2][0] &&
        tabuleiro[0][2] != 0) {
        if (tabuleiro[0][2] == 1) vitoriaX++;
        else vitoriaO++;
    }

    // Detecta situação impossível: dois vencedores
    if (vitoriaX > 0 && vitoriaO > 0) {
        return -2;
    }

    if (vitoriaX > 0) return 1;
    if (vitoriaO > 0) return 2;

    // Verifica empate
    bool cheio = true;
    for (int i = 0; i < 3 && cheio; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i][j] == 0) {
                cheio = false;
                break;
            }
        }
    }

    if (cheio) {
        return 0;  // empate
    }

    return -1;  // jogo indefinido
}
