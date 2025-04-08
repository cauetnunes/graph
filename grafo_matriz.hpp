#ifndef GRAFO_MATRIZ_HPP
#define GRAFO_MATRIZ_HPP

#include <vector>
#include <iostream>

class GrafoMatriz {
public:
    GrafoMatriz(int vertices);
    void adicionarAresta(int u, int v);
    const std::vector<std::vector<int>>& obterMatriz() const;
    int getNumVertices() const;

private:
    std::vector<std::vector<int>> matriz;
    int numVertices;
};

#endif
