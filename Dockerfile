FROM ubuntu:22.04

# Instala pacotes do sistema
RUN apt-get update && apt-get install -y \
    build-essential \
    valgrind \
    g++ \
    git \
    make \
    cppcheck \
    wget \
    doxygen \
    python3 \
    python3-pip

# Instala o cpplint com pip
RUN pip3 install cpplint

# Define o diretório de trabalho
WORKDIR /Projetos/TP2/trabalho2/232024572_anna

# Mantém o contêiner aberto em terminal interativo
CMD ["/bin/bash"]