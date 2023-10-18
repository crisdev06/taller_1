#include "ListaCircular.h"
using namespace std;

// Implementación del constructor Node
ListaCircular::Node::Node(const Song& _song) : song(_song), next(nullptr), prev(nullptr) {}
// Implementación de la clase ListaCircular
// Constructor de la clase ListaCircular que inicializa el puntero "head" como nullptr.
ListaCircular::ListaCircular() : head(nullptr) {}
// Destructor de la clase ListaCircular que libera la memoria de todos los nodos de la lista.
ListaCircular::~ListaCircular() {
    while (head != nullptr) {
        Node* temp = head->next;
        if (temp == head) {
            delete head;
            head = nullptr;
        } else {
            head->prev = temp->prev;
            temp->prev->next = head;
            delete temp;
        }
    }
}
// Función para agregar una canción a la lista circular doble.
// Parámetros:
// - song: Una referencia a un objeto de la clase Song que se va a agregar.
void ListaCircular::AddSongToList(const Song& song) {
    Node* newNode = new Node(song);
    if (head == nullptr) {
        newNode->next = newNode;
        newNode->prev = newNode;
        head = newNode;
    } else {
        newNode->next = head;
        newNode->prev = head->prev;
        head->prev->next = newNode;
        head->prev = newNode;
    }
}
// Función para eliminar una canción de la lista circular doble.
// Parámetros:
// - song: Una referencia a un objeto de la clase Song que se va a eliminar.
void ListaCircular::RemoveSong(const Song& song) {
    if (head == nullptr) {
        return; // La lista está vacía, no se puede eliminar nada.
    }
    Node* current = head;
    do {
        if (current->song.name == song.name && current->song.artist == song.artist) {
            
            if (current == head) {
                head = current->next;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            return;
        }
        current = current->next;
    } while (current != head);
}
// Función para mostrar la lista de reproducción en la consola.
void ListaCircular::DisplayPlaylist() const {
    if (head == nullptr) {
        cout << "La lista de reproducción está vacía." << endl;
        return;
    }
    Node* current = head;
    do {
        cout << "Nombre: " << current->song.name << endl;
        cout << "Artista: " << current->song.artist << endl;
        cout << "Reproducciones: " << current->song.views << endl;
        cout << "Duración en segundos: " << current->song.duration << endl;
        cout << "---------------------" << endl;

        current = current->next;
    } while (current != head);

    void ListaCircular::PlayNextSong() {
    if (head == nullptr) {
        return; // No hay canciones en la lista
    }
    head = head->next; // Cambia la referencia de nodo cabecera a la siguiente canción
}
void ListaCircular::PlayPreviousSong() {
    if (head == nullptr) {
        return; // No hay canciones en la lista
    }
    head = head->prev; // Cambia la referencia de nodo cabecera a la canción anterior
}
}