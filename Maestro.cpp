#include "Maestro.h"

Maestro::Maestro(){

}

Maestro::Maestro(string Nombre,string FechaNacimiento,string ColorPelo,string ColorOjos,string Like,string Dislike,string TipoSangre, string Homeroom,string Classroom,string Departamento,string Alias,double Sueldo){
  this->Nombre=Nombre;
  this->FechaNacimiento=FechaNacimiento;
  this->ColorPelo=ColorPelo;
  this->ColorOjos=ColorOjos;
  this->Like=Like;
  this->Dislike=Dislike;
  this->TipoSangre=TipoSangre;

  this->Homeroom=Homeroom;
  this->Classroom=Classroom;
  this->Departamento=Departamento;
  this->Alias=Alias;
  this->Sueldo=Sueldo;
}

void Maestro::setHomeroom(string Homeroom){
   this-> Homeroom=Homeroom;
}

string Maestro::getHomeroom(){
   return Homeroom;
}

void Maestro::setClassroom(string Classroom){
   this-> Classroom=Classroom;
}

string Maestro::getClassroom(){
   return Classroom;
}

void Maestro::setDepartamento(string Departamento){
   this-> Departamento=Departamento;
}

string Maestro::getDepartamento(){
   return Departamento;
}

void Maestro::setAlias(string Alias){
   this-> Alias=Alias;
}

string Maestro::getAlias(){
   return Alias;
}

void Maestro::setSueldo(double Sueldo){
   this-> Sueldo=Sueldo;
}

double Maestro::getSueldo(){
   return Sueldo;
}

Ciudadano* getCiudadano(int p){

}

void addCiudadano(Ciudadano){
  
}
