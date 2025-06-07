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
