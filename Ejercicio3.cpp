#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {  
    int num_alumnos;
    float calificacion1, calificacion2, promedio,suma_promedios=0,promedio_general;
    string materia1, materia2, nombre_alumno;
    vector<string> nombres, materias1, materias2, observaciones1, observaciones2;
    vector<float> calificaciones1, calificaciones2, promedios;

    cout << "Dame la cantidad de alumnos: ";
    cin >> num_alumnos;

    for (int i = 0; i < num_alumnos; ++i) {
        cout << "\nDame el nombre del alumno: ";
        cin >> nombre_alumno;
        nombres.push_back(nombre_alumno);

        cout << "Nombre de la primera Materia: ";
        cin >> materia1;
        materias1.push_back(materia1);

        cout << "Nombre de la segunda Materia: ";
        cin >> materia2;
        materias2.push_back(materia2);

        cout << "Calificación de la materia " << materia1 << ": ";
        cin >> calificacion1;
        calificaciones1.push_back(calificacion1);

        cout << "Calificación de la materia " << materia2 << ": ";
        cin >> calificacion2;
        calificaciones2.push_back(calificacion2);

        promedio = (calificacion1 + calificacion2) / 2;
        promedios.push_back(promedio);
        suma_promedios+=promedio;

        observaciones1.push_back((calificacion1 >= 7.0) ? "Aprobado" : "Reprobado");
        observaciones2.push_back((calificacion2 >= 7.0) ? "Aprobado" : "Reprobado");

        cout << "El promedio del alumno es: " << promedio << endl;
    }

    promedio_general = suma_promedios / num_alumnos;

    cout << "\n\n       Reporte de materias cursadas" << endl;
    cout << "Nombre       Materia      Calif.Final       Observacion" << endl;
    
    for (int i = 0; i < num_alumnos; ++i) {
        cout << nombres[i] << "        " << materias1[i] << "      " << calificaciones1[i] << "      " << observaciones1[i] << endl;
        cout << nombres[i] << "        " << materias2[i] << "      " << calificaciones2[i] << "      " << observaciones2[i] << endl;
        
    }
    cout<<"El promedio general de los alumnos es:"<<promedio_general;
    return 0;
}
