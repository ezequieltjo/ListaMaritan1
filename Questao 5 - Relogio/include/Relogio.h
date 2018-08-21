#ifndef RELOGIO_H
#define RELOGIO_H


class Relogio
{
    private:
        int hora, minuto, seg;

    public:
        Relogio();
        Relogio(int hora, int minuto, int seg);
        void setHorario(int hora, int minuto, int seg);
        int getHora();
        int getMinuto();
        int getSegundo();
        void avancarHorario();

};

#endif // RELOGIO_H
