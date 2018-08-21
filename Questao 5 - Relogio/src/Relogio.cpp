#include "Relogio.h"

Relogio::Relogio()
{    hora = minuto = seg = 0;
}

void Relogio::setHorario(int h, int m, int s){
    hora = h;
    minuto = m;
    seg = s;
}
int Relogio::getHora(){
    return hora;
}
int Relogio::getMinuto(){
    return minuto;
}
int Relogio::getSegundo(){
    return seg;
}
void Relogio::avancarHorario(){
    seg++;

    if (seg>59){
        seg=0;
        minuto++;
    }

    if (minuto>59){
        minuto=0;
        hora++;
    }

    if (hora>23){
        hora=0;
    }
}
