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
hashTable hashTag;


void admin() {
	int opc;
	do
	{
		cout << "Administrador de Viajes / Admin" << endl;
		cout << "1.Insertar Ciudad\n2.insertar Camino\n3.Crear Nuevo Usuario\n4.Cargar datos\n5.Imprimir Caminos\n6.Imprimir Ciudades\n";		
		cout << "7.Imprimir Usuarios\n8.Guardar Cambios" << endl;
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

			inCamino.open("Caminos.txt", ios_base::in);
			camino.cargar(inCamino);
			inCamino.close();

			inUsuario.open("Usuarios.txt", ios_base::in);
			usuario.cargar(inUsuario);
			inUsuario.close();
			system("pause");
			system("cls");
			break;
		case 5:
			system("cls");
			ciudad_.read();
			system("pause");
			system("cls");
			break;
		case 6:
			system("cls");
			camino.read();
			system("pause");
			system("cls");
			break;
		case 7:
			system("cls");
			usuario.read();
			system("pause");
			system("cls");
		case 8:
			system("cls");
			outCiudad.open("Ciudades.txt", ios_base::out);
			ciudad_.salvar(outCiudad);
			outCiudad.close();

			outCamino.open("Caminos.txt", ios_base::out);
			camino.salvar(outCamino);
			outCamino.close();

			outUsuario.open("Usuarios.txt", ios_base::out);
			usuario.salvar(outUsuario);
			outUsuario.close();
			break;
		default:
			break;
		}
	} while (opc!=0);
}

void user() {
	int opc;
	cLista mapa;
	do
	{

		cout << "\t\tADMINISTRADOR DE VIAJES" << endl;
		cout << "1.Login\n2.Buscar Destino Ideal\n3.Buscar Destino Cercano\n4.Camino Ideal\n5.Camino Barato\n6.Agregar Comentarios" << endl;
		cout << "Ingrese la opcion deseada: ";
		cin >> opc;
		switch (opc)
		{
		case 1:
			system("cls");
			mapa = usuario.login(ciudad_, camino);
			system("pause");
			system("cls");
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;

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
			system("cls");
			admin();
			system("cls");
			break;
		case 2: 
			system("cls");
			user();
			system("cls");
			break;
		default:
			break;
		}


	} while (opc != 0);

}
