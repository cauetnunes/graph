#ifndef GRAFO_LISTA_HPP
#define GRAFO_LISTA_HPP

#include <vector>
#include <list>
#include <iostream>

class GrafoLista {
public:
    GrafoLista(int vertices);
    void adicionarAresta(int u, int v);
    const std::vector<std::list<int>>& obterLista() const;
    int getNumVertices() const;

private:
    std::vector<std::list<int>> listaAdj;
    int numVertices;
};

#endif
