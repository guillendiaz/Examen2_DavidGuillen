#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include <string>

#include "Quirk.h"
#include "Ciudadano.h"

using namespace std;

class Estudiante : public Ciudadano{
    protected:
        double Promedio;
        string Homeroom;
        string Classroom;
        Quirk quirk;
    public:
        Estudiante();
        Estudiante(string,string,string,string,string,string,string, double,string,string);

        double getPromedio();
        void setPromedio(double);

        string getHomeroom();
        void setHomeroom(string);

        string getClassroom();
        void setClassroom(string);

        Quirk getQuirk();
        void setQuirk(Quirk);

};
#endif
