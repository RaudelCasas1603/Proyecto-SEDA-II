#pragma once
#ifndef COMENTARIOS_H
#define COMENTARIOS_H

#include <iostream>
#include <string>
#include <fstream>
#include <set>
using namespace std;

class hashTable {
private:
	int contador = 0;
	multiset<string, greater<string>> tabla[10];
	set <string> ::iterator it;
public:
	int sumatoria();
	void hash();
	void imprimir();
	void buscar();
	void cargar(fstream& in);
	void salvar(fstream& out);

};


#endif // !COMENTARIOS_H
