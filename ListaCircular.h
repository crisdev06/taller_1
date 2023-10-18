#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

#include <iostream>         // Incluye la biblioteca para la entrada y salida estándar
#include <fstream>          // Incluye la biblioteca para operaciones de archivo
#include <sstream>          // Incluye la biblioteca para el manejo de flujo de cadena
#include "Song.h"           // Incluye el archivo de encabezado de la clase Song

class ListaCircular {
private:
    // Clase interna Node para representar los nodos de la lista circular
    class Node {
    public:
        Song song;    // Almacena la canción asociada al nodo
        Node* next;   // Puntero al siguiente nodo en la lista
        Node* prev;   // Puntero al nodo anterior en la lista
        
        // Constructor de la clase Node que inicializa los miembros.
        // Parámetros:
        // - _song: Una referencia a un objeto de la clase Song asociado al nodo.
        Node(const Song& _song);
    };

    Node* head;  // Puntero al nodo inicial de la lista circular

public:
    // Constructor de la clase ListaCircular que inicializa los punteros de la lista como nullptr.
    ListaCircular();

    // Destructor de la clase ListaCircular que libera la memoria de todos los nodos.
    ~ListaCircular();

    // Función para agregar una canción a la lista circular doble.
    // Parámetros:
    // - song: Una referencia a un objeto de la clase Song que se va a agregar.
    void AddSongToList(const Song& song);

    // Función para eliminar una canción de la lista circular doble.
    // Parámetros:
    // - song: Una referencia a un objeto de la clase Song que se va a eliminar.
    void RemoveSong(const Song& song);

    // Función para mostrar la lista de reproducción en la consola.
    void DisplayPlaylist() const;
    void PlayNextSong();
    void PlayPreviousSong();
};

#endif