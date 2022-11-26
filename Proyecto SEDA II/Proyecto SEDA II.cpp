#include "Objetos.h"
#include "Grafo.h"
#include "grafoC.h"
#include "Objetos.h"
#include "padre.h"
#include "HashTag.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

fstream outCiudad;
fstream inCiudad;
fstream outCamino;
fstream inCamino;
fstream outUsuario;
fstream inUsuario;

cCiudades ciudad_;
cCaminos camino;
cUsuarios usuario;
hashTable h;


void admin() {
	int opc;
	do
	{
		cout << "Administrador de Viajes / Admin" << endl;
		cout << "1.Insertar Ciudad\n2.insertar Camino\n3.Crear Nuevo Usuario\n4.Cargar Ciudades\n5.Cargar Caminos\n6.Cargar Usuarios\n";		
		cout << "7.Imprimir Caminos\n8.Imprimir Ciudades\n9.Imprimir Usuarios" << endl;
		cout << "Ingrese la opcion que desee:";
		cin >> opc;

		switch (opc) {
		case 1:
			system("cls");
			ciudad_.create();
			system("pause");
			system("cls");
			break;
		case 2:
			system("cls");
			camino.create();
			system("pause");
			system("cls");
			break;
		case 3:
			system("cls");
			usuario.create();
			system("pause");
			system("cls");
			break;
		case 4: 
			system("cls");
			inCiudad.open("Ciudades.txt", ios_base::in);
			ciudad_.cargar(inCiudad);
			inCiudad.close();
			system("pause");
			system("cls");
		case 5:
			system("cls");
			inCamino.open("Caminos.txt", ios_base::in);
			camino.cargar(inCamino);
			inCamino.close();
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			inUsuario.open("Usuarios.txt", ios_base::in);
			usuario.cargar(inUsuario);
			inUsuario.close();
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			ciudad_.read();
			system("pause");
			system("cls");
			break;
		case 8:
			system("cls");
			camino.read();
			system("pause");
			system("cls");
			break;
		case 9:
			system("cls");
			usuario.read();
			system("pause");
			system("cls");
		default:
			break;
		}
	} while (opc!=0);
}

int main()
{
	int opc;
	do {
		cout << "\t\tADMINISTRADOR DE VIAJES" << endl;
		cout << "Ingrese la opcion que desee: ";
		cout << "\n1.Administrador\n2.Usuario" << endl;
		cin >> opc;

		switch (opc)
		{
		case 1:
			admin();
			break;
		case 2: 
			break;
		default:
			break;
		}


	} while (opc != 0);

}
