#include <iostream>
#include <string>
#include <fstream>
#include "Comentarios.h"
using namespace std;

void hashTable::hash() {
	string aux, aux2;
	char letra;
	int posicion=0;
	bool flag = false;
	int i = 0;
	getchar();
	cout << "Ingrese comentario: ";
	getline(cin, aux);

	for (i = 0; i < aux.size(); i++) {
		if (aux[i] == '#') {
			break;
		}
	}

	while (aux[i] != ' ') {
		letra = aux[i];
		aux2.push_back(letra);
		i++;
	}

	cout << aux2;
	//cout << aux2;

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

