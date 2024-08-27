#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int dest;
	int weight;
	struct Node* next;
} Node;

typedef struct List {
	Node *head;
} List;

typedef struct Graph {
	int V;
	List* array;
} Graph;

Node* newAdjListNode(int dest, int weight) {
	Node* newNode = (Node*) malloc(sizeof(Node));
	newNode->dest = dest;
	newNode->weight = weight;
	newNode->next = NULL;
	return newNode;
}

Graph* createGraph(int V) {
	Graph* graph = (Graph*) malloc(sizeof(Graph));
	graph->V = V;
	graph->array = (List*) malloc(V * sizeof(List));
	for (int i = 0; i < V; ++i)
		graph->array[i].head = NULL;
	return graph;
}

void addEdge(Graph* graph, int src, int dest, int weight) {
	Node* newNode = newAdjListNode(dest, weight);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;
}

void printGraph(Graph* graph) {
	char vertices[] = {'P', 'Q', 'R', 'S', 'T', 'U'};
	for (int v = 0; v < graph->V; ++v) {
		Node* pCrawl = graph->array[v].head;
		printf("\n Adjacency list of vertex %c\n head ", vertices[v]);
		while (pCrawl) {
			printf("-> %c(%d)", vertices[pCrawl->dest], pCrawl->weight);
			pCrawl = pCrawl->next;
		}
		printf("\n");
	}
}

int main() {
	int V = 6;
	Graph* graph = createGraph(V);
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