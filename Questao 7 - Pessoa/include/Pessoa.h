#ifndef PESSOA_H
#define PESSOA_H
#include <string>


class Pessoa
{
    private:
        std::string nome;
        int idade;
        std::string tel;

    public:

        Pessoa(std::string nome);
        Pessoa(std::string nome, int idade, std::string tel);

        std::string getNome();
        void setNome(std::string nome);

        int getIdade();
        void setIdade(int idade);

        std::string getTel();
        void setTel(std::string tel);


};

#endif // PESSOA_H
