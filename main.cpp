#include "Lectura.h"
#include "ListaCircular.h"
#include <iostream>


using namespace std;

int main (){
    ListaCircular playlist;
    lectura(playlist);
    int opc;
    

    cout<<"-----//MENU//-----"<<endl;
    cout<<"[1]Anterior"<< endl;
    cout<<"[2]Siguiente"<< endl;
    cout<<"[3]Agregar"<< endl;
    cout<<"[4]Eliminar"<< endl;
    cout<<"[5]Salir"<< endl;
    cout<<"Ingrese un numero: ";
    cin>>opc;

    switch (opc)
    {
    case 1:
        cout << "Seleccionaste la opción 1." << endl;
        break;
    case 2: cout << "Seleccionaste la opción Agregar." << endl;
        break;
    case 3: cout << "Seleccionaste la opción Agregar." << endl;
        break;
    case 4: 
        while (true) {
        int opcion;
        cout << "Menú Principal:" << endl;
        cout << "1. Agregar una nueva canción al sistema." << endl;
        cout << "2. Agregar una canción a la lista de reproducción." << endl;
        cout << "3. Salir." << endl;
        cout << "Seleccione un numero: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
            cout << "Seleccionaste la opción 1." << endl;
                break;
            case 2:
            cout << "Seleccionaste la opción 1." << endl;
                break;
            case 3:
            cout << "Seleccionaste la opción 1." << endl;
                break;
                
            default:
                cout << "Opción inválida. Intente de nuevo." << endl;
        }
    }

    return 0; 
    case 5: break;
    default:
    cout << "Opción inválida. Intente de nuevo." << endl;

    }
    return 0;
}