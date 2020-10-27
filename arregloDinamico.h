#ifndef ARREGLODINAMICO_H
#define ARREGLODINAMICO_H

#include <iostream>

using namespace std;

class ArregloDinamico{

    private:
        string *arreglo;
        const static int MAX = 5;
        size_t cont;
        size_t tam;
        void expandir();
    public:
        ArregloDinamico();
        ~ArregloDinamico();
        void insertar_final (const string &value);
        void insertar_inicio (const string &value);
        string operator[] (size_t p){
            return arreglo[p];
        }
        size_t size();

};


#endif