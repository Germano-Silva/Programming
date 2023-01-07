#include <stdio.h>
#include <stdlib.h>
#include "mapa.h"
#include <string.h>

/**
 * Lê um arquivo e o armazena em uma matriz
 *
 * @param m ponteiro para uma estrutura MAPA
 */
void lemapa(MAPA* m) {
	FILE* f;
	f = fopen("mapa.txt", "r");
	if(f == 0) {
		printf("Erro na leitura do mapa");
		exit(1);
	}

	fscanf(f, "%d %d", &(m->linhas), &(m->colunas));
	alocamapa(m);
	
	for(int i = 0; i < m->linhas; i++) {
		fscanf(f, "%s", m->matriz[i]);
	}

	fclose(f);
}

/**
 * Aloca memória para um array 2D de caracteres
 *
 * @param m ponteiro para uma estrutura MAPA
 */
void alocamapa(MAPA* m) {
	m->matriz = malloc(sizeof(char*) * m->linhas);

	for(int i = 0; i < m->linhas; i++) {
		m->matriz[i] = malloc(sizeof(char) * m->colunas + 1);
	}
}

/**
 * Copia o conteúdo de um mapa para outro
 *
 * @param destino o mapa que será copiado para
 * @param origem O mapa que será copiado.
 */
void copiamapa(MAPA* destino, MAPA* origem) {
	destino->linhas = origem->linhas;
	destino->colunas = origem->colunas;
	alocamapa(destino);
	for(int i = 0; i < origem->linhas; i++) {
		strcpy(destino->matriz[i], origem->matriz[i]);
	}
}


/**
 * Libera a memória alocada para a matriz
 *
 * @param m ponteiro para o mapa
 */
void liberamapa(MAPA* m) {
	for(int i = 0; i < m->linhas; i++) {
		free(m->matriz[i]);
	}

	free(m->matriz);
}

/**
 * Imprime o mapa
 *
 * @param m ponteiro para o mapa
 */
void imprimemapa(MAPA* m) {
	for(int i = 0; i < m->linhas; i++) {
		printf("%s\n", m->matriz[i]);
	}
}

/**
 * Busca um caractere em uma matriz e retorna a posição do caractere na matriz
 *
 * @param m o mapa
 * @param p é um ponteiro para uma estrutura POSICAO
 * @param c O caractere a ser encontrado
 *
 * @return a posição do caractere na matriz.
 */
int encontramapa(MAPA* m, POSICAO* p, char c) {

	for(int i = 0; i < m->linhas; i++) {
		for(int j = 0; j < m->colunas; j++) {
			if(m->matriz[i][j] == c) {
				p->x = i;
				p->y = j;
				return 1;
			}
		}
	}
	return 0;
}

/**
 * Retorna verdadeiro se a posição dada for válida, não uma parede, e não ocupada pelo personagem dado
 *
 * @param m o mapa
 * @param personagem O personagem que representa o jogador.
 * @param x a coordenada x do personagem
 * @param y a coordenada y do caractere
 */
int podeandar(MAPA* m, char personagem, int x, int y) {
	return 
		ehvalida(m, x, y) && 
		!ehparede(m, x, y) &&
		!ehpersonagem(m, personagem, x, y);
}

/**
 * Verifica se as coordenadas são válidas
 *
 * @param m o mapa
 * @param x a coordenada x da posição
 * @param y a coordenada y do ladrilho
 *
 * @return o valor da variável "m"
 */
int ehvalida(MAPA* m, int x, int y) {
	if(x >= m->linhas) 
		return 0;
	if(y >= m->colunas) 
		return 0;

	return 1;	
}

/**
 * Se o caractere nas coordenadas fornecidas for o caractere fornecido, retorne true, caso contrário, retorne
 * falso.
 *
 * @param m O mapa
 * @param personagem O caractere que será verificado.
 * @param x a coordenada x do personagem
 * @param y a coordenada y do caractere
 *
 * @return o valor da expressão.
 */
int ehpersonagem(MAPA* m, char personagem, int x, int y) {
	return
		m->matriz[x][y] == personagem;
}

/**
 * Retorna verdadeiro se a posição dada for uma parede
 *
 * @param m O mapa
 * @param x A coordenada x do bloco que você deseja verificar.
 * @param y A coordenada y do ladrilho a ser verificada.
 *
 * @return um valor booleano.
 */
int ehparede(MAPA* m, int x, int y) {
	return 
		m->matriz[x][y] == PAREDE_VERTICAL ||
		m->matriz[x][y] == PAREDE_HORIZONTAL;
}


/**
 * Move um personagem de uma posição para outra
 *
 * @param m ponteiro para o mapa
 * @param xorigem x coordenada do personagem
 * @param yorigem a coordenada y do personagem
 * @param xdestino x coordenada do destino
 * @param ydestino y destino
 */
void andanomapa(MAPA* m, int xorigem, int yorigem, 
	int xdestino, int ydestino) {

	char personagem = m->matriz[xorigem][yorigem];
	m->matriz[xdestino][ydestino] = personagem;
	m->matriz[xorigem][yorigem] = VAZIO;

}
