#include <stdio.h>
#include <stdlib.h>

int main () {
    int linhas = 5;
    int colunas = 10;
    int** matriz;
    // alocando espaço para as linhas,
    // que guardam ponteiro de inteiro.
    matriz = malloc(sizeof(int*) * linhas);

    // agora, para cada linha, alocamos
    for(int i = 0; i < linhas; i++) {
        matriz[i] = malloc(sizeof(int) * (colunas+1));
    }
    
}