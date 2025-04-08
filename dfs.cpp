#include "dfs.hpp"

void dfsIterativo(const std::vector<std::list<int>>& grafo, int inicio) {
    int n = grafo.size();
    std::vector<bool> visitado(n, false);
    std::stack<int> pilha;

    pilha.push(inicio);

    while (!pilha.empty()) {
        int u = pilha.top();
        pilha.pop();

        if (!visitado[u]) {
            visitado[u] = true;
            std::cout << u << " ";
        }

        for (auto it = grafo[u].rbegin(); it != grafo[u].rend(); ++it) {
            if (!visitado[*it]) {
                pilha.push(*it);
            }
        }
    }
    std::cout << "\n";
}
