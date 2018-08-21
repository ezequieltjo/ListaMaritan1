#include "Pagamento.h"
#include <string>

Pagamento::Pagamento()
{
}

Pagamento::Pagamento(double valorPagamento, std::string nomeDoFuncionario)
{   this->nomeDoFuncionario = nomeDoFuncionario;
    this->valorPagamento = valorPagamento;
}

    std::string Pagamento::getNomeDoFuncionario(){
        return nomeDoFuncionario;
    }

    void Pagamento::setNomeDoFuncionario(std::string nomeDoFuncionario){
        this->nomeDoFuncionario = nomeDoFuncionario;
    }

    double Pagamento::getValorPagamento(){
        return valorPagamento;
    }
    void Pagamento::setValorPagamento(double valorPagamento){
        this->valorPagamento = valorPagamento;
    }
