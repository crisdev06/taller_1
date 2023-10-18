
#include <iostream>    // Incluye la biblioteca para la entrada y salida estándar
#include <string>      // Incluye la biblioteca para el manejo de cadenas de caracteres
#include "Song.h"      // Incluye el archivo de encabezado de la clase Song

using namespace std;

// Constructor de la clase Song.
// Inicializa los miembros de la clase con los valores proporcionados.
// Parámetros:
// - _name: Nombre de la canción.
// - _artist: Nombre del artista o artistas.
// - _views: Cantidad de reproducciones.
// - _duration: Duración de la canción en segundos.
Song::Song(const string& _name, const string& _artist, int _views, int _duration)
    : name(_name), artist(_artist), views(_views), duration(_duration) {}