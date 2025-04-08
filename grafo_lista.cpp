#include "grafo_lista.hpp"

GrafoLista::GrafoLista(int vertices) {
    numVertices = vertices;
    listaAdj.resize(vertices);
}

void GrafoLista::adicionarAresta(int u, int v) {
    listaAdj[u].push_back(v);

}

const std::vector<std::list<int>>& GrafoLista::obterLista() const {
    return listaAdj;
}

int GrafoLista::getNumVertices() const {
    return numVertices;
}
