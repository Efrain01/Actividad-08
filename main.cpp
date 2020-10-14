#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){

    Computadora computadoras[5];
    string cadena;
    int entero;

    for (size_t i = 0; i < 5; i++){
        fflush(stdin);
        cout<<"Sistema Operativo: "; getline(cin,cadena);
        computadoras[i].setOs(cadena);
        cout<<"Memoria RAM:       "; cin>>entero;
        computadoras[i].setRam(entero);
        cout<<"Memoria ROM:       "; cin>>entero;
        computadoras[i].setRom(entero);
        fflush(stdin);
        cout<<"Procesador:        "; getline(cin,cadena);
        computadoras[i].setProcesador(cadena);
        cout<<endl<<endl;
    }
    
    Laboratorio lab;

    for (size_t i = 0; i < 5; i++){
        lab.agregarFinal(computadoras[i]);
    }

    lab.mostrar();

    system("pause");
    return 0;
}