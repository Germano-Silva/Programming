#include <stdio.h>
#include <string.h>

/**
 * Variaveis globais
 */
char palavrasecreta[20];
char chutes[26];
int tentativas = 0;

/**
 * Imprime o título do jogo
 */
void abertura() {
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

/**
 * Solicita uma carta ao usuário e a armazena nos chutes do array
 */
void chuta() {
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);

    chutes[tentativas] = chute;
    tentativas++;
}

/**
 * Verifica se a letra já foi adivinhada
 *
 * @param letra a letra que o usuário digitou
 *
 * @return o valor da variável encontrado.
 */
int jachutou(char letra) {
    int achou = 0;
    for(int j = 0; j < tentativas; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }

    return achou;
}

/**
 * Imprime a palavra com as letras adivinhadas e as letras não adivinhadas
 */
void desenhaforca() {

    printf("Você já deu %d chutes\n", tentativas);

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
 * Adiciona a palavra secreta para o array palavrasecreta.
 */
void escolhepalavra() {
    sprintf(palavrasecreta, "MELANCIA");
}

/**
 * A função abertura() imprime o título do jogo e o nome do autor.
 */
int main() {

    int acertou = 0;
    int enforcou = 0;

    abertura();
    escolhepalavra();

    do 
    {

        desenhaforca();
        chuta();

    } while (!acertou && !enforcou);

    }

    /*
    
    No link abaixo, você encontra o projeto até o momento atual do curso.
    https://github.com/alura-cursos/C-II-Avan-ando-na-linguagem/archive/fff18af8aeb62ccc137c438ad77094542ecedb12.zip

    */