#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string caracter;
    string estado="s1";
    cout << "Ingresa una cadena de caracteres: ";
    cin >> caracter;
    int longitud = caracter.length();
    cout << "Longitud de la cadena ingresada: " << longitud << endl;

    for(int i = 0; i < longitud; i++) {
    	
        if (caracter[i] == 'a'&&estado!="s3"&&estado!="s4") {
            estado = "s2";
            cout<< estado<< endl;
        } else if (caracter[i] == 'b' && estado == "s2") {
            estado = "s1";
            cout<< estado<< endl;
        } else if (caracter[i] == 'c' && estado == "s2") {
            estado = "s4";
            cout<< estado<< endl;
        } else if (caracter[i] == 'd' && estado == "s4") {
            estado = "s3";
            cout<< estado<< endl;
        } else if (caracter[i] == 'b' && estado == "s3") {
            estado = "s4";
            cout<< estado<< endl;
        } else if (caracter[i] == 'a' && estado == "s3") {
            estado = "s1";
            cout<< estado<< endl;
        }
        else
        {
		  cout<< estado<< endl;
		}
		}
		
    

    return 0;
}


