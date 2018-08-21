#include <iostream>
#include "Relogio.h"

using namespace std;

int main()
{
    int a, b, c;
    char d;

    Relogio rel1 = Relogio();

    cout << "Digite a hora: " << endl;
    cin >> a;
    cout << "Digite o minuto: " << endl;
    cin >> b;
    cout << "Digite o segundo: " << endl;
    cin >> c;

    rel1.setHorario(a,b,c);

    cout << "Hora: " << rel1.getHora() << ":" << rel1.getMinuto() << ":" << rel1.getSegundo() <<endl;

    cout << "Avancar horario? (S/N)" << endl;
    cin >> d;

    if ( d=='S' || d=='s') {
       rel1.avancarHorario();
       cout << "Horario atualizado: " << rel1.getHora() << ":" << rel1.getMinuto() << ":" << rel1.getSegundo() <<endl;
    }


    return 0;
}
