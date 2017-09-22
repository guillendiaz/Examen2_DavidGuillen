#ifndef MUTANT_H
#define MUTANT_H
#include <iostream>
#include <string>

#include "Quirk.h"

using namespace std;


class Mutant : public Quirk{
    protected:
        string Caracteristica;
    public:
      Mutant();
      Mutant(string);

      string getCaracteristica();
      void setCaracteristica(string);

};
#endif
