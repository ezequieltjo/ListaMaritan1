#include "Pessoa.h"
#include <string>

Pessoa::Pessoa(std::string nome)
{
    this->nome = nome;
    this->idade = 0;
    this->tel = "";
}

Pessoa::Pessoa(std::string nome, int idade, std::string tel)
{
    this->nome = nome;
    this->idade = idade;
    this->tel = tel;
}

std::string Pessoa::getNome(){

    return nome;
}

void Pessoa::setNome(std::string n){

    nome = n;
}

int Pessoa::getIdade(){

    return idade;
}

void Pessoa::setIdade(int i){

    idade = i;
}

std::string Pessoa::getTel(){

    return tel;
}

void Pessoa::setTel(std::string t){

    tel = t;
}
