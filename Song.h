#ifndef SONG_H
#define SONG_H

#include <string>       // Incluye la biblioteca para el manejo de cadenas de caracteres
#include <iostream>     // Incluye la biblioteca para la entrada y salida estándar
#include <fstream>      // Incluye la biblioteca para operaciones de archivo
#include <sstream>      // Incluye la biblioteca para el manejo de flujo de cadena
using namespace std;    // Permite utilizar las funciones y objetos estándar de C++ sin un prefijo

// Declaración de la clase Song
class Song
{
public:
    string name;        // Nombre de la canción
    string artist;      // Nombre del artista o artistas
    int views;          // Cantidad de reproducciones
    int duration;       // Duración de la canción en segundos

    // Constructor de la clase Song que inicializa sus miembros
    Song(const string& _name, const string& _artist, int _views, int _duration);
};

#endif