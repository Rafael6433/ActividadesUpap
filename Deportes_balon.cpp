#include <iostream>
using namespace std;
class Deportes_balon
{
    public:
    //Atributos
    string Deporte;
    int Tamano_balon;
    int Tiempo_juego;
    int Numero_jugadores;
    
    //Metodos
    void mostrarInformacion() {
        cout << "El deporte es: " << Deporte<< endl;
        cout << "Tipo de balon: " << Tamano_balon << "cm"<< endl;
        cout << "El total de jugadores son: " << Numero_jugadores << endl;
        cout << "El tiempo de juego: " << Tiempo_juego << "min"<< endl;
    }
    void Hay_tiempo_extra(int tiempoExtra) {
         Tiempo_juego = tiempoExtra;
    }
    void nueva_Informacion() {
         cout << "El tiempo de juego: " << Tiempo_juego << "min"<< endl;
         cout<< "Los jugadores estan cansados";
    }
   
};
int main()
{   cout<<"Deportes con balon\n";
    Deportes_balon Deportes;
    
    Deportes.Deporte="Futbol";
    Deportes.Tamano_balon= 70;
    Deportes.Numero_jugadores= 11;
    Deportes.Tiempo_juego=90;
    
    Deportes.mostrarInformacion();
    Deportes.Hay_tiempo_extra(120);
    
    cout << "\nDespues de el tiempo extra:\n";
    Deportes.nueva_Informacion();
    return 0;
}
