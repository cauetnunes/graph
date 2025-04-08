#include "grafo_matriz.hpp"

GrafoMatriz::GrafoMatriz(int vertices) {
    numVertices = vertices;
    matriz.resize(vertices, std::vector<int>(vertices, 0));
}

void GrafoMatriz::adicionarAresta(int u, int v) {
    matriz[u][v] = 1;

}

const std::vector<std::vector<int>>& GrafoMatriz::obterMatriz() const {
    return matriz;
}

int GrafoMatriz::getNumVertices() const {
    return numVertices;
}
