#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "forca.h"
/**
 * Variaveis globais
 */
char palavrasecreta[20];
char chutes[26];
int chutesdados = 0;

/**
 * Imprime o título do jogo
 */
void abertura() 
{
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

/**
 * Solicita uma carta ao usuário e a armazena nos chutes do array
 */
void chuta() 
{
    char chute;
    printf("Qual letra? ");
    scanf(" %c", &chute);

    chutes[chutesdados] = chute;
    chutesdados++;
}

/**
 * Verifica se a letra já foi adivinhada
 *
 * @param letra a letra que o usuário digitou
 *
 * @return o valor da variável encontrado.
 */
int jachutou(char letra) 
{
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
 * Imprime a palavra com as letras adivinhadas e as letras não adivinhadas
 */
void desenhaforca() 
{

    printf("Você já deu %d chutes\n", chutesdados);

    for(int i = 0; i < strlen(palavrasecreta); i++) {

        if(jachutou(palavrasecreta[i])) {
            printf("%c ", palavrasecreta[i]);
        } else {
            printf("_ ");
        }

    }
    printf("\n");

}

void escolhepalavras()
{
    FILE *f;
    f = fopen("palavras.txt", "r");

    if(f == 0)
    {
        printf("Desculpe banco de dados não disponivel\n\n");
        exit(1);
    }

    int qtddepalavras;
    fscanf(f, "%d", &qtddepalavras);
    srand(time(0));
    int randomico = rand() % qtddepalavras;
    
    for (int i = 0; i <= randomico; i++)
    {
        fscanf(f, "%s", palavrasecreta);
    }
        fclose(f);
}

/**
 * Verifica se o jogador adivinhou todas as letras da palavra secreta
 *
 * @return o valor da variável i.
 */
int acertou()
{
    for(int i = 0; i < strlen(palavrasecreta); i++) 
    {
        if (!jachutou(palavrasecreta[i]))
        {
            return 0;
        }
        
    }
    return 1;
}

/**
 * Verifica se o jogador perdeu o jogo
 *
 * @return o valor da variável errors.
 */
int enforcou()
{
    int erros = 0;
    for (int i = 0; i < chutesdados; i++) 
    {
        int existe = 0;
        for(int j = 0; j <strlen(palavrasecreta); j++)
        {
            if (chutes[i] == palavrasecreta[j])
            {
                existe = 1;
                break;
            }
            
        }
        if(!existe) erros++;
    }
    return erros>=5;
}

/**
 * Adiciona a palavra secreta para o array palavrasecreta.
 */
void escolhepalavra() 
{
    sprintf(palavrasecreta, "MELANCIA");
}

/**
 * A função abertura() imprime o título do jogo e o nome do autor.
 */
int main() 
{
    abertura();
    escolhepalavra();

    do 
    {

        desenhaforca();
        chuta();

    } while (!acertou() && !enforcou());

}

    /*
    
    No link abaixo, você encontra o projeto até o momento atual do curso.
    https://github.com/alura-cursos/C-II-Avan-ando-na-linguagem/archive/fff18af8aeb62ccc137c438ad77094542ecedb12.zip

    */