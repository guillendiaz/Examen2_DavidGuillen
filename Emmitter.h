#ifndef EMMITTER_H
#define EMMITTER_H

#include <iostream>
#include <string>

#include "Quirk.h"

using namespace std;

class Emmitter  : public Quirk{
    protected:
        string EfectoEmision;
        int CantidadContacto;
        bool ContactoFisico;
    public:
        Emmitter();
        Emmitter(string,int,bool);
        string getEfectoEmision();
        void setEfectoEmision(string);

        int getCantidadContacto();
        void setCantidadContacto(int);

        bool getContactoFisico();
        void setContactoFisico(bool);

};
#endif
