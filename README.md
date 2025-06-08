# TP2 - Verificação de Estado do Jogo da Velha (C++ com TDD)

Este projeto implementa a função `verifica_jogo_da_velha`, que analisa o estado de um tabuleiro 3x3 do jogo da velha e determina o resultado da partida.

Desenvolvido com **TDD (Desenvolvimento Orientado a Testes)**, utilizando a biblioteca Catch2 para testes automatizados.

## 🧠 Objetivo

A função deve retornar:
- `1`  → vitória do jogador **X**
- `2`  → vitória do jogador **O**
- `0`  → empate
- `-1` → jogo ainda em andamento
- `-2` → situação impossível (número de jogadas inválido ou dois vencedores)

## 🛠️ Ferramentas utilizadas

- C++
- Catch2 (testes)
- Makefile
- Docker (ambiente)
- Valgrind (verificação de memória)
- `gcov` (cobertura de testes)
- `cpplint`, `cppcheck` (verificadores de estilo e análise estática)
- Doxygen (documentação automática)

## 📁 Estrutura do projeto

```
232024572_anna/
├── catch.hpp
├── jogo/
│   └── velha.hpp
├── Makefile
├── leiame.txt
├── valgrind.rpt
├── .git/
└── README.md
```

## ⚙️ Compilação e execução

```bash
make
./testa_romanos
```

> A saída indicará se os testes passaram.

## 🧪 Executar Valgrind

Para verificar vazamentos de memória:

```bash
valgrind ./testa_romanos
```

## 🧼 Estilo e análise estática

```bash
cpplint *.cpp *.hpp
cppcheck .
```

## 🧾 Gerar documentação

Certifique-se de que o Doxygen está instalado:

```bash
brew install doxygen  # se estiver no macOS
```

Depois:

```bash
make doc
```

A documentação será gerada na pasta `docs/html/index.html`.

## 📋 Observações

- O projeto foi desenvolvido de acordo com a metodologia TDD.
- O código está documentado com Doxygen.
- Cobertura de testes mínima de 80% foi garantida com `gcov`.

---

### 👩‍💻 Autora

Anna Luiza Jansen  
Engenharia de Computação – UnB  
