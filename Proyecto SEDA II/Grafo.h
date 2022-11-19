#pragma once
#ifndef GRAFO_H
#define GRAFO_H
#include "padre.h"

class CNodo {
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
    void InsertarAdelante(string);
    string eliminarsiguiente();
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
    int eliminarinicio();
    int eliminarfinal();
    void insertar_lista_invertida(int fdata, string nombre_);
};

class CNodo_ {
public:
    CNodo_* pSiguiente;
    CNodo_* pAnterior;
    string nombre;
    float calificacion;
    friend class cLista_;
    friend class cLista;
    void InsertarAdelante(string, float);
    string eliminarsiguiente();
};



class cLista_ : public Objeto {
private:
    CNodo_ inicio, final;


public:
    friend class CNodo_;
    friend class cLista;
    void insertarinicio(string nombre_,float calificacion);
    void insertarfinal(string nombre_, float calificacion);
    int size();
    cLista_();
    ~cLista_();
    void imprime();
    string eliminarinicio();
    string eliminarfinal();

};

#endif // !GRAFO_H
