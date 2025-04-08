#include "bfs.hpp"

void bfs(const std::vector<std::list<int>>& grafo, int s, int t) {
    int n = grafo.size();
    std::vector<bool> visitado(n, false);
    std::vector<int> pai(n, -1);
    std::queue<int> fila;

    visitado[s] = true;
    fila.push(s);

    while (!fila.empty()) {
        int u = fila.front(); fila.pop();

        for (int v : grafo[u]) {
            if (!visitado[v]) {
                visitado[v] = true;
                pai[v] = u;
                fila.push(v);
            }
        }
    }

    if (!visitado[t]) {
        std::cout << "Não há caminho entre os vértices.\n";
        return;
    }

    std::vector<int> caminho;
    for (int v = t; v != -1; v = pai[v]) caminho.push_back(v);

    std::cout << "Caminho: ";
    for (auto it = caminho.rbegin(); it != caminho.rend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << "\n";
}
