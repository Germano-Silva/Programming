#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;
//const string PALAVRA_SECRETA
string palavrasecreta;
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

vector<string> learquivo(){
        ifstream arquivo;
        arquivo.open("palavras.txt");

        if (arquivo.open())
        {
            int quantidadepalavras;
            arquivo >> quantidadepalavras;

            cout<< "O arquivo possui "<< quantidadepalavras<<endl;
            vector<string> palavrasdoarquivo;
            for (int i = 0; i < quantidadepalavras; i++)
            {
                string palavraslida;
                arquivo >> palavraslida;
                cout << "na linha " << i << " : " << palavraslida << endl;
                palavrasdoarquivo.push_back(palavraslida);
            }
            arquivo.close();
            return palavrasdoarquivo;
        }else{
            cout << "Não foi possivel acessar o banco de palavras." << endl;
            exit(0);
        }
        

        
}

void sorteiapalavra(){

            vector<string> palavras = learquivo();

            srand(time(NULL));
            int indicesorteado = rand()%palavras.size();
            palavrasecreta = palavras[indicesorteado];

}

void salvararquivo(vector<string> novalista){
            ofstream arquivo;
            arquivo.open("palavras.txt");
            if(arquivo.is_open()){
                arquivo << novalista.size() << endl;
                for(string palavra : novalista){
                arquivo << palavra << endl;
                }
                arquivo.close();
            }else{
                cout << "Não foi possivel acessar o banco de palavras." << endl;
                exit(0);
            }
}

void adicionapalavra(){
            cout << "Digite a nova palavra, usando letras menuscula." << endl;
            string novapalavra;
            cin >> novapalavra;
            vector<string> listapalavras = learquivo();
            listapalavras.push_back(novapalavra);

            salvararquivo(listapalavras);
}

int main(){
    imprime_cabecalho();
    learquivo();
    sorteiapalavra();
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
        cout<<"Voce deseja adicionar uma nova palavra ao banco? (s/n) " << endl;
        char resposta;
        cin >> resposta;
        if (resposta = 's')
        {
                adicionapalavra();
        }
        
    }
}