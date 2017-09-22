#include <iostream>
#include <fstream>
#include <string>
#include <vector>
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
	int opcMenu;
	do{
		switch(opcMenu=Menu()){
			case 1:{

			}
				break;
			case 2:{

			}
				break;
			case 3:{

			}
				break;
		}//switch()
	}while(opcMenu!=3);
	return 0;
}

int Menu(){
	int opcion = 0;
	while(opcion == 0){
		cout<<"Ingrese Opcion :"<<endl
			<<"1.	Contratar Maestro"<<endl
			<<"2. Despedir Maestro"<<endl
			<<"3. Matricular Alumno"<<endl
			<<"4. Expulsar Alumno"<<endl
			<<"5. Listar Maestros en U.A"<<endl
			<<"6. Listar Alumno en U.A"<<endl
			<<"7. Sacar el sueldo Promedio de los Maestros de U.A"<<endl
			<<"8. Sacar el Promedio General de los Alumnos de U.A"<<endl
			<<"9. Listar Alumnos por Departamento"<<endl
			<<"10. Guardar en txt"<<endl;
		cin>>opcion;
		if(opcion < 1 || opcion > 10){
			cout<<"Valor Incorecto"<<endl;
			opcion = 0;
		}//if()
	}//while()
}//Menu()
