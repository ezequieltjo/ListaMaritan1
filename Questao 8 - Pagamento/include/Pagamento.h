#ifndef PAGAMENTO_H
#define PAGAMENTO_H
#include <string>

class Pagamento
{   private:
        std::string nomeDoFuncionario;
        double valorPagamento;


    public:
        Pagamento();
        Pagamento(double valorPagamento, std::string nomeDoFuncionario);
        std::string getNomeDoFuncionario();
        void setNomeDoFuncionario(std::string nomeDoFuncionario);
        double getValorPagamento();
        void setValorPagamento(double valorPagamento);
};

#endif // PAGAMENTO_H
