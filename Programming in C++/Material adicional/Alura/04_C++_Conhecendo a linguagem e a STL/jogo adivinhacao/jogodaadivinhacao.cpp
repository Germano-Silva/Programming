//biblioteca.
#include <iostream>
#include <locale.h>
#include <cstdlib>
#include <ctime>

//informando o sistema sobre a utlização de função padrão. 
using namespace std;

//função principal.
int main(){
    //concertando 
    setlocale(LC_ALL, "Portuguese_Brazil");

    //saida de dados em tela.
    cout << "***************************************"<< endl;
    cout << "* Boas vindas ao Jogo da Adivinhacao! *"<< endl;
    cout << "***************************************"<< endl;
    
    cout << "escolha o seu nivel de dificuldade: " << endl;
    cout << "Facil (f)   Medio (M)  ou Dificil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numerodetentativas;

    if (dificuldade == 'F'){
        numerodetentativas = 15;
    }else if (dificuldade = 'M'){
        numerodetentativas = 10;
    }else{
        numerodetentativas = 5;
    }
    
    
    
    //Criação de variavel.
    //const siginfica uma variavel constante que não é mutavel.
    //Boa pratica em programação variaveis contantes tem que ser tudo com letra maisculas
    //função rand seta um número aleatorio, mas é necessario colocar uma semente de numeros aleatorios
    srand(time(NULL));
    const int NUMEROSECRETO = rand()%100;
    //apresentando a saida de uma variavel.
    //cout << "o numero secreto e " << numerosecreto << ". nao conte a ninguem" << endl;
    //creiação de laço de repetição 

    //criação de variavel binaria acertou
    bool naoacertou = true;
    //criação de variavel para contar o numero de tentativas
    int tentativas = 0;
    //criação de variavel para adicionar os pontos recebido pelo jogador
    //utiliza-se ponto em vez de virgula 
    double pontos = 1000.0;


    // utlização de laço de repetição por validação de verdadeiro ou falso 
    for (tentativas = 1; tentativas <= numerodetentativas; tentativas++)
    {

        //tentativas++;
        cout << "Tentativas " << tentativas << endl;
        //variavel de entrada
        int chute;
        cout <<"Qual o valor do seu chute?"<< endl;
        // recebendo valores de entrada
        cin >> chute;
        //função para decrecentar pontos de acordo com a quantidade de tentativas chutadas 
        //nesta função como a grande maioria é inteiro devomo adicionar um numero com casa a pós a virgula ou alterar o tipo das outras variaveis 
        double pontosperdidos = abs(chute - NUMEROSECRETO) / 2.0;
        pontos = pontos - pontosperdidos;
        cout << "O valor do seu chute e " << chute << endl;

        //variavel com tipo bool correponde a verdadeiro e falso, enviando a resposta binaria de 1 e 0 1 para true e 0 para false 
        bool acertou = chute == NUMEROSECRETO;
        bool maior = chute > NUMEROSECRETO;
        //REFATORAÇÃO PARA DIMINUIÇÃO E LIMPANDO O CODIGO 
        if(acertou){
            cout << "Parabens! Voce acertou o numero secreto" << endl;
            naoacertou = false;
            //finalizando o laço de repetição
            break;
        }else if (maior){
            cout << "Seu chute foi maior que o numero secreto!" << endl;
        }else{
            cout << "Seu numero foi menor que o numero secreto!" << endl;
        }
        //validação 
        /**Refatorado 
        if(chute == numerosecreto){
            cout << "Parabens! Voce acertou o numero secreto" << endl;
        }else if (chute > numerosecreto)
        {
            cout << "Seu chute foi maior que o numero secreto!" << endl;
        }else{
            cout << "Seu numero foi menor que o numero secreto!" << endl;
        }
        */
    }
    
    cout << "Fim de jogo!" << endl;
    if (naoacertou)
    {
        cout << "Voce perdeu! Tente novamente" << endl;
    }else{
        cout << "Voce acertou em " << tentativas << " tentativas." << endl;
        //adicionando casas a pos a virgula de forma cientifica
        cout.precision(2);
        //marcador para adicionar a variavel a precisão de quantas casas decimais devem aparecer depois da virgula 
        cout << fixed;
        cout << "Sua pontuacao foi de " << pontos << " pontos." << endl;
        
    }
    
}
