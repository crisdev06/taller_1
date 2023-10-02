#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <iostream>
#include <fstream>
#include <sstream>
#include "Song.h"

class ListaCircular {
private:
    class Node {
    public:
        Song song;
        Node* next;
        Node* prev;
        
        Node(const Song& _song);
    };

    Node* head;
    Node* tail;

    public:
    ListaCircular();
    ~ListaCircular();

    void AddSongToList(const Song& song);
    void RemoveSong(const Song& song);
    void DisplayPlaylist() const;
    };
    #endif