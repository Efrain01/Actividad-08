#include "laboratorio.h"

Laboratorio::Laboratorio(){
    cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &p){
    if(cont<5){
        arreglo[cont] = p;
        cont++;
    }else{
        cout<<"Arreglo lleno."<<endl;
    }
}

void Laboratorio::mostrar(){
    cout << left;
    cout <<setw(20) << "Sistema Operativo";
    cout <<setw(6) << "RAM";
    cout <<setw(6) << "ROM";
    cout <<setw(15) << "Procesador";
    cout << endl;
    for (size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout<< p;
        cout<<endl;
    }

    
    
}