// Copyright 2025 <Anna Luiza Jansen>

#define CATCH_CONFIG_MAIN
#include "lib/catch.hpp"
#include "jogo/velha.hpp"

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
        {1, 1, 2},
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
        {1, 1, 0}
    };

    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitoria na terceira linha para O") {
    int tabuleiro[3][3] = {
        {1, 0, 1},
        {0, 1, 0},
        {2, 2, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitoria na terceira linha para X") {
    int tabuleiro[3][3] = {
        {2, 0, 2},
        {0, 2, 0},
        {1, 1, 1}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na primeira coluna para X") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {1, 2, 0},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na primeira coluna para O") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {2, 1, 0},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitória na segunda coluna para X") {
    int tabuleiro[3][3] = {
        {0, 1, 2},
        {0, 1, 0},
        {2, 1, 0}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na segunda coluna para O") {
    int tabuleiro[3][3] = {
        {1, 2, 1},
        {0, 2, 1},
        {1, 2, 0}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitória na terceira coluna para X") {
    int tabuleiro[3][3] = {
        {0, 2, 1},
        {0, 0, 1},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na terceira coluna para O") {
    int tabuleiro[3][3] = {
        {1, 1, 2},
        {0, 1, 2},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitória na diagonal principal para X") {
    int tabuleiro[3][3] = {
        {1, 0, 2},
        {0, 1, 0},
        {2, 0, 1}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na diagonal principal para O") {
    int tabuleiro[3][3] = {
        {2, 0, 1},
        {0, 2, 1},
        {1, 0, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Vitória na diagonal secundária para X") {
    int tabuleiro[3][3] = {
        {0, 0, 1},
        {2, 1, 0},
        {1, 2, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 1);
}

TEST_CASE("Vitória na diagonal secundária para O") {
    int tabuleiro[3][3] = {
        {0, 0, 2},
        {1, 2, 0},
        {2, 1, 1}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 2);
}

TEST_CASE("Empate") {
    int tabuleiro[3][3] = {
        {1, 2, 1},
        {1, 1, 2},
        {2, 1, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == 0);
}

TEST_CASE("Jogo impossível - TODO O") {
    int tabuleiro[3][3] = {
        {2, 2, 2},
        {2, 2, 2},
        {2, 2, 2}
    };
    REQUIRE(verifica_jogo_da_velha(tabuleiro) == -2);
}
