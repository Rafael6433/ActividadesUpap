#include <iostream>
using namespace std;
//Ejercicio1 Perimetro y Area del triangulo 
int main()
{  float base,altura,perimetro,area;
    cout<<"Dame la base:";
    cin>>base;
    cout<<"Dame la altura:";
    cin>>altura;
    perimetro=base*3;
    area=(base*altura)/2;
    cout<<"El perimetro es:"<<perimetro;
    cout<<"\nEl area es:"<<area;
   

    return 0;
}
