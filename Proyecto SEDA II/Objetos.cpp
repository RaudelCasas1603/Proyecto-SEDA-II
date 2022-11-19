#include "Objetos.h"
#include <iostream>
#include <string>
using namespace std;

int contadorCiudad = 1;
int contadorCamino = 1;
int contadorUsuario = 1;



void cCiudad::create() {
	string nombre_;
	float ecoturismo_, gastronomia_, historia_, seguridad_, costo_;

	cout << "Ingrese el nombre de la ciudad: ";
	fflush(stdin);
	getline(cin, nombre_, '\n');
	cout << "Calificacion Ecoturismo: ";
	cin >> ecoturismo_;
	cout << "Calificacion Gastronomia: ";
	cin >> gastronomia_;
	cout << "Calificacion Historia: ";
	cin >> historia_;
	cout << "Calificacion Seguridad: ";
	cin >> seguridad_;
	cout << "Calificacion Costo: ";
	cin >> costo_;
	
	this->nombre = nombre_;
	this->ecoturismo = ecoturismo_;
	this->gastronomia = gastronomia_;
	this->historia = historia_;
	this->seguridad = seguridad_;
	this->costo = costo_;
}

void cCiudad::read() {
	cout << this->nombre << endl;
	cout << "ID: " << this->ID << endl;
	cout <<"Ecoturismo: " << this->ecoturismo << endl;
	cout <<"Gastronomia: " << this->gastronomia << endl;
	cout <<"Historia: " << this->historia << endl;
	cout <<"Seguridad: " << this->seguridad << endl;
	cout <<"Costo: " << this->costo << endl;
}

void cCiudad::update() {
	this->create();
}

string cCiudad::delete_() {
	return this->nombre;
}

void cCiudad::salvar(fstream& outCiudad) {
	
	outCiudad << this->nombre << endl;
	outCiudad << this->ID << endl;
	outCiudad << this->descripcion << endl;
	outCiudad << this->ecoturismo << endl;
	outCiudad << this->gastronomia << endl;
	outCiudad << this->historia << endl;
	outCiudad << this->seguridad << endl;
	outCiudad << this->costo << endl;

}

void cCiudad::cargar(fstream& inCiudad) {
	
	inCiudad >> this->nombre;
	inCiudad >> this->ID;
	inCiudad >> this->ecoturismo;
	inCiudad >> this->gastronomia;
	inCiudad >> this->historia;
	inCiudad >> this->seguridad;
	inCiudad >> this->costo;
	contadorCiudad = this->ID;
}


void cCamino::create() {
	string origen_, destino_;
	float distancia_, tiempo_, costo_, seguridad_, atractivo_, facilidad_;

	cout << "Punto origen: ";
	fflush(stdin);
	getline(cin, origen_, '\n');
	fflush(stdin);
	cout << "Punto destino: ";
	getline(cin, destino_, '\n');
	cout << "Distancia: ";
	cin >> distancia_;
	cout << "Tiempo: ";
	cin >> tiempo_;
	cout << "Costo: ";
	cin >> costo_;
	cout << "Seguridad: ";
	cin >> seguridad_;
	cout << "Atractivo: ";
	cin >> atractivo_;
	cout << "facilidad: ";
	cin >> facilidad_;
	
	this->origen = origen_;
	this->destino = destino_;
	this->distancia = distancia_;
	this->tiempo = tiempo_;
	this->costo = costo_;
	this->seguridad = seguridad_;
	this->atractivo = atractivo_;
	this->facilidad = facilidad_;
}

void cCamino::read() {
	cout << "Id: " << this->ID << endl;
	cout << "Origen: " << this->origen << endl;
	cout << "Destino: " << this->destino << endl;
	cout << "Distancia: " << this->distancia << endl;
	cout << "Tiempo: " << this->tiempo << endl;
	cout << "Costo: " << this->costo << endl;
	cout << "Seguridad: " << this->atractivo << endl;
	cout << "Atractivo: " << this->atractivo << endl;
	cout << "Facilidad Manejo: " << this->facilidad << endl << endl;
}

void cCamino::update() {
	this->create();
}


int cCamino::delete_() {
	return this->ID;
}

void cCamino::salvar(fstream& outCamino) {
	outCamino << this->ID << endl;
	outCamino << this->origen << endl;
	outCamino << this->destino << endl;
	outCamino << this->tiempo << endl;
	outCamino << this->costo << endl;
	outCamino << this->seguridad << endl;
	outCamino << this->atractivo << endl;
	outCamino << this->facilidad << endl;
}

void cCamino::cargar(fstream& inCamino) {
	inCamino >> this->ID;
	inCamino >> this->origen;
	inCamino >> this->destino;
	inCamino >> this->tiempo;
	inCamino >> this->costo;
	inCamino >> this->seguridad;
	inCamino >> this->atractivo;
	inCamino >> this->facilidad;
	contadorCamino = this->ID;
}
void cUsuario::create() {
	string nombre_;
	float ecoturismo_, gastronomia_, historia_, seguridad_, costo_, presupuesto_, manejo_, cSeguridad_;

	cout << "Ingrese el nombre del Usuario: ";
	fflush(stdin);
	getline(cin, nombre_, '\n');
	fflush(stdin);
	cout << "Presupuesto: ";
	cin >> presupuesto_;
	cout << "Interes Ecoturismo: ";
	cin >> ecoturismo_;
	cout << "Interes Gastronomia: ";
	cin >> gastronomia_;
	cout << "Interes Historia: ";
	cin >> historia_;
	cout << "Interes Seguridad: ";
	cin >> seguridad_;
	cout << "Interes Costo: ";
	cin >> costo_;
	cout << "Habilidad de manejo: ";
	cin >> manejo_;
	cout << "Seguridad camino: ";
	cin >> cSeguridad_;

	this->Nombre = nombre_;
	this->presupuesto = presupuesto_;
	this->ecoturismo = ecoturismo_;
	this->gastronomia = gastronomia_;
	this->historia = historia_;
	this->seguridad = seguridad_;
	this->costo = costo_;
	this->manejo = manejo_;
	this->cSeguridad = cSeguridad_;
}


void cUsuario::read() {
	cout << "Nombre: " << this->Nombre << endl;
	cout << "Presupuesto: " << this->presupuesto << endl;
	cout << "Interes Ecoturismo: " << this->ecoturismo << endl;
	cout << "Interes Gastronomia:" << this->gastronomia << endl;
	cout << "Interes historia: " << this->historia << endl;
	cout << "Valor de seguridad: " << this->seguridad << endl;
	cout << "Valor de Seguridad Camino: " << this->cSeguridad << endl;
	cout << "Calidad del camino: " << this->manejo << endl;
}

void cUsuario::update() {
	this->create();
}

string cUsuario::delete_() {
	return this->Nombre;
}

void cUsuario::salvar(fstream& outUsuario) {
	outUsuario << this->Nombre << endl;
	outUsuario << this->ID << endl;
	outUsuario << this->presupuesto << endl;
	outUsuario << this->ecoturismo << endl;
	outUsuario << this->gastronomia << endl;
	outUsuario << this->historia << endl;
	outUsuario << this->seguridad << endl;
	outUsuario << this->costo << endl;
	outUsuario << this->cSeguridad << endl;
	outUsuario << this->manejo << endl;
}

void cUsuario::cargar(fstream& inUsuario) {
	inUsuario >> this->Nombre;
	inUsuario >> this->ID;
	inUsuario >> this->presupuesto;
	inUsuario >> this->ecoturismo;
	inUsuario >> this->gastronomia;
	inUsuario >> this->historia;
	inUsuario >> this->seguridad;
	inUsuario >> this->costo;
	inUsuario >> this->cSeguridad;
	inUsuario >> this->manejo;
}

void cCiudades::create() {
	cCiudad aux;

	aux.create();
	aux.ID = contadorCiudad;
	contadorCiudad++;
	ciudades.push_back(aux);
}

void cCiudades::read() {
	for (int i = 0; i < ciudades.size(); i++) {
		ciudades[i].read();
	}
}

void cCiudades::update() {
	int id;
	cout << "Ingrese ID: ";
	cin >> id;

	for (int i = 0; i < ciudades.size(); i++) {
		if (ciudades[i].ID == id) {
			ciudades[i].update();
			return;
		}
	}
}

void cCiudades::delete_() {
	int id;
	cout << "Ingrese ID: ";
	cin >> id;
	for (int i = 0; i < ciudades.size(); i++) {
		if (ciudades[i].ID == id) {
			ciudades.erase(ciudades.begin() + i);
			return;
		}
	}
}

void cCiudades::salvar(fstream& outCiudad) {
	outCiudad << ciudades.size() << endl;
	for (int i = 0; i < ciudades.size(); i++) {
		ciudades[i].salvar(outCiudad);
	}
}

void cCiudades::cargar(fstream& inCiudad) {
	int size;
	cCiudad aux;
	inCiudad >> size;
	
	for (int i = 0; i < size; i++) {
		aux.cargar(inCiudad);
		ciudades.push_back(aux);
	}
}

void cCaminos::create() {
	cCamino aux;
	aux.ID = contadorCamino;
	aux.create();
	contadorCamino++;
	caminos.push_back(aux);
}

void cCaminos::read() {
	for (int i = 0; i < caminos.size(); i++) {
		caminos[i].read();
	}
}

void cCaminos::update() {
	int id;
	cout << "Ingrese la ID: ";
	cin >> id;

	for (int i = 0; i < caminos.size(); i++) {
		if (caminos[i].ID == id) {
			caminos[i].update();
			return;
		}
	}
}

void cCaminos::delete_() {
	int id;
	cout << "Ingrese la ID: ";
	cin >> id;

	for (int i = 0; i < caminos.size(); i++) {
		if (caminos[i].ID == id) {
			caminos.erase(caminos.begin() + i);
			return;
		}
	}
}

void cCaminos::salvar(fstream& outCamino) {
	outCamino << caminos.size() << endl;
	for (int i = 0; i < caminos.size(); i++) {
		caminos[i].salvar(outCamino);
	}
}

void cCaminos::cargar(fstream& inCamino) {
	int size;
	cCamino aux;
	inCamino >> size;

	for (int i = 0; i < size; i++) {
		aux.cargar(inCamino);
		caminos.push_back(aux);
	}
}

void cUsuarios::create() {
	cUsuario aux;
	aux.ID = contadorUsuario;
	aux.create();
	contadorUsuario++;

	usuarios.push_back(aux);
}

void cUsuarios::read() {
	for (int i = 0; i < usuarios.size(); i++) {
		usuarios[i].read();
	}
}

void cUsuarios::update() {
	int id;
	cout << "Ingrese la ID: ";
	cin >> id;

	for (int i = 0; i < usuarios.size(); i++) {
		if (usuarios[i].ID == id) {
			usuarios[i].update();
			return;
		}
	}
}

void cUsuarios::delete_() {
	int id;
	cout << "Ingrese la ID: ";
	cin >> id;

	for (int i = 0; i < usuarios.size(); i++) {
		if (usuarios[i].ID == id) {
			usuarios.erase(usuarios.begin() + i);
			return;
		}
	}
}

void cUsuarios::salvar(fstream& outUsuario) {
	
	outUsuario << usuarios.size() << endl;
	for (int i = 0; i < usuarios.size(); i++) {
		usuarios[i].salvar(outUsuario);
	}
}

void cUsuarios::cargar(fstream& inUsuario) {
	int size;
	cUsuario aux;
	inUsuario >> size;
	
	for (int i = 0; i < size; i++) {
		aux.cargar(inUsuario);
		usuarios.push_back(aux);
	}
}

int cUsuarios::buscarUsuario(int id) {
	for (int i = 0; i < usuarios.size(); i++) {
		if (usuarios[i].ID == id) {
			return i;
		}
	}
	return -1;
}