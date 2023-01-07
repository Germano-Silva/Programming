#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "fogefoge.h"
#include "mapa.h"

MAPA m;
POSICAO heroi;
int tempilula = 0;

/**
 * Retorna verdadeiro se o jogador ganhou ou perdeu
 *
 * @return o valor da variável "ganhou" ou "perdeu".
 */
int acabou() {
	POSICAO pos;

	int perdeu = !encontramapa(&m, &pos, HEROI);
	int ganhou = !encontramapa(&m, &pos, FANTASMA);

	return ganhou || perdeu;
		
}

/**
 * Retorna verdadeiro se o caractere passado para ele for uma das quatro direções
 *
 * @param direcao A direção que a cobra está tomando.
 *
 * @return um valor booleano.
 */
int ehdirecao(char direcao) {
	return
		direcao == ESQUERDA || 
		direcao == CIMA ||
		direcao == BAIXO ||
		direcao == DIREITA;
}

/**
 * Move o herói na direção especificada pelo parâmetro
 *
 * @param direcao a direção que o jogador quer seguir
 *
 * @return o valor da variável "direcao"
 */
void move(char direcao) {

	if(!ehdirecao(direcao))	
		return;

	int proximox = heroi.x;
	int proximoy = heroi.y;

	switch(direcao) {
		case ESQUERDA:
			proximoy--;
			break;
		case CIMA:
			proximox--;
			break;
		case BAIXO:
			proximox++;
			break;
		case DIREITA:
			proximoy++;
			break;
	}

	if(!podeandar(&m, HEROI, proximox, proximoy))
		return;
    if(ehpersonagem(&m, PILULA, proximox, proximoy)) {
        tempilula = 1;
    }

	andanomapa(&m, heroi.x, heroi.y, proximox, proximoy);
	heroi.x = proximox;
	heroi.y = proximoy;
}

/**
 * Ele tenta encontrar uma direção aleatória para a qual se mover e, se não encontrar, retorna 0
 *
 * @param xatual A posição x atual do fantasma
 * @param yatual a coordenada y do fantasma
 * @param xdestino x coordenada do destino
 * @param ydestino y destino
 *
 * @return um inteiro.
 */
int praondefantasmavai(int xatual, int yatual, 
	int* xdestino, int* ydestino) {

	int opcoes[4][2] = { 
		{ xatual   , yatual+1 }, 
		{ xatual+1 , yatual   },  
		{ xatual   , yatual-1 }, 
		{ xatual-1 , yatual   }
	};

	srand(time(0));
	for(int i = 0; i < 10; i++) {
		int posicao = rand() % 4;

		if(podeandar(&m, FANTASMA, opcoes[posicao][0], opcoes[posicao][1])) {
			*xdestino = opcoes[posicao][0];
			*ydestino = opcoes[posicao][1];
			return 1;
		}
	}

	return 0;
}

/**
 * Move os fantasmas pelo mapa
 */
void fantasmas() {
	MAPA copia;

	copiamapa(&copia, &m);

	for(int i = 0; i < copia.linhas; i++) {
		for(int j = 0; j < copia.colunas; j++) {
			if(copia.matriz[i][j] == FANTASMA) {

				int xdestino;
				int ydestino;

				int encontrou = praondefantasmavai(i, j, &xdestino, &ydestino);

				if(encontrou) {
					andanomapa(&m, i, j, xdestino, ydestino);
				}
			}
		}
	}

	liberamapa(&copia);
}

/**
  * Explode a pílula nas quatro direções
  */
void explodepilula() {
    explodepilula2(heroi.x, heroi.y, 0, 1, 3);
    explodepilula2(heroi.x, heroi.y, 0, -1, 3);
    explodepilula2(heroi.x, heroi.y, 1, 0, 3);
    explodepilula2(heroi.x, heroi.y, -1, 0, 3);
}


/**
  * Explode uma pílula em uma determinada direção, e o faz recursivamente
  *
  * @param x x coordenada da pílula
  * @param y a coordenada y da pílula
  * @param somax a direção x da explosão
  * @param somay -1, 0, 1
  * @param qtd o número de espaços que a explosão irá
  *
  * @return o número de pílulas que foram destruídas.
  */
void explodepilula2(int x, int y, int somax, int somay, int qtd) {

    if(qtd == 0) return;

    int novox = x+somax;
    int novoy = y+somay;

    if(!ehvalida(&m, novox, novoy)) return;
    if(ehparede(&m, novox, novoy)) return;

    m.matriz[novox][novoy] = VAZIO;
    explodepilula2(novox, novoy, somax, somay, qtd-1);
}

/**
 * Ele lê um mapa de um arquivo, imprime e então move o herói pelo mapa
 */
int main() {
	
	lemapa(&m);
	encontramapa(&m, &heroi, HEROI);

    
    do {
        printf("Pílula: %s\n", (tempilula ? "SIM" : "NÃO"));
        imprimemapa(&m);

        char comando;
        scanf(" %c", &comando);

        if(ehdirecao(comando)) move(comando);
        if(comando == BOMBA) explodepilula(heroi.x, heroi.y, 3);

        fantasmas();

    } while (!acabou());
	

	liberamapa(&m);
}