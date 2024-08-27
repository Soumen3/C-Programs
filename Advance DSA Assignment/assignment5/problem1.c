#include <stdio.h>
#define VERTICES 6

void addEdge(int graph[VERTICES][VERTICES], int src, int dest, int weight) {
	graph[src][dest] = weight;
	graph[dest][src] = weight;
}

void printGraph(int graph[VERTICES][VERTICES]) {
	char vertices[] = {'P', 'Q', 'R', 'S', 'T', 'U'};
	for (int i = 0; i < VERTICES; i++) {
		printf("%c: ", vertices[i]);
		for (int j = 0; j < VERTICES; j++) {
			printf("%d ", graph[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int graph[VERTICES][VERTICES] = {0};

	// P=0, Q=1, R=2, S=3, T=4, U=5
	addEdge(graph, 0, 1, 1); // P-Q
	addEdge(graph, 1, 2, 1); // P-R
	addEdge(graph, 2, 5, 1); // R-U
	addEdge(graph, 3, 4, 3); // S-T
	addEdge(graph, 4, 5, 2); // T-U
	addEdge(graph, 0, 4, 7); // P-T
	addEdge(graph, 0, 3, 6); // P-S
	addEdge(graph, 1, 3, 4); // Q-S
	addEdge(graph, 2, 3, 2); // R-S
	addEdge(graph, 3, 5, 2); // S-U


	printGraph(graph);

	return 0;
}