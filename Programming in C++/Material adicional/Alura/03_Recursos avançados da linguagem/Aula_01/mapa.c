#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mapa.h"

void copiamapa(MAPA* destino, MAPA* origem) {
    destino->linhas = origem->linhas;
    destino->colunas = origem->colunas;
    alocamapa(destino);
    for(int i = 0; i < origem->linhas; i++) {
        strcpy(destino->matriz[i], origem->matriz[i]);
    }
}

void encontramapa(MAPA* m, POSICAO* p, char c){
    /* Encontrando a posição do jogador no mapa. */
    for (int i = 0; i <m->linhas; i++)
    {
        for (int j = 0; j < m->colunas; i++)
        {
            if (m->matriz[i][j] == c)
            {
                p->x = i;
                p->y = j;
                break;
            }
        }
        
    }
}

int ehvalida(MAPA* m, int x, int y) {
    if(x >= m->linhas) 
        return 0;
    if(y >= m->colunas) 
        return 0;

    return 1;    
}

int ehVazia(MAPA* m, int x, int y) {
    return m->matriz[x][y] == '.';
}

void andanomapa(MAPA* m, int xorigem, int yorigem, 
    int xdestino, int ydestino) {

    char personagem = m->matriz[xorigem][yorigem];
    m->matriz[xdestino][ydestino] = personagem;
    m->matriz[xorigem][yorigem] = '.';

}
    /**
     * Ele lê um arquivo e o armazena em um array 2D
     */
    void lemapa(MAPA *m)
{
	FILE* f;
	f = fopen("mapa.txt", "r");
	if(f == 0) 
    {
		printf("Erro na leitura do mapa");
		exit(1);
	}

	fscanf(f, "%d %d", &(m->linhas), &(m->colunas));
	alocamapa(m);
	
	for(int i = 0; i < 5; i++)
    {
		fscanf(f, "%s", m->matriz[i]);
	}

	fclose(f);
}

/**
 * Aloca memória para uma matriz 2D de caracteres
 */
void alocamapa(MAPA* m) 
{
	m->matriz = malloc(sizeof(char*) * (m->linhas));

	for(int i = 0; i < m->linhas; i++) {
		m->matriz[i] = malloc(sizeof(char) * (m->colunas + 1));
	}
}

/**
 * Libera a memória alocada para o mapa
 */
void liberamapa(MAPA* m)
{
	for(int i = 0; i < m->linhas; i++)
    {
		free(m->matriz[i]);
	}

	free(m->matriz);
}

/**
 * Imprime o mapa
 */
void imprimemapa(MAPA* m)
{
    for(int i = 0; i < m->linhas; i++)
    {
		printf("%s\n", m->matriz[i]);
	}
}