#include "laboratorio.h"
#include <fstream>

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

void Laboratorio::respaldar_tabla(){
    ofstream archivo("computadora_tabla.txt");
    if(archivo.is_open()){
        archivo << left;
        archivo <<setw(20) << "Sistema Operativo";
        archivo <<setw(6) << "RAM";
        archivo <<setw(6) << "ROM";
        archivo <<setw(15) << "Procesador";
        archivo << endl;
        for (size_t i = 0; i < cont; i++){
            Computadora &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}

void Laboratorio::respaldar(){
    ofstream archivo("computadora.txt");
    if(archivo.is_open()){
        for (size_t i = 0; i < cont; i++){
            Computadora &p = arreglo[i];
            archivo << p.getOs()<<endl;
            archivo << p.getRam()<<endl;
            archivo << p.getRom()<<endl;
            archivo << p.getProcesador()<<endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar(){
    ifstream archivo("computadora.txt");
    if(archivo.is_open()){
        string temp;
        int ram, rom;
        Computadora p;

        while (true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            p.setOs(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            p.setRam(ram);

            getline(archivo, temp);
            rom = stoi(temp);
            p.setRom(rom);

            getline(archivo, temp);
            p.setProcesador(temp);

            agregarFinal(p);
        }
        
    }
    archivo.close();
}