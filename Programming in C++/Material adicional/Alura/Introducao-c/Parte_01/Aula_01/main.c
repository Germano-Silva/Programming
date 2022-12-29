#include <stdio.h>

//Diretiva 
//#define TENTATIVA 5

int main()
{
    //imprime o cabeçalho do jogo
    printf("\n------------------------------------------\n");
    printf("\n- Bem vindo ao nosso jogo de adivinhacao -\n");
    printf("\n------------------------------------------\n");
    //variavel declarada e iniciada 
    int numerosecreto = 42;
    int chute;
    int tentativa = 1;
    while(1){
        //for (int i = 1; i <= TENTATIVA; i++){
        //printf("Tentativas %d de %d\n", i, TENTATIVA)
        printf("Tentativas %d\n", tentativa+1);
        printf("\n Qual e o seu chute? \n");
        scanf("%d", &chute);
        if (chute < 0)
        {
            printf("Voce nao pode chutar numeros negativos");
            continue;
            }
            
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
            }else{
                printf(" Voce errou!\n");
                printf(" Tente novamente! \n");
            }
            tentativa++;
    }

    printf("\n Fim de jogo! \n");
    printf("\n Voce acertou em %d tentativas \n", tentativa);
}