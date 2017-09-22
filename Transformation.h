#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H

#include <iostream>
#include <string>

#include "Quirk.h"

using namespace std;


class Transformation : public Quirk{
    protected:
        string FormaCambio;
        int CantidadImpacto;
        bool AfectaOtros;
    public:
        Transformation(string,int,bool);
        Transformation();
        string getFormaCambio();
        void setFormaCambio(string);

        int getCantidadImpacto();
        void setCantidadImpacto(int);

        bool getAfectaOtros();
        void setAfectaOtros(bool);

};
#endif
