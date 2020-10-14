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
    for (size_t i = 0; i < cont; i++){
        Computadora &p = arreglo[i];
        cout<<"Sistema Operativo: "<<p.getOs()<<endl;
        cout<<"Memoria RAM:       "<<p.getRam()<<endl;
        cout<<"Memoria ROM:       "<<p.getRom()<<endl;
        cout<<"Procesador:        "<<p.getProcesador()<<endl;
        cout<<endl;
    }
    
}