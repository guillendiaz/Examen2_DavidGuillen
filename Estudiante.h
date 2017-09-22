#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>

#include "Quirk.h"
#include "Ciudadano.h"
#include "Maestro.h"

using namespace std;

class Maestro;

class Estudiante : public Ciudadano{
    protected:
        double Promedio;
        string Homeroom;
        string Classroom;
        string Departamento;
        Quirk* quirk;
        Maestro* maestro;
    public:
        Estudiante();
        Estudiante(string,string,string,string,string,string,string, double,string,string,Quirk*);

        double getPromedio();
        void setPromedio(double);

        string getHomeroom();
        void setHomeroom(string);

        string getClassroom();
        void setClassroom(string);

        Quirk* getQuirk();
        void setQuirk(Quirk*);

        string getDepartamento();
        void setDepartamento(string);

        Maestro* getMaestro();
        void setMaestro(Maestro*);

        string toString();
};
#endif
