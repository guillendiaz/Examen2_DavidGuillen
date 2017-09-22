#include "Estudiante.h"


Estudiante::Estudiante(){

}

Estudiante::Estudiante(string Nombre,string FechaNacimiento,string ColorPelo,string ColorOjos,string Like,string Dislike,string TipoSangre, double Promedio,string Homeroom,string Classroom){
  this->Nombre=Nombre;
  this->FechaNacimiento=FechaNacimiento;
  this->ColorPelo=ColorPelo;
  this->ColorOjos=ColorOjos;
  this->Like=Like;
  this->Dislike=Dislike;
  this->TipoSangre=TipoSangre;
  
  this->Promedio=Promedio;
  this->Homeroom=Homeroom;
  this->Classroom=Classroom;
}

void Estudiante::setPromedio(double Promedio){
   this-> Promedio=Promedio;
}

double Estudiante::getPromedio(){
   return Promedio;
}

void Estudiante::setHomeroom(string Homeroom){
   this-> Homeroom=Homeroom;
}

string Estudiante::getHomeroom(){
   return Homeroom;
}

void Estudiante::setClassroom(string Classroom){
   this-> Classroom=Classroom;
}

string Estudiante::getClassroom(){
   return Classroom;
}

Quirk getClassroom(){
  return quirk;
}

void setClassroom(Quirk quirk){
  this->quirk = quirk
}
