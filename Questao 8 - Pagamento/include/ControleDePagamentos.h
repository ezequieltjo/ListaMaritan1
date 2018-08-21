#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H
#include "Pagamento.h"
#include <string>

class ControleDePagamentos
{
    private:
        Pagamento pagamentos[10];
        int totais;
    public:
        ControleDePagamentos();
        double calculaTotalDePagamentos();
        bool existePagamentoParaFuncionario(std::string nomeDoFuncionario);
        void setPagamentos(Pagamento pagamento1);
};

#endif // CONTROLEDEPAGAMENTOS_H
