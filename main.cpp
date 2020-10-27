#include "arregloDinamico.h"

int main (){

    ArregloDinamico arreglo;

    arreglo.insertar_final("cadena 1");
    arreglo.insertar_final("cadena 2");
    arreglo.insertar_final("cadena 3");
    arreglo.insertar_final("cadena 4");
    arreglo.insertar_final("cadena 5");
    arreglo.insertar_final("cadena 6");
    arreglo.insertar_final("cadena 7");
    arreglo.insertar_final("cadena 8");
    cout<<endl<<"Cadenas insertadas al final: "<<endl<<endl;
    for(size_t x(0); x<arreglo.size(); x++){
        cout<<arreglo[x]<<endl;
    }
    arreglo.insertar_inicio("cadena 9");
    arreglo.insertar_inicio("cadena 10");
    cout<<endl<<"Cadenas insertadas al inicio: "<<endl<<endl;
    for(size_t x(0); x<arreglo.size(); x++){
        cout<<arreglo[x]<<endl;
    }

    cout<<endl<<endl;
    return 0;
}