#include "ControleDePagamentos.h"
#include <string>

ControleDePagamentos::ControleDePagamentos()
{    totais = 0;
}

double ControleDePagamentos::calculaTotalDePagamentos(){
    double aux=0;
    for(int i=0; i<totais; i++){
        aux += pagamentos[i].getValorPagamento();
    }
    return aux;
}

bool ControleDePagamentos::existePagamentoParaFuncionario(std::string nome){
    for(int i=0; i<totais; i++){
        if (pagamentos[i].getNomeDoFuncionario() == nome){
            return true;
        }
    }
    return false;
}

void ControleDePagamentos::setPagamentos(Pagamento pagamento1){
    pagamentos[totais]=pagamento1;
    totais++;
}
