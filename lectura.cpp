#include <iostream>
#include <fstream>
#include <sstream>
#include "Song.h"
#include "ListaCircular.h"
#include "Lectura.h"

using namespace std;

void lectura(ListaCircular& playlist) {
    ifstream archivo;
    archivo.open("musica.txt");

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo :(" << endl;
        exit(1);
    }

    string linea;
    while (getline(archivo, linea)) {
        stringstream input_ss(linea);
        string name, artist, viewsStr, duration;

        // Divide la línea en campos usando ',' como separador
        getline(input_ss, name, ';');
        getline(input_ss, artist, ';');
        getline(input_ss, viewsStr, ';');
        getline(input_ss, duration, ';');

        // Convierte las cadenas a los tipos de datos adecuados
        int views = stoi(viewsStr);
        int minutes = stoi(duration.substr(0, 2));
        int seconds = stoi(duration.substr(3, 2));
        int durationInSeconds = minutes * 60 + seconds;

        // Crea una canción y agrégala a la lista circular doble
        Song song(name, artist, views, durationInSeconds);
        playlist.AddSongToList(song);
    }

    archivo.close();
}