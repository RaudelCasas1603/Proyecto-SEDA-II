#include "Objetos.h"
#include <iostream>
#include <string>
#include <fstream>

fstream outCiudad;
fstream inCiudad;
fstream outCamino;
fstream inCamino;
fstream outUsuario;
fstream inUsuario;

using namespace std;
int main()
{
    cCiudades grafo;
    cCaminos camino;
    cUsuarios usuario;
    //inCiudad.open("Ciudades.txt", ios_base::in);
    //grafo.cargar(inCiudad);
    //inCiudad.close();
    ////grafo.create();
    //grafo.read();
    ////outCiudad.open("Ciudades.txt", ios_base::out);
    ////grafo.salvar(outCiudad);

    //inCamino.open("Caminos.txt", ios_base::in);
    //camino.cargar(inCamino);
    //inCamino.close();
    //camino.read();
    
    inUsuario.open("usuarios.txt", ios_base::in);
    usuario.cargar(inUsuario);
    inUsuario.close();
    usuario.read();

    cout << "Hola Mundo";
 
}
