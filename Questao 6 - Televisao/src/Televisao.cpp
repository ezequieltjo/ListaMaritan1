#include "Televisao.h"

Televisao::Televisao()
{    volume = canal = op1 = op2 = 0;
}

Televisao::Televisao(int v, int c, int o1, int o2){
    volume = v;
    canal = c;
    op1 = o1;
    op2 = o2;
}

int Televisao::getVolume(){
    return volume;
}

void Televisao::setVolume(int volume){
    this->volume = volume;
}

int Televisao::getCanal(){
    return canal;
}

void Televisao::setCanal(int canal){
    this->canal = canal;
}

void Televisao::alteraCanal(int op1){
    if(op1==1){
        canal++;
    }
    if(op1==2){
        canal--;
    }
    if(canal>1000){
        canal=1;
    }
    if (canal<1){
        canal=1000;
    }
}

void Televisao::alteraVolume(int op2){
    if(op2==1){
        volume++;
    }
    if(op2==2){
        volume--;
    }
    if(canal>100){
        canal=100;
    }
    if (canal<0){
        canal=0;
    }
}
