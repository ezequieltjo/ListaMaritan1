#include <iostream>
#include "Televisao.h"

using namespace std;

int main()
{
    int op1, op2, c1, c2, v1, v2;
    int tv, escolha;

    Televisao tv1 = Televisao();
    Televisao tv2 = Televisao();

    cout << "Digite o canal inicial da TV-1: " << endl;
    cin >> c1;
    cout << "Digite o volume inicial da TV-1: " << endl;
    cin >> v1;

    tv1.setCanal(c1);
    tv1.setVolume(v1);

    cout << "TV1: " << "Canal inicial: " << tv1.getCanal() << " Volume inicial: " << tv1.getVolume() << endl;

    cout << endl;

    cout << "Digite o canal inicial da TV-2: " << endl;
    cin >> c2;
    cout << "Digite o volume inicial da TV-2: " << endl;
    cin >> v2;

    tv2.setCanal(c2);
    tv2.setVolume(v2);

    cout << "TV2: " << "Canal inicial: " << tv2.getCanal() << " Volume inicial: " << tv2.getVolume() << endl;

    cout << endl;

    while(1){
        cout << "Escolha qual TV vc quer controlar: " << endl;
        cin >> tv;

        if (tv==1){
            cout << "Vc quer... :\n 1-Aumentar canal\n 2-Diminuir canal \n 3-Aumentar volume\n 4-Diminuir volume" << endl;
            cin >> escolha;

            switch(escolha){
            case 1:
                tv1.alteraCanal(1);
            case 2:
                tv1.alteraCanal(2);
            case 3:
                tv1.alteraVolume(1);
            case 4:
                tv1.alteraVolume(2);
            }

            cout << "Depois da sua escolha, Canal atual: " << tv1.getCanal() << " e volume atual: "<< tv1.getVolume() << endl;
        }

        if (tv==2){
            cout << "Vc quer... :\n 1-Aumentar canal\n 2-Diminuir canal \n 3-Aumentar volume\n 4-Diminuir volume" << endl;
            cin >> escolha;

            switch(escolha){
            case 1:
                tv2.alteraCanal(1);
            case 2:
                tv2.alteraCanal(2);
            case 3:
                tv2.alteraVolume(1);
            case 4:
                tv2.alteraVolume(2);
            }

            cout << "Depois da sua escolha, Canal atual: " << tv2.getCanal() << " e volume atual: "<< tv2.getVolume() << endl;
        }

    }

    return 0;
}
