#pragma once
#ifndef GRAFOC_H
#define GRAFOC_H

#include "padre.h"
#include <string>
using namespace std;

class CNodo_ :public Objeto {
public:
    CNodo_* pSiguiente;
    CNodo_* pAnterior;
    string nombre;
    float calificacion;
    friend class cLista_;
    friend class cLista;
    void InsertarAdelante(string, float);

};

class cLista_ : public Objeto {
private:
    CNodo_ inicio, final;
public:
    friend class CNodo_;
    friend class cLista;
    void insertarinicio(string nombre_, float calificacion);
    void insertarfinal(string nombre_, float calificacion);
    int size();
    cLista_();
    ~cLista_();
    void imprime();


};

#endif // !GRAFOC_H

