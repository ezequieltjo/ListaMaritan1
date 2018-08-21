#ifndef TELEVISAO_H
#define TELEVISAO_H


class Televisao
{
    private:
        int volume, canal, op1, op2;

    public:
        Televisao();
        Televisao(int volume, int canal, int op1, int op2);
        int getVolume();
        void setVolume(int volume);
        int getCanal();
        void setCanal(int canal);
        void alteraCanal(int op1);
        void alteraVolume(int op2);

};

#endif // TELEVISAO_H
