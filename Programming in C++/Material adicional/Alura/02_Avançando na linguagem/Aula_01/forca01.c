#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "forca.h"

char palavrasecreta[TAMANHO_PALAVRA];
char chutes[26];
int chutesdados = 0;


/**
 * Retorna 1 se a letra existe na palavra secreta, caso contrário retorna 0
 *
 * @param letra A letra que o usuário digitou.
 *
 * @return o valor da variável j.
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
 * Conta o número de palpites errados
 *
 * @return O número de palpites errados.
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
 * Se o número de palpites errados for maior ou igual a 5, o jogador perdeu o jogo.
 *
 * @return o número de falhas.
 */
int enforcou() {
    return chuteserrados() >= 5;
}

/**
 * Retorna 1 se o jogador adivinhou todas as letras da palavra secreta e 0 caso contrário
 *
 * @return o valor da variável "i"
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
 * Imprime o título do jogo
 */
void abertura() {
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

/**
 * Pede uma letra ao usuário, verifica se a letra existe na palavra e, caso exista, imprime uma
 * mensagem dizendo que o usuário acertou, e se não acertar, imprime uma mensagem dizendo que errou.
 */
void chuta() {
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);

    if(letraexiste(chute)) {
        printf("Você acertou: a palavra tem a letra %c\n\n", chute);
    } else {
        printf("\nVocê errou: a palavra NÃO tem a letra %c\n\n", chute);
    }

    chutes[chutesdados] = chute;
    chutesdados++;
}

/**
 * Verifica se a letra já foi adivinhada
 *
 * @param letra A letra que o usuário digitou
 *
 * @return o valor da variável encontrado.
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
 * Função criada para validar erros
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
 * Lê um arquivo com uma lista de palavras, escolhe uma aleatoriamente e a armazena em uma variável global
 */
void escolhepalavra() {
    FILE* f;

    f = fopen("palavras.txt", "r");
    if(f == 0) {
        printf("Banco de dados de palavras não disponível\n\n");
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
 * É uma função que adiciona uma nova palavra ao jogo.
 */
void adicionapalavra() {
    char quer;

    printf("Você deseja adicionar uma nova palavra no jogo (S/N)?");
    scanf(" %c", &quer);

    /* É uma função que adiciona uma nova palavra ao jogo. */
    if(quer == 'S') {
        char novapalavra[TAMANHO_PALAVRA];

        printf("Digite a nova palavra, em letras maiúsculas: ");
        scanf("%s", novapalavra);

        FILE* f;

        f = fopen("palavras.txt", "r+");
        /* Verifica se o arquivo está aberto. Se não estiver, imprime uma mensagem e sai do programa. */
        if(f == 0) {
            printf("Banco de dados de palavras não disponível\n\n");
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
 * É um jogo da forca
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