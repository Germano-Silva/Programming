#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "forca.h"

char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;


/**
 * Retorna 1 se a letra existe na palavra secreta, caso contrario retorna 0
 *
 * @param letra A letra que o usuario digitou.
 *
 * @return o valor da variavel j.
 */
int letraexiste(char letra) {

    for(int j = 0; j < strlen(palavrasecreta); j++) {
        if(letra == palavrasecreta[j]) {
            return 1;
        }
    }

    return 0;
}

/**
 * Conta o numero de palpites errados
 *
 * @return O numero de palpites errados.
 */
int chuteserrados() {
    int erros = 0;

    for(int i = 0; i < chutesdados; i++) {

        if(!letraexiste(chutes[i])) {
            erros++;
        }
    }

    return erros;
}

/**
 * Se o numero de palpites errados for maior ou igual a 5, o jogador perdeu o jogo.
 *
 * @return o nuamero de falhas.
 */
int enforcou() {
    return chuteserrados() >= 5;
}

/**
 * Retorna 1 se o jogador adivinhou todas as letras da palavra secreta e 0 caso contrario
 *
 * @return o valor da variavel "i"
 */
int ganhou() {
    for(int i = 0; i < strlen(palavrasecreta); i++) {
        if(!jachutou(palavrasecreta[i])) {
            return 0;
        }
    }

    return 1;
}


/**
 * Imprime o titulo do jogo
 */
void abertura() {
    printf("\n\n\n/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

/**
 * Pede uma letra ao usuario, verifica se a letra existe na palavra e, caso exista, imprime uma
 * mensagem dizendo que o usuario acertou, e se nao acertar, imprime uma mensagem dizendo que errou.
 */
void chuta() {
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);

    if(letraexiste(chute)) {
        printf("Voce acertou: a palavra tem a letra %c\n\n", chute);
    } else {
        printf("\nVoce errou: a palavra NaO tem a letra %c\n\n", chute);
    }

    chutes[chutesdados] = chute;
    chutesdados++;
}

/**
 * Verifica se a letra ja foi adivinhada
 *
 * @param letra A letra que o usuario digitou
 *
 * @return o valor da variavel encontrado.
 */
int jachutou(char letra) {
    int achou = 0;
    for(int j = 0; j < chutesdados; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

/**
 * Funçao criada para validar erros
 * de acordo com a quantidade de erros adiciona um caracter.
 */
void desenhaforca() {

    int erros = chuteserrados();

    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'\\':' '), (erros>=2?'|':' '), (erros>=3?'/': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    for(int i = 0; i < strlen(palavrasecreta); i++) {

        if(jachutou(palavrasecreta[i])) {
            printf("%c ", palavrasecreta[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");

}

/**
 * Le um arquivo com uma lista de palavras, escolhe uma aleatoriamente e a armazena em uma variavel global
 */
void escolhepalavra() {
    FILE* f;

    f = fopen("palavras.txt", "r");
    if(f == 0) {
        printf("Banco de dados de palavras nao disponivel\n\n");
        exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);

    srand(time(0));
    int randomico = rand() % qtddepalavras;

    for(int i = 0; i <= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f);
}


/**
 * e uma funçao que adiciona uma nova palavra ao jogo.
 */
void adicionapalavra() {
    char quer;

    printf("Voce deseja adicionar uma nova palavra no jogo (S/N)?");
    scanf(" %c", &quer);

    /* e uma funçao que adiciona uma nova palavra ao jogo. */
    if(quer == 'S') {
        char novapalavra[TAMANHO_PALAVRA];

        printf("Digite a nova palavra, em letras maiusculas: ");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+");
        /* Verifica se o arquivo esta aberto. Se nao estiver, imprime uma mensagem e sai do programa. */
        if(f == 0) {
            printf("Banco de dados de palavras nao disponivel\n\n");
            exit(1);
        }

        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qtd);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novapalavra);

        fclose(f);

    }

}

/**
 * e um jogo da forca
 */
int main() {

    abertura();
    escolhepalavra();

    do {

        desenhaforca();
        chuta();

    } while (!ganhou() && !enforcou());

    if(ganhou()) {
        printf("/*******************************************/\n");
        printf("             A palavra era **%s**            \n\n", palavrasecreta);
        printf("             Parabens, voce ganhou!          \n");
        printf("/*******************************************/\n");
        printf("                  ___________                \n");
        printf("                 '._==_==_=_.'               \n");
        printf("                 .-\\:      /-.              \n");
        printf("                | (|:.     |) |              \n");
        printf("                 '-|:.     |-'               \n");
        printf("                   \\::.    /                \n");
        printf("                    '::. .'                  \n");
        printf("                      ) (                    \n");
        printf("                    _.' '._                  \n");
        printf("                   '-------'                 \n");
        printf("/*******************************************/\n");

    } else {
        printf("/*******************************************/\n");
        printf("          A palavra era **%s**               \n\n", palavrasecreta);
        printf("/*******************************************/\n");
        printf("          Puxa, voce foi enforcado!          \n");
        printf("/*******************************************/\n");
        printf("                                             \n");
        printf("                _______________              \n");
        printf("               /               \\            \n");
        printf("              /                 \\           \n");
        printf("            //                   \\/\\       \n");
        printf("            \\|   XXXX     XXXX   | /        \n");
        printf("             |   XXXX     XXXX   |/          \n");
        printf("             |   XXX       XXX   |           \n");
        printf("             |                   |           \n");
        printf("             \\__      XXX      __/          \n");
        printf("               |\\     XXX     /|            \n");
        printf("               | |           | |             \n");
        printf("               | I I I I I I I |             \n");
        printf("               |  I I I I I I  |             \n");
        printf("               \\_             _/            \n");
        printf("                 \\_         _/              \n");
        printf("                   \\_______/                \n");
        printf("                                             \n");
        printf("/*******************************************/\n");
    }

    adicionapalavra();
}