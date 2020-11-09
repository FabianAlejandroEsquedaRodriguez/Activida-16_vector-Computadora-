#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <iostream>
#include <vector>

#include "Computadora.h"

using namespace std;

class Laboratorio{

    //Metodos
public:
    //Constructor
    Laboratorio();

    //Comportamientos
    void agregarComputadora(const Computadora &comp);//Va a recibir una computadora como referencia constante
    void mostrar();
    void respaldar_tabla();//IMPRIME LOS ATRIBUTOS EN FORMA DE TABLA
    void respaldar();//IMPRIME LOS ATRIBUTOS LINEA POR LINEA
    void recuperar(); 

    friend Laboratorio & operator << (Laboratorio &l, const Computadora &c){

        l.agregarComputadora(c);//Llamamos a la funcion y mandamos una computadora
        return l;
    }

private:
    vector<Computadora> computadoras;//Vector de computadoras
};

#endif //LABORATORIO_H