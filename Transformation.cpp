#include "Transformation.h"

Transformation::Transformation(string FormaCambio,int CantidadImpacto,bool AfectaOtros){
    this->FormaCambio=FormaCambio;
    this->CantidadImpacto=CantidadImpacto;
    this->AfectaOtros=AfectaOtros;
}
Transformation::Transformation(){

}void Transformation::setFormaCambio(string FormaCambio){
   this-> FormaCambio=FormaCambio;
}
string Transformation::getFormaCambio(){
   return FormaCambio;
}
void Transformation::setCantidadImpacto(int CantidadImpacto){
   this-> CantidadImpacto=CantidadImpacto;
}
int Transformation::getCantidadImpacto(){
   return CantidadImpacto;
}
void Transformation::setAfectaOtros(bool AfectaOtros){
   this-> AfectaOtros=AfectaOtros;
}
bool Transformation::getAfectaOtros(){
   return AfectaOtros;
}
