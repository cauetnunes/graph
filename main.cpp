#include "grafo_lista.hpp"
#include "grafo_matriz.hpp"
#include "bfs.hpp"
#include "dfs.hpp"
#include <fstream>

GrafoLista carregarGrafoDeArquivo(const std::string& nomeArquivo) {
    std::ifstream file(nomeArquivo);
    int n, u, v;
    file >> n;
    GrafoLista grafo(n);

    while (file >> u >> v) {
        grafo.adicionarAresta(u, v);
    }

    return grafo;
}

GrafoMatriz carregarGrafoMatrizDeArquivo(const std::string& nomeArquivo) {
    std::ifstream file(nomeArquivo);
    int n, u, v;
    file >> n;
    GrafoMatriz grafo(n);

    while (file >> u >> v) {
        grafo.adicionarAresta(u, v);
    }

    return grafo;
}

int main() {
    GrafoLista grafo = carregarGrafoDeArquivo("grafo.txt");

    std::cout << "BFS entre vértices 0 e 4:\n";
    bfs(grafo.obterLista(), 0, 4);

    std::cout << "\nDFS Iterativa a partir do vértice 0:\n";
    dfsIterativo(grafo.obterLista(), 0);

     std::cout << "\n--- Matriz de Adjacência ---\n";
    GrafoMatriz grafoMatriz = carregarGrafoMatrizDeArquivo("grafo.txt");
    const auto& matriz = grafoMatriz.obterMatriz();

    for (int i = 0; i < grafoMatriz.getNumVertices(); ++i) {
        for (int j = 0; j < grafoMatriz.getNumVertices(); ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    return 0;
}
