#include "arregloDinamico.h"

ArregloDinamico::ArregloDinamico(){
    arreglo = new string [MAX];
    cont = 0;
    tam=MAX;
}
ArregloDinamico::~ArregloDinamico(){

    delete[] arreglo;
}
void ArregloDinamico::expandir(){

    string *nuevo = new string [tam+MAX];
    tam=tam+MAX;
    for(size_t y = 0; y < cont; y++){
        nuevo[y]=arreglo[y];
    }
    delete[] arreglo;
    arreglo = nuevo;
}
size_t ArregloDinamico::size(){
    return cont;
}
void ArregloDinamico::insertar_final (const string &value){
    
    if(cont == tam){
        expandir();
    }
    arreglo[cont] = value;
    cont++;
}

void ArregloDinamico::insertar_inicio (const string &value){

    if(cont == tam){
        expandir();
    }
    for(size_t x = cont; x > 0; x--){
        arreglo[x] = arreglo[x-1];
    }
    arreglo[0] = value;
    cont++;
}