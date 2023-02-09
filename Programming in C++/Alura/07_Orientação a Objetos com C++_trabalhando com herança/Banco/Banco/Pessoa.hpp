#pragma once
#include <string>
#include "Cpf.hpp"

class Pessoa{
    protected:
        std::string nome;
        Cpf cpf;
        void verificaTamanhoDoNome();
        
    public:
        Pessoa(Cpf cpf, std::string nome);
        

        //~Pessoa(); sem destrutor
};