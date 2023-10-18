#include "Lectura.h"
#include "ListaCircular.h"
#include <iostream>


using namespace std;

int main (){
    ListaCircular playlist;
    lectura(playlist);
    int opc;
    bool condicion = true;
    do
    {
    playlist.DisplayPlaylist();
    cout<<"-----//MENU//-----"<<endl;
    cout<<"[1]Anterior"<< endl;
    cout<<"[2]Siguiente"<< endl;
    cout<<"[3]Eliminar"<< endl;
    cout<<"[4]Agregar"<< endl;
    cout<<"[5]Salir"<< endl;
    cout<<"Ingrese un numero: ";
    cin>>opc;
    switch (opc)
    {
    case 1:
        playlist.PlayPreviousSong(); // Cambia a la canción anterior
        playlist.DisplayPlaylist();
        break;
    case 2: 
        playlist.PlayNextSong(); // Cambia a la canción siguiente
        playlist.DisplayPlaylist();
        break;
    case 3:
    {
        string songName, artistName;
        int views,duration:
        cout << "Ingrese el nombre de la canción que desea eliminar: ";
        cin.ignore();
        getline(cin, songName);
        cout << "Ingrese el nombre del artista de la canción: ";
        getline(cin, artistName);
        cout << "Ingrese la cantidad de views: ";
        getline(cin, views);
        cout << "Ingrese la duracion: ";
        getline(cin, duration);
        Song song(songName, artistName, views, duration);
        playlist.RemoveSong(song);

        cout << "Canción eliminada exitosamente." << endl;
        break;
    }
   
    case 4: 
    {
        string nameNew;
        cout << "Ingrese el nombre de la cancion: ";
        cin >> nameNew;
        string artisNew;
        cout << "Ingrese el nombre del cantante: ";
        cin >> artisNew;
        int viewNew;
        cout << "Ingrese las visualizaciones de la cancion: ";
        cin >> viewNew;
        int durationNew;
       cout << "Ingrese la duracion de la cancion: ";
        cin >> durationNew;
        Song song(nameNew, artisNew, viewNew, durationNew);
        playlist.AddSongToList(song);
        break;
    }

    return 0; 
    case 5: 
    condicion=false
    break;
    default:
    cout << "Opción inválida. Intente de nuevo." << endl;
    } while (condicion == false);
    }
    return 0;
}