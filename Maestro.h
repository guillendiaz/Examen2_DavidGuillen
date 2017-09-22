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


class Maestro : public Ciudadano{
    protected:
        int pos;
        ADTList* list = new LinkedList();
        string Homeroom;
        string Classroom;
        string Departamento;
        string Alias;
        double Sueldo;

    public:
        Maestro(string,string,string,string,string,string,string, string,string,string,string,double);
        Maestro();
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

        Ciudadano* getCiudadano();
        void addCiudadano(Ciudadano);

};
#endif
