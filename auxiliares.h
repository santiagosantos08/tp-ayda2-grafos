#ifndef AUXILIARES_H
#define AUXILIARES_H
#include "grafo.h"
#include <map>

const int rojo = -1;
const int blanco = 0;

void printLista(std::list<int> & camino){
	auto it = camino.begin();
	std::cout<<"Camino:";
	while(it != camino.end()){
		std::cout<<" -> "<<*it;
		it++;
	}
	std::cout<<" "<<std::endl;
}

void cargarVertices(grafo<int> & g,int base,int tope){
    for(int i = base; i <= tope; i++){
        g.aggVertice(i);
    }
}

void cargarColores(std::map<int,int> & c){
    c[1]=blanco;
    c[2]=blanco;
    c[3]=blanco;
    c[4]=blanco;
    c[5]=blanco;
    c[6]=rojo;
    c[7]=blanco;
    c[8]=blanco;
    c[9]=blanco;
    c[10]=blanco;
    c[11]=blanco;
    c[12]=blanco;
}

void cargarArcos(grafo<int> & g){
    //en este grafo grande se puede probar todos los casos
    g.aggArco(1,8,0);
    g.aggArco(1,3,0);
    g.aggArco(1,4,0);
    g.aggArco(4,1,0);
    g.aggArco(12,1,0);
    g.aggArco(12,5,0);
    g.aggArco(5,2,0);
    g.aggArco(1,6,0);
    g.aggArco(1,5,0);
    g.aggArco(6,7,0);
    g.aggArco(5,7,0);
    g.aggArco(2,7,0);
    g.aggArco(9,7,0);
    g.aggArco(7,10,0);
    g.aggArco(9,10,0);
    g.aggArco(3,9,0);
    g.aggArco(3,10,0);
    g.aggArco(10,11,0);
    g.aggArco(11,10,0);
    g.aggArco(11,3,0);
    g.aggArco(4,11,0);
    g.aggArco(12,11,0);
    g.aggArco(4,12,0);
    g.aggArco(6,12,0);
    g.aggArco(6,6,0);
    g.aggArco(2,8,0);
    g.aggArco(8,2,0);
    g.aggArco(5,6,0);
    g.aggArco(1,2,0);
    g.aggArco(3,4,0);
}

#endif