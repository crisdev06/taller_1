#include "ListaCircular.h"
using namespace std;

// Implementación del constructor Node
ListaCircular::Node::Node(const Song& _song) : song(_song), next(nullptr), prev(nullptr) {}

// Implementación de la clase CircularDoublyLinkedList

ListaCircular::ListaCircular() : head(nullptr) {}
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
void ListaCircular::RemoveSong(const Song& song) {
    if (head == nullptr) {
        return; // La lista está vacía, no hay nada que eliminar
    }

    Node* current = head;
    do {
        if (current->song.name == song.name && current->song.artist == song.artist) {
            // Coincide con la canción que deseamos eliminar
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

void ListaCircular::DisplayPlaylist() const {
    if (head == nullptr) {
        cout << "La lista de reproducción está vacía." << std::endl;
        return;
    }
    Node* current = head;
    do {
        cout << "Nombre: " << current->song.name << std::endl;
        cout << "Artista: " << current->song.artist << std::endl;
        cout << "Reproducciones: " << current->song.views << std::endl;
        cout << "Duración en segundos: " << current->song.duration << std::endl;
        cout << "---------------------" << std::endl;

        current = current->next;
    } while (current != head);
}

