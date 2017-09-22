#include "Emmitter.h"

Emmitter::Emmitter(string EfectoEmision,int CantidadContacto,bool ContactoFisico){
    this->EfectoEmision=EfectoEmision;
    this->CantidadContacto=CantidadContacto;
    this->ContactoFisico=ContactoFisico;
}
Emmitter::Emmitter(){

}void Emmitter::setEfectoEmision(string EfectoEmision){
   this-> EfectoEmision=EfectoEmision;
}
string Emmitter::getEfectoEmision(){
   return EfectoEmision;
}
void Emmitter::setCantidadContacto(int CantidadContacto){
   this-> CantidadContacto=CantidadContacto;
}
int Emmitter::getCantidadContacto(){
   return CantidadContacto;
}
void Emmitter::setContactoFisico(bool ContactoFisico){
   this-> ContactoFisico=ContactoFisico;
}
bool Emmitter::getContactoFisico(){
   return ContactoFisico;
}
