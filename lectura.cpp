#include <iostream>
#include <sstream> 
#include <fstream>
#include "lectura.h"

using namespace std;

void lectura(){

ifstream archivo;

archivo.open("musica.txt");

if (archivo.fail()) 
    {
        cout << "No se pudo abrir el archivo :(" << endl;
        exit(1);
    }
string linea;
while (!archivo.eof())
      {
        getline(archivo, linea);
    }

archivo.close();
}