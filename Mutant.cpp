#include "Mutant.h"

Mutant::Mutant(string Caracteristica){
    this->Caracteristica=Caracteristica;
}
Mutant::Mutant(){

}void Mutant::setCaracteristica(string Caracteristica){
   this-> Caracteristica=Caracteristica;
}
string Mutant::getCaracteristica(){
   return Caracteristica;
}
