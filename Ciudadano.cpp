#include "Ciudadano.h"


Ciudadano::Ciudadano(){

}
Ciudadano::Ciudadano(string,string,string,string,string,string,string){

}

void Ciudadano::setNombre(string Nombre){
   this-> Nombre=Nombre;
}

string Ciudadano::getNombre(){
   return Nombre;
}

void Ciudadano::setFechaNacimiento(string FechaNacimiento){
   this-> FechaNacimiento=FechaNacimiento;
}

string Ciudadano::getFechaNacimiento(){
   return FechaNacimiento;
}

void Ciudadano::setColorPelo(string ColorPelo){
   this-> ColorPelo=ColorPelo;
}

string Ciudadano::getColorPelo(){
   return ColorPelo;
}

void Ciudadano::setColorOjos(string ColorOjos){
   this-> ColorOjos=ColorOjos;
}

string Ciudadano::getColorOjos(){
   return ColorOjos;
}

void Ciudadano::setLike(string Like){
   this-> Like=Like;
}

string Ciudadano::getLike(){
   return Like;
}

void Ciudadano::setDislike(string Dislike){
   this-> Dislike=Dislike;
}

string Ciudadano::getDislike(){
   return Dislike;
}
void Ciudadano::setTipoSangre(string TipoSangre){
   this-> TipoSangre=TipoSangre;
}

string Ciudadano::getTipoSangre(){
   return TipoSangre;
}
