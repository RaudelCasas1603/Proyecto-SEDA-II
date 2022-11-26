#include "HashTag.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void hashTable::hash() {
	string aux, aux2;
	int i = 0, posicion;
	bool flag = false;
	cout << "Ingrese Comentario: ";
	getline(cin, aux);

	while (aux[i]!='#') {	//Encotramos el HashTag 
		i++;
	}

	while (aux[i] != ' ') {	//Leemos el Hash 
		aux2.push_back(aux[i]);
		i++;
	}

	posicion = aux2.size() % 10;

	tabla[posicion].insert(aux);
	

}

void hashTable::imprimir() {
	for (int i = 0; i < 10; i++) {
		if (tabla[i].size() > 0) {
			cout << "Tabla [" << i + 1 << "]" << endl;
			for (it = tabla[i].begin(); it != tabla[i].end(); it++) {
				cout << *it << endl;
			}
			cout << endl;
		}
	}
}

void hashTable::buscar() {
	string aux;
	int pos;
	cout << "Ingrese el Hastag: ";
	getline(cin, aux);

	pos = aux.size() % 10;

	for (it = tabla[pos].begin(); it != tabla[pos].end(); it++) {
		cout << *it << endl;
	}
}

int hashTable::sumatoria() {
	int suma = 0;
	for (int i = 0; i < 10; i++) {
		if (tabla[i].size() > 0) {
			suma++;
		}
	}

	return suma;
}

void hashTable::salvar(fstream& out) {
	int tamanio;
	contador = sumatoria();
	if (contador > 0) {
		out << contador << endl;
		for (int i = 0; i < 10; i++) {
			tamanio = tabla[i].size();
			if (tabla[i].size() > 0) {
				out << i << endl;
				out << tamanio << endl;
				for (it = tabla[i].begin(); it != tabla[i].end(); it++) {
					out << *it << endl;
				}
			}
		}
	}
}

void hashTable::cargar(fstream& in) {
	int pos, vueltas, tamanio = 0;
	string comentario;

	in.open("HashTable.txt", ios_base::in);

	in >> tamanio;
	for (int j = 0; j < tamanio; j++) {
		in >> pos;
		in >> vueltas;
		for (int i = 0; i < vueltas; i++) {
			in >> comentario;
			tabla[pos].insert(comentario);
		}
	}
	in.close();
}

