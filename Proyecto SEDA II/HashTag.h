#pragma once
#ifndef HASHTAG_H
#define HASTAG_H

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


#endif // !HASHTAG_H
