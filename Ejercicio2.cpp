#include <iostream>
#include <cmath>
using namespace std;
//Ejercicio2  Calcular el interes compuesto 12/05/25
int main()
{   float cantidadinvertir,interes;
    long capital;
    int tiempo;
    cout<<"Ingrese la cantidad:";
    cin>> cantidadinvertir;
    cout<<"Ingrese el interes mensual(en porcentaje):";
    cin>> interes;
    interes/=100;
    cout<<"Ingrese la cantidad de años:";
    cin>> tiempo;
    for(int i=1;i<=tiempo;++i)
    {
      capital=cantidadinvertir*pow(1+interes,i*12);
      cout<< "Año"<<i<<":" << capital <<endl;
    }

    return 0;
}
