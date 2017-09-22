#ifndef MAESTRO_H
#define MAESTRO_H

#include <iostream>
#include <string>

#include "Ciudadano.h"
#include "Estudiante.h"
#include "ADTList.h"
#include "LinkedList.h"
#include "nodo.h"
using namespace std;

class Estudiante;

class Maestro : public Ciudadano{
    protected:
        string Homeroom;
        string Classroom;
        string Departamento;
        string Alias;
        double Sueldo;

    public:
      int pos;
      ADTList* list = new LinkedList();
      Maestro();
      Maestro(string,string,string,string,string,string,string, string,string,string,string,double);

      string getHomeroom();
      void setHomeroom(string);

      string getClassroom();
      void setClassroom(string);

      string getDepartamento();
      void setDepartamento(string);

      string getAlias();
      void setAlias(string);

      double getSueldo();
      void setSueldo(double);

      string toString();

};
#endif
