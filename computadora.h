#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>
using namespace std;

class Computadora{
    private:
        string os;
        int ram;
        int rom;
        string procesador;
    public:
        Computadora();
        Computadora(const string &os, int ram, int rom, const string &procesador);
        void setOs(const string &c);
        string getOs();
        void setRam(int c);
        int getRam();
        void setRom(int c);
        int getRom();
        void setProcesador(const string &c);
        string getProcesador();

        friend ostream & operator<<(ostream &out, const Computadora &p){
        out << left;
        out << setw(20) << p.os;
        out << setw(6) << p.ram;
        out << setw(6) << p.rom;
        out << setw(15) << p.procesador;
        out << endl;
        return out;
    }
};

#endif