#include "Objetos.h"
#include "Grafo.h"
#include "grafoC.h"
#include "Objetos.h"
#include "padre.h"
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
    cCiudades ciudad_;
    cCaminos camino;
    cUsuarios usuario;


    inCiudad.open("Ciudades.txt", ios_base::in);
    ciudad_.cargar(inCiudad);
    inCiudad.close();
    inCamino.open("Caminos.txt", ios_base::in);
    camino.cargar(inCamino);
    //camino.read();
    inCamino.close();

    inUsuario.open("usuarios.txt", ios_base::in);
    usuario.cargar(inUsuario);
  /*  usuario.read();*/
    inUsuario.close();
 
    usuario.login(ciudad_, camino);

   
}
