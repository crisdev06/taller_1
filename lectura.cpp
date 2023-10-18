#include <iostream>         // Incluye la biblioteca para la entrada y salida estándar
#include <fstream>          // Incluye la biblioteca para operaciones de archivo
#include <sstream>          // Incluye la biblioteca para el manejo de flujo de cadena
#include "Song.h"           // Incluye el archivo de encabezado de la clase Song
#include "ListaCircular.h"  // Incluye el archivo de encabezado de la clase ListaCircular
#include "Lectura.h"        // Incluye el archivo de encabezado de la función lectura

using namespace std;

// Función para cargar datos desde un archivo de texto a una lista circular doble.
// Parámetros:
// - playlist: Una referencia a un objeto de la clase ListaCircular donde se cargarán los datos.
void lectura(ListaCircular& playlist) {
    ifstream archivo;  // Declaración de un objeto ifstream para abrir y leer el archivo de texto.
    archivo.open("musica.txt");  // Abre el archivo "musica.txt" en modo lectura.

    if (archivo.fail()) {
        cout << "No se pudo abrir el archivo :(" << endl;  // Mensaje de error si no se puede abrir el archivo.
        exit(1);  // Finaliza el programa con un código de error.
    }

    string linea;
    while (getline(archivo, linea)) {
        stringstream input_ss(linea);
        string name, artist, viewsStr, duration;

        // Divide la línea en campos usando ';' como separador.
        getline(input_ss, name, ';');
        getline(input_ss, artist, ';');
        getline(input_ss, viewsStr, ';');
        getline(input_ss, duration, ';');

        // Convierte las cadenas a los tipos de datos adecuados.
        int views = stoi(viewsStr);
        int minutes = stoi(duration.substr(0, 2));
        int seconds = stoi(duration.substr(3, 2));
        int durationInSeconds = minutes * 60 + seconds;

        // Crea una canción y agrégala a la lista circular doble.
        Song song(name, artist, views, durationInSeconds);
        playlist.AddSongToList(song);
    }

    archivo.close();  // Cierra el archivo después de leer todos los datos.
}