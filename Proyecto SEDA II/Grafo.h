#pragma once
#ifndef GRAFO_H
#define GRAFO_H
#include "padre.h"
#include "grafoC.h"

class CNodo:public Objeto {
public:
    CNodo* pSiguiente;
    CNodo* pAnterior;
    string identificador;
    float calificacion;
    cLista_ dato;

public:
    friend class cLista_;
    friend class cLista;
    friend class cNodo;
    void InsertarAdelante(float fdata, string nombre_);
};



class cLista : public Objeto {
private:
    CNodo inicio, final;


public:
    void insertarinicio(float fdata, string nombre_, float fdata2, string nombre2);
    void insertarfinal(float fdata, string nombre_, float fdata2, string nombre2);
    int size();
    cLista();
    ~cLista();
    void imprime();

    void insertar_lista_invertida(float fdata, string nombre_, float fdata2, string nombre2);
};


#endif // !GRAFO_H
