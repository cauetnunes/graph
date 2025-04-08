all: main

main: main.cpp bfs.cpp dfs.cpp grafo_lista.cpp grafo_matriz.cpp 
	g++ -o main main.cpp bfs.cpp dfs.cpp grafo_lista.cpp grafo_matriz.cpp -std=c++11

run:
	./main
