//biblioteca.
#include <iostream>

//informando o sistema sobre a utlização de função padrão. 
using namespace std;

//função principal.
int main(){
    //saida de dados em tela.
    cout << "***************************************"<< endl;
    cout << "* Boas vindas ao Jogo da Adivinhacao! *"<< endl;
    cout << "***************************************"<< endl;
    

    //Criação de variavel.
    //const siginfica uma variavel constante que não é mutavel.
    //Boa pratica em programação variaveis contantes tem que ser tudo com letra maisculas
    const int NUMEROSECRETO = 42;
    //apresentando a saida de uma variavel.
    //cout << "o numero secreto e " << numerosecreto << ". nao conte a ninguem" << endl;
    //creiação de laço de repetição 

    //criação de variavel binaria acertou
    bool naoacertou = true;
    //criação de variavel para contar o numero de tentativas
    int tentativas = 0;

    // utlização de loop por validação de verdadeiro ou falso 
    while (naoacertou)
    {
        tentativas++;
        cout << "Tentativas " << tentativas << endl;
        //variavel de entrada
        int chute;
        cout <<"Qual o valor do seu chute?"<< endl;
        // recebendo valores de entrada
        cin >> chute;
        cout << "O valor do seu chute e " << chute << endl;

        //variavel com tipo bool correponde a verdadeiro e falso, enviando a resposta binaria de 1 e 0 1 para true e 0 para false 
        bool acertou = chute == NUMEROSECRETO;
        bool maior = chute > NUMEROSECRETO;
        //REFATORAÇÃO PARA DIMINUIÇÃO E LIMPANDO O CODIGO 
        if(acertou){
            cout << "Parabens! Voce acertou o numero secreto" << endl;
            naoacertou = false;
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
    cout << "Voce acertou em " << tentativas << " tentativas." << endl;

}
