#include <iostream>
#include <string>
#include <map>
#include <vector>


using namespace std;
//const string PALAVRA_SECRETA
string palavrasecreta = "MELANCIA";
//dicionario mapea chaves para valores 
map <char, bool> chutou;
//vetor parecido com um array mas sem precisar informar o tamanho do vetor
vector<char> chuteserrados;


bool letraexiste(char chute){
    /*refatorado para o codigo abaixo conforme c++ 11
    for (int i = 0; i < palavrasecreta.size(); i++)
    {
        if (chute == palavrasecreta[i])
        {
            return true;
        }
    }*/
    for(char letra : palavrasecreta){
        if(chute == letra){
            return true;
        }
        return false;
    }
}

bool naoacertou(){
    for(char letra : palavrasecreta){
        if(!chutou[letra]){
            return true;
        }    
    }
    return false;
}

bool naoenforcou(){
    return chuteserrados.size() < 6;
}

void imprime_cabecalho(){
    cout << "**************************************" << endl;
    cout << "*    Bem-vindos ao jogo da Forca!    *" << endl;
    cout << "**************************************" << endl;
    cout << endl;
}

void imprime_erros(){
    cout << "Chutes errados: ";
    for (char letra : chuteserrados)
    {
        cout << letra << " ";
    }
    cout << endl;
}

void imprime_palavra(){
        for (char letra : palavrasecreta)
        {
            if(chutou[letra]){
                cout << letra << " ";
            }
            else{
                cout << "_ ";
            }
        }
        cout << endl;
}

void chuta(){
        cout<< "Qual seu chute? " << endl;
        char chute;
        cin >> chute;
        chutou[chute] = true;

        if(letraexiste(chute))
        {
            cout << "voce acertou! Seu chute esta na palavra." << endl;

        }else
        {
            cout << "Voce errou! Seu chute nao esta na palavra." << endl;
            chuteserrados.push_back(chute);
        }
        cout << endl;
}

int main(){
    imprime_cabecalho();
    while (naoacertou() && naoenforcou())
    {
        imprime_erros();
        imprime_palavra();
        chuta();
    }

    cout << "Fim de jogo " << endl;
    cout << "A palavra secreta era: " << palavrasecreta << endl;
    if(naoacertou()){
        cout << "Voce perdeu! Tente novamente!" << endl;
    }else{
        cout << "Parabens!! voce acertou a palavra secreta! " << endl;

    }
}