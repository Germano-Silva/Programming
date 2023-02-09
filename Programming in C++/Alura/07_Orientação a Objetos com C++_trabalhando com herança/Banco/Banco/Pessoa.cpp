#include "Pessoa.hpp"
#include <iostream>

Pessoa::Pessoa(Cpf cpf, std::string nome): cpf(cpf), nome(nome)
{
    std::cout << "Constutor de Pessoa" << std::endl;
    verificaTamanhoDoNome();
}

void Pessoa::verificaTamanhoDoNome()
{
    if (nome.size() < 5) {
        std::cout << "Nome muito curto" << std::endl;
        exit(1);
    }
}

/** Sem destrutor
    Pessoa::~Pessoa()
    {

    }
*/

