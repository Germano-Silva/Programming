#include <stdio.h>

int main()
{

    printf("\n------------------------------------------\n");
    printf("\n- Bem vindo ao nosso jogo de adivinhacao -\n");
    printf("\n------------------------------------------\n");

    int numerosecreto = 28;
    int chute;
    int tentativa;

    while(1){
        printf("\n Tentativas %d\n", ++tentativa);
        printf("\n Qual e o seu chute? \n");
        scanf("  %d", &chute);
        printf("\n Seu chute foi %d \n", chute);

        if (numerosecreto == chute){
            printf(" Parabens! Voce acertou!");
            printf(" Jogue de novo voce e um bom jogador!\n");
            break;
        }else if (chute>numerosecreto){
            printf(" Seu chute e maior que o numero secreto\n");
            printf(" Tente novamente! \n");
        }else if (chute<numerosecreto){
            printf(" Seu numero e menor que o numero secreto\n");
            printf(" Tente novamente!\n");
        }else if(chute<0){
            printf("\nVoce nao pode chutar numeros negativos");
            continue;
        }
        }

    printf("\n Fim de jogo! \n");
    printf("\n Voce acertou em %d tentativas \n", tentativa);
}


/* Resposta professor 

#include <stdio.h>

int main() {

    // imprime cabecalho do nosso jogo
    printf("******************************************\n");
    printf("* Bem vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;
    int tentativas = 1;

    while(1) {

        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break;
        }

        else if(maior) {
            printf("Seu chute foi maior que o número secreto\n");
        } 

        else {
            printf("Seu chute foi menor que o número secreto\n");
        }

        tentativas++;
    }

    printf("Fim de jogo!\n");
    printf("Você acertou em %d tentativas!", tentativas);
}
*/