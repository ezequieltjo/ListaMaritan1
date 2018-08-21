#include <iostream>
#include "ControleDePagamentos.h"
#include "Pagamento.h"


using namespace std;

int main()
{
    ControleDePagamentos controle1 = ControleDePagamentos();

    Pagamento pag1 = Pagamento(4500, "fernanda");
    Pagamento pag2 = Pagamento(500, "seu ze");

    controle1.setPagamentos(pag1);
    controle1.setPagamentos(pag2);

    cout << controle1.calculaTotalDePagamentos() << endl;
    return 0;
}
