#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"

class Laboratorio{
    private:
        Computadora arreglo[5];
        size_t cont;
    public:
        Laboratorio();
        void agregarFinal(const Computadora &p);
        void mostrar();

    friend Laboratorio& operator<<(Laboratorio &v, const Computadora &p){
        v.agregarFinal(p);
        return v;
    }

};

#endif