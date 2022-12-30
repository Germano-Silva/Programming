#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    //todo: Cabecalho do jogo
    printf("\n******************************************************\n");
    printf("          ____                                        \n");
    printf("         /___/\\_                Bem vindo             \n");
    printf("        _\\   \\/_/\\__               ao                 \n");
    printf("      __\\       \\/_/\\       jogo da adivinhacao       \n");
    printf("      \\   __    __ \\ \\                                \n");
    printf("     __\\  \\_\\   \\_\\ \\ \\   __                          \n");
    printf("    /_/\\   __   __  \\ \\_/_/\\                         \n");
    printf("    \\_\\/_\\__\\/\\__\\/\\__\\/_\\_\\/                         \n");
    printf("       \\_\\/_/\\       /_\\_\\/                           \n");
    printf("          \\_\\/       \\_\\/                             \n");
    printf("\n******************************************************\n");

    //todo: Função para numeros aleatorios.
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();

    // todo: Variaveis.
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    //todo: verificação de nivel. 
    int nivel;
    int numerodetentativas;
    printf("\n       Qual o nivel de dificuldade    \n");
    printf("\n       (1) Facil (2) Medio (3) Dificil\n");
    printf("\n       Escolha: ");
    scanf("%d", &nivel);
    printf("\n******************************************************\n");

    switch (nivel) {
        case 1:
            numerodetentativas = 20;
            break;
        case 2:
            numerodetentativas = 15;
            break;
        default: 
            numerodetentativas = 6;
            break;
        }

    // todo: função responsavel pelas regras do jogo de acordo com o nivel.
    // laço de repetição que verifica o nivel de dificuldade adicionando a quantidade de tentativas.
    for (int i = 1; i <= numerodetentativas; i++){

        printf("\n       Tentativa %d\n", tentativas);
        printf("\n       Qual e o seu chute? ");

        scanf("%d", &chute);
        printf("\n       Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("\n       Voce nao pode chutar numeros negativos!\n");
            printf("\n******************************************************\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        //Função de validação se o chute é igual ao numero aleatorio 
        if (acertou){
            break;
        }else if (maior){
            printf("\n       Seu chute foi maior que o numero secreto\n");
            printf("\n******************************************************\n");
        }else{
            printf("\n       Seu chute foi menor que o numero secreto\n");
            printf("\n******************************************************\n");
        }

        tentativas++;

        //função para verificação dos pontos de acordo com a quantidades de tentativas.
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    

    //Função de validação de a pessoa acertou ou ganhou para finalização do jogo
    if(acertou) {
        printf("\n       Voce acertou em %d tentativas!\n", tentativas);
        printf("\n       Voce ganhou!\n");
        printf("\n       Total de pontos: %.1f\n", pontos);
        printf("\n       Fim de jogo!\n");
    } else {
        printf("\n       Voce perdeu! Tente de novo!\n");
        printf("\n       Fim de jogo!\n");
    }


}