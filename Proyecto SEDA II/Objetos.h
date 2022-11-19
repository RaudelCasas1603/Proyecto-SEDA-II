#pragma once
#ifndef OBJETOS_H
#define OBJETOS_H

#include "Grafo.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


class cCiudad {
private:
	string nombre;
	int ID;
	string descripcion;
	float ecoturismo;
	float gastronomia;
	float historia;
	float seguridad;
	float costo;
public:
	friend class cUsuarios;
	friend class cCiudades;
	void create();
	void read();
	void update();
	string delete_();
	void cargar(fstream &outCiudad);
	void salvar(fstream& inCiudad);
};

class cCamino {
private:
	int ID;
	string origen;
	string destino;
	float distancia;
	float tiempo;
	float costo;
	float seguridad;
	float atractivo;
	float facilidad;
public:
	friend class cUsuarios;
	friend class cCaminos;
	void create();
	void read();
	void update();
	int delete_();
	void cargar(fstream& outCamino);
	void salvar(fstream& inCamino);
};

class cUsuario {
private:
	string Nombre;
	int ID;
	float presupuesto;
	float ecoturismo;
	float gastronomia;
	float historia;
	float seguridad;
	float costo;
	float cSeguridad;
	float manejo;
public:
	
	friend class cUsuarios;
	void create();
	void read();
	void update();
	string delete_();
	void cargar(fstream& outUsuario);
	void salvar(fstream& inUsuario);
};

class cCiudades {
public:
	vector<cCiudad>ciudades;
public:
	friend class cUsuarios;
	void create();
	void read();
	void update();
	void delete_();
	void cargar(fstream& outCiudad);
	void salvar(fstream& inCiudad);
};


class cCaminos {
private:
	vector<cCamino> caminos;
public:
	friend class cUsuarios;
	void create();
	void read();
	void update();
	void delete_();
	void cargar(fstream& outCamino);
	void salvar(fstream& inCamino);
};

class cUsuarios {
private:
	vector<cUsuario> usuarios;
public:
	friend class grafo;
	void create();
	void read();
	void update();
	void delete_();
	void login(cCiudades& ciud);
	void cargar(fstream& outUsuario);
	void salvar(fstream& inUsuario);
};



#endif // !OBJETOS_H
