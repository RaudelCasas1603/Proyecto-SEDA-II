#include <iostream>
#include <string.h>
#include "Grafo.h"
#include "grafoC.h"
using namespace std;

void CNodo_::InsertarAdelante(string nombre_, float fdata) {

    CNodo_* pNuevo = new(CNodo_);

    pNuevo->pSiguiente = this->pSiguiente;
    pNuevo->pAnterior = this;
    this->pSiguiente = pNuevo;
    this->pSiguiente->pSiguiente->pAnterior = pNuevo;
    pNuevo->nombre = nombre_;
    pNuevo->calificacion = fdata;


}

void cLista_::insertarinicio(string nombre_, float calificacion) {

    inicio.InsertarAdelante(nombre_, calificacion);

}
void cLista_::insertarfinal(string nombre_, float calificacion) {
    final.pAnterior->InsertarAdelante(nombre_, calificacion);
}

int cLista_::size() {
    CNodo_* p = inicio.pSiguiente;
    int contador = 0;
    while (p != &final) {

        contador++;
        p = p->pSiguiente;

    }
    return contador;
}

cLista_::cLista_() {

    inicio.pSiguiente = &final;
    inicio.pAnterior = NULL;
    final.pAnterior = &inicio;

}
cLista_::~cLista_() {

}
void cLista_::imprime() {
    int contador = 1;
    CNodo_* p = inicio.pSiguiente;
    if (p == &final) {
        cout << "lista Vacia" << endl;
    }
    else {
        while (p != &final)
        {
            cout << contador << ": ";
            cout << p->nombre << "->" << p->calificacion << endl;
            p = p->pSiguiente;
            contador++;

        }
    }
}
