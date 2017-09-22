#include <iostream>
#include <string>

using namespace std;

#ifndef CIUDADANO_H
#define CIUDADANO_H
class Ciudadano{
    protected:
        string Nombre;
        string FechaNacimiento;
        string ColorPelo;
        string ColorOjos;
        string Like;
        string Dislike;
        string TipoSangre;
    public:
        Ciudadano();
        Ciudadano(string,string,string,string,string,string,string);

        string getNombre();
        void setNombre(string);

        string getFechaNacimiento();
        void setFechaNacimiento(string);

        string getColorPelo();
        void setColorPelo(string);

        string getColorOjos();
        void setColorOjos(string);

        string getLike();
        void setLike(string);

        string getDislike();
        void setDislike(string);

        string getTipoSangre();
        void setTipoSangre(string);

        virtual bool equals(Ciudadano*)const;

};
#endif
