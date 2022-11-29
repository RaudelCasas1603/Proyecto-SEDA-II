#include "Objetos.h"
#include "Grafo.h"
#include "padre.h"
#include <iostream>
#include <string>

using namespace std;


void CNodo::InsertarAdelante(float fdata, string nombre_) {

    CNodo* pNuevo = new(CNodo);

    pNuevo->pSiguiente = this->pSiguiente;
    pNuevo->pAnterior = this;
    this->pSiguiente = pNuevo;
    this->pSiguiente->pSiguiente->pAnterior = pNuevo;
    pNuevo->identificador = nombre_;
    pNuevo->calificacion = fdata;
}

void cLista::insertarinicio(float fdata, string nombre_, float fdata2, string nombre2, float distancia) {

    inicio.InsertarAdelante(fdata,nombre_);

}
void cLista::insertarfinal(float fdata, string nombre_, float fdata2, string nombre2, float distancia) {
    final.pAnterior->InsertarAdelante(fdata,nombre_);
    final.pAnterior->dato.insertarfinal(nombre2,fdata2,distancia);
}


int cLista::size() {
    CNodo* p = inicio.pSiguiente;
    int contador = 0;
    while (p != &final) {

        contador++;
        p = p->pSiguiente;

    }
    return contador;
}

cLista::cLista() {

    inicio.pSiguiente = &final;
    inicio.pAnterior = NULL;
    final.pAnterior = &inicio;

}
cLista::~cLista() {

}
void cLista::imprime() {
    CNodo* p = inicio.pSiguiente;
    if (p == &final) {
        cout << "lista Vacia" << endl;
    }
    else {
        while (p != &final)
        {
            cout << p->identificador << " -> " << p->calificacion << ":" << endl;
            p->dato.imprime();
            cout << endl;
            p = p->pSiguiente;

        }
    }
}


void  cLista::insertar_lista_invertida(float fdata, string nombre_, float fdata2, string nombre2, float distancia) {
    CNodo* pActual = &inicio;
    bool flag = false;
    while (pActual != &final) {
        if (pActual->identificador == nombre_) {
            pActual->dato.insertarfinal(nombre2,fdata2,distancia);
            flag = true;
        }
        pActual = pActual->pSiguiente;
    }

    if (flag == false) {
        this->insertarfinal(fdata, nombre_,fdata2,nombre2,distancia);
    }
}

void cLista::buscarDestino() {
    CNodo* pActual = &inicio;
    float min=0;
    CNodo* mejor=nullptr;

    while (pActual != &final) {
        if (pActual->calificacion > min) {
            mejor = pActual;        
        }
        pActual = pActual->pSiguiente;
    }

    cout << "Su destino ideal es: ";
    cout << mejor->identificador << endl;
    cout << mejor->calificacion<<endl;
}


////////////////

