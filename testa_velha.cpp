// Copyright 2025 <Anna Luiza Jansen>

#define CATCH_CONFIG_MAIN
#include "lib/catch.hpp"
#include "velha.hpp"

TEST_CASE("Jogo indefinido com apenas um X", "[indefinido]") {
    int tabuleiro[3][3] = {
        {1, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == -1);
}

TEST_CASE("Vitória na segunda linha para o jogador 2") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {2, 2, 2},
        {1, 0, 1}
    };

    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitória na segunda linha para o jogador 1") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {1, 1, 1},
        {2, 0, 2}
    };

    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na primeira linha para X") {
    int tabuleiro[3][3] = {
        {1, 1, 1},
        {2, 0, 2},
        {0, 0, 0}
    };

    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na primeira linha para O") {
    int tabuleiro[3][3] = {
        {2, 2, 2},
        {1, 0, 1},
        {0, 0, 0}
    };

    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}
