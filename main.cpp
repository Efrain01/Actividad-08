#include <iostream>
#include "laboratorio.h"

using namespace std;

int main(){
    
    Computadora computadoras[5];
    string cadena;
    int entero;

    for (size_t i = 0; i < 5; i++){
        fflush(stdin);
        cin>>computadoras[i];
        cout<<endl<<endl;
    }
    
    Laboratorio lab;

    for (size_t i = 0; i < 5; i++){
        lab <<computadoras[i];
    }

    lab.mostrar();
    lab.respaldar_tabla();
    lab.respaldar();
    
    system("pause");
    system("cls");

    cout<<"Mostrando datos recuperados"<<endl<<endl;

    Laboratorio l;
    l.recuperar();
    l.mostrar();

    system("pause");
    return 0;
}