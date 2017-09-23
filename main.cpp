#include <iostream>
#include <fstream>
#include <string>
#include "Ciudadano.h"
#include "Quirk.h"
#include "Emmitter.h"
#include "Transformation.h"
#include "Mutant.h"
#include "Estudiante.h"
#include "Maestro.h"
#include "ADTList.h"
#include "LinkedList.h"
#include "nodo.h"

using namespace std;
int Menu();
//Se ingresa el Menu()
int main(){
	ADTList* ciudadanos = new LinkedList();
	int pos = 0;
	int opcMenu;
	do{
		switch(opcMenu=Menu()){
			case 1:{
				string Nombre, FechaNacimiento, ColorPelo, ColorOjos, Like, Dislike, TipoSangre;

				string Homeroom, Classroom, Departamento, Alias;
        double Sueldo;
				int OpcioDepa=0;

				cout<<"Ingrese Nombre del Maestro: "<<endl;
				cin>>Nombre;
				cout<<"Ingrese Fecha Nacimiento del Maestro: "<<endl;
				cin>>FechaNacimiento;
				cout<<"Ingrese Color Pelo del Maestro: "<<endl;
				cin>>ColorPelo;
				cout<<"Ingrese Color Ojos del Maestro: "<<endl;
				cin>>ColorOjos;
				cout<<"Ingrese Like del Maestro: "<<endl;
				cin>>Like;
				cout<<"Ingrese Dislike del Maestro: "<<endl;
				cin>>Dislike;
				cout<<"Ingrese Tipo Sangre del Maestro: "<<endl;
				cin>>TipoSangre;
				cout<<"Ingrese Homeroom del Maestro: "<<endl;
				cin>>Homeroom;
				cout<<"Ingrese Classroom del Maestro: "<<endl;
				cin>>Classroom;
				cout<<"Ingrese Departamento del Maestro: "<<endl;
				cout<<"Ingrese Opcion :"<<endl
					<<"1. Department of Heroes"<<endl
					<<"2. Department of Support"<<endl
					<<"3. Department of Management"<<endl;
				cin>>OpcioDepa;
					if (OpcioDepa == 1) {
						Departamento = "Department of Heroes";
					}else if (OpcioDepa == 2) {
						Departamento = "Department of Support";
					}else if (OpcioDepa == 3) {
						Departamento = "Department of Management";
					}
				cout<<endl;
				cout<<"Ingrese Alias del Maestro: "<<endl;
				cin>>Alias;
				cout<<"Ingrese Sueldo del Maestro: "<<endl;
				cin>>Sueldo;
				Ciudadano* nuevomaestro = new Maestro(Nombre, FechaNacimiento, ColorPelo, ColorOjos, Like, Dislike, TipoSangre, Homeroom, Classroom, Departamento, Alias, Sueldo);
				if(ciudadanos->insert(nuevomaestro,pos)){
					cout<< "Se ha Ingresado!"<<endl;
					pos++;
				}else{
					cout<<"Ocurrio un Error"<<endl;
				}
			}
				break;
			case 2:{
				int pos;
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Maestro*>(ciudadanos->get(i))) {
						cout<<i<<". "<<ciudadanos->get(i)->toString()<<endl;
					}
				}
				cout<<"Ingrese Posicion del Maestro a Despedir: "<<endl;
				cin>>pos;
				ciudadanos->remove(pos);
			}
				break;
			case 3:{
				int ContMaestro=0, pos;
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Maestro*>(ciudadanos->get(i))) {
						ContMaestro++;
					}
				}
				if (ContMaestro != 0) {
					string Nombre, FechaNacimiento, ColorPelo, ColorOjos, Like, Dislike, TipoSangre;
					Quirk* quirk = new Quirk();
					string Homeroom, Classroom, Departamento, Alias;
					double Promedio;
					int OpcioQuirk=0;

					cout<<"Ingrese Nombre del Estudiante: "<<endl;
					cin>>Nombre;
					cout<<"Ingrese Fecha Nacimiento del Estudiante: "<<endl;
					cin>>FechaNacimiento;
					cout<<"Ingrese Color Pelo del Estudiante: "<<endl;
					cin>>ColorPelo;
					cout<<"Ingrese Color Ojos del Estudiante: "<<endl;
					cin>>ColorOjos;
					cout<<"Ingrese Like del Estudiante: "<<endl;
					cin>>Like;
					cout<<"Ingrese Dislike del Estudiante: "<<endl;
					cin>>Dislike;
					cout<<"Ingrese Tipo Sangre del Estudiante: "<<endl;
					cin>>TipoSangre;
					cout<<"Ingrese Homeroom del Estudiante: "<<endl;
					cin>>Homeroom;
					cout<<"Ingrese Classroom del Estudiante: "<<endl;
					cin>>Classroom;
					cout<<"Ingrese Quirk del Estudiante: "<<endl;
					cout<<"Ingrese Opcion :"<<endl
					<<"1. Emmitter"<<endl
					<<"2. Transformation:"<<endl
					<<"3. Mutant"<<endl;
					cin>>OpcioQuirk;
					if (OpcioQuirk == 1) {
						string EfectoEmision;
						int CantidadContacto, OpcioConta=0;
						bool ContactoFisico;

						cout<<"Ingrese Efecto Emision: ";
						cin>>EfectoEmision;
						cout<<endl;
						cout<<"Ingrese Cantidad Contacto: "<<endl;
						cin>>	CantidadContacto;
						cout<<"Ingrese Contacto Fisico: "<<endl;
						cout<<"Ingrese Opcion :"<<endl
						<<"1. SI"<<endl
						<<"2. NO"<<endl;
						cin>>OpcioConta;
						if (OpcioConta == 1) {
							ContactoFisico = true;
						}else if (OpcioConta == 2) {
							ContactoFisico = false;
						}
						quirk = new Emmitter(EfectoEmision, CantidadContacto, ContactoFisico);
					}else if (OpcioQuirk == 2) {
						string FormaCambio;
						int CantidadImpacto, OpcioConta=0;
						bool AfectaOtros;

						cout<<"Ingrese Forma Cambio: ";
						cin>>FormaCambio;
						cout<<endl;
						cout<<"Ingrese Cantidad Impacto: ";
						cin>>	CantidadImpacto;
						cout<<"Ingrese Afecta a Otros: ";
						cout<<"Ingrese Opcion :"<<endl
						<<"1. SI"<<endl
						<<"2. NO:"<<endl;
						cin>>OpcioConta;
						if (OpcioConta == 1) {
							AfectaOtros = true;
						}else if (OpcioConta == 2) {
							AfectaOtros = false;
						}
						quirk = new Transformation(FormaCambio, CantidadImpacto, AfectaOtros);
					}else if (OpcioQuirk == 3) {
						string Caracteristica;
						cout<<"Ingrese Caracteristica: ";
						cin>>Caracteristica;
						quirk = new Mutant(Caracteristica);
					}
					cout<<endl;
					cout<<"Ingrese Promedio del Estudiante: "<<endl;
					cin>>Promedio;

					Ciudadano* nuevoalumno = new Estudiante(Nombre, FechaNacimiento, ColorPelo, ColorOjos, Like, Dislike, TipoSangre, Promedio, Homeroom, Classroom, quirk);
					for (int i = 0; i < ciudadanos->Size(); ++i){
						if (dynamic_cast<Maestro*>(ciudadanos->get(i))) {
							cout<<i<<". "<<ciudadanos->get(i)->toString()<<endl;
						}
					}
					cout<<"Ingrese Posicion del Maestro que Sera el Guia: ";
					cin>>pos;
					cout<<endl;
					dynamic_cast<Estudiante*>(nuevoalumno)->setMaestro(dynamic_cast<Maestro*>(ciudadanos->get(pos)));
					dynamic_cast<Estudiante*>(nuevoalumno)->setDepartamento(dynamic_cast<Maestro*>(ciudadanos->get(pos))->getDepartamento());
					dynamic_cast<Maestro*>(ciudadanos->get(pos))->list->insert(dynamic_cast<Estudiante*>(nuevoalumno), dynamic_cast<Maestro*>(ciudadanos->get(pos))->pos);
					if(ciudadanos->insert(nuevoalumno,pos)){
						cout<< "Se ha Ingresado!"<<endl
						<<endl;
						pos++;
					}else{
						cout<<"Ocurrio un Error"<<endl
						<<endl;
					}
				}else{
					cout<<"No hay Maestro por lo cual no se puede crear Estudiante"<<endl;
				}
			}
				break;
			case 4:{
				int pos;
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Estudiante*>(ciudadanos->get(i))) {
						cout<<i<<". "<<ciudadanos->get(i)->toString()<<endl;
					}
				}
				cout<<"Ingrese Posicion del Estudiante a Expulsar: ";
				cin>>pos;
				cout<<endl;
				ciudadanos->remove(pos);
			}
			break;
			case 5:{
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Maestro*>(ciudadanos->get(i))) {
						cout<<i<<". "<<ciudadanos->get(i)->toString()<<endl;
					}

				}
			}
			break;
			case 6:{
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Estudiante*>(ciudadanos->get(i))) {
						cout<<i<<". "<<ciudadanos->get(i)->toString()<<endl;
					}

				}
			}
			break;
			case 7:{
				double ContMaestro=0, Sueldo=0, Total=0;
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Maestro*>(ciudadanos->get(i))) {
						Sueldo += dynamic_cast<Maestro*>(ciudadanos->get(i))->getSueldo();
						ContMaestro++;
					}
				}
				if (ContMaestro != 0) {
					Total = Sueldo / ContMaestro;
					cout<<"Promedio del Sueldo en los Maestros: "<<Total<<endl;
				}else{
					cout<<"A Ocurrido un Error: "<<endl;
				}

			}
			break;
			case 8:{
				double ContEstudiante=0, Promedio=0, Total=0;
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Estudiante*>(ciudadanos->get(i))) {
						Promedio += dynamic_cast<Estudiante*>(ciudadanos->get(i))->getPromedio();
						ContEstudiante++;
					}
				}
				if (ContEstudiante != 0) {
					Total = Promedio / ContEstudiante;
					cout<<"Promedio del Promedio en los Estudiantes: "<<Total<<endl;
				}else{
					cout<<"A Ocurrido un Error: "<<endl;
				}

			}
			break;
			case 9:{
				string NombresDeHe="", NombresDeSu="", NombresDeMa="";
				for (int i = 0; i < ciudadanos->Size(); ++i){
					if (dynamic_cast<Estudiante*>(ciudadanos->get(i))) {
						if ((dynamic_cast<Estudiante*>(ciudadanos->get(i)))->getDepartamento() == "Department of Heroes") {
							NombresDeHe+= ciudadanos->get(i)->toString() + "\n";
						}else if ((dynamic_cast<Estudiante*>(ciudadanos->get(i)))->getDepartamento() == "Department of Support") {
							NombresDeSu += ciudadanos->get(i)->toString() + "\n";
						}else if ((dynamic_cast<Estudiante*>(ciudadanos->get(i)))->getDepartamento() == "Department of Management") {
							NombresDeMa += ciudadanos->get(i)->toString() + "\n";
						}
					}
				}
				cout<< "Department of Heroes"<<endl<<NombresDeHe<<endl;
				cout<< "Department of Support"<<endl<<NombresDeSu<<endl;
				cout<< "Department of Management"<<endl<<NombresDeMa<<endl;
			}
			break;
			case 10:{
				ofstream Save("Save.txt", ios::app);
				for (int i = 0; i < ciudadanos->Size(); ++i){
					Save<<"Nombre: "<<ciudadanos->get(i)->getNombre()<<endl<<"Fecha Nacimiento: "<<ciudadanos->get(i)->getFechaNacimiento()<<endl<<"Color Pelo: "<<ciudadanos->get(i)->getColorPelo()
					<<endl<<"Color Ojos: "<<ciudadanos->get(i)->getColorOjos()<<endl<<"Like: "<<ciudadanos->get(i)->getLike()<<endl<<"Dislike: "<<ciudadanos->get(i)->getDislike()
					<<endl<<"Tipo Sangre: "<<ciudadanos->get(i)->getTipoSangre()<<endl<<"---------------------------------------------------------------------------"<<endl;
				}
				Save.close();
			}
			break;
		}//switch()
	}while(opcMenu!=11);
	return 0;
}

int Menu(){
	int opcion = 0;
	while(opcion == 0){
		cout<<endl<<"Ingrese Opcion :"<<endl
			<<"1. Contratar Maestro"<<endl
			<<"2. Despedir Maestro"<<endl
			<<"3. Matricular Estudiante"<<endl
			<<"4. Expulsar Estudiante"<<endl
			<<"5. Listar Maestros en U.A"<<endl
			<<"6. Listar Estudiante en U.A"<<endl
			<<"7. Sacar el sueldo Promedio de los Maestros de U.A"<<endl
			<<"8. Sacar el Promedio General de los Estudiantes de U.A"<<endl
			<<"9. Listar Estudiantes por Departamento"<<endl
			<<"10. Guardar en txt"<<endl
			<<"11. Salir"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 11){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()
	}//while()
}//Menu()
