#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int dest;
	struct Node* next;
} Node;

typedef struct List {
	Node *head;
} List;

typedef struct Graph {
	int V;
	List* array;
} Graph;

Node* newAdjListNode(int dest) {
	Node* newNode = (Node*) malloc(sizeof(Node));
	newNode->dest = dest;
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

void addEdge(Graph* graph, int src, int dest) {
	Node* newNode = newAdjListNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;
}

int countVertices(Graph* graph) {
	return graph->V;
}

int countEdges(Graph* graph) {
	int count = 0;
	for (int v = 0; v < graph->V; ++v) {
		Node* pCrawl = graph->array[v].head;
		while (pCrawl) {
			count++;
			pCrawl = pCrawl->next;
		}
	}
	return count;
}

int isComplete(Graph* graph) {
	int edgeCount = countEdges(graph);
	int vertexCount = countVertices(graph);
	if (edgeCount == vertexCount * (vertexCount - 1) / 2)
		return 1;
	else
		return 0;
}


bool isCyclicUtil(Graph* graph, int v, bool visited[], int parent) {
	visited[v] = true;
	Node* node;

	for(node = graph->array[v].head; node != NULL; node = node->next) {
		int adjacent = node->dest;

		if (!visited[adjacent]) {
		   if (isCyclicUtil(graph, adjacent, visited, v))
			  return true;
		}
		else if (adjacent != parent)
		   return true;
	}
	return false;
}

bool isCyclic(Graph* graph) {
	bool *visited = (bool *) malloc(graph->V * sizeof(bool));
	for (int i = 0; i < graph->V; i++)
		visited[i] = false;

	for (int u = 0; u < graph->V; u++)
		if (!visited[u])
		  if (isCyclicUtil(graph, u, visited, -1))
			 return true;

	return false;
}

void countOddEvenVertices(Graph* graph) {
	int oddCount = 0, evenCount = 0;

	for (int v = 0; v < graph->V; ++v) {
		Node* pCrawl = graph->array[v].head;
		int count = 0;
		while (pCrawl) {
			count++;
			pCrawl = pCrawl->next;
		}
		if (count % 2 == 0)
			evenCount++;
		else
			oddCount++;
	}

	printf("Number of vertices with odd degree: %d\n", oddCount);
	printf("Number of vertices with even degree: %d\n", evenCount);
}

int main() {
	int V = 5;
	Graph* graph = createGraph(V);
	addEdge(graph, 0, 1);
	addEdge(graph, 0, 4);
	addEdge(graph, 1, 2);
	addEdge(graph, 1, 3);
	addEdge(graph, 1, 4);
	addEdge(graph, 2, 3);
	addEdge(graph, 3, 4);

	printf("Number of vertices: %d\n", countVertices(graph));
	printf("Number of edges: %d\n", countEdges(graph));
	printf("Is the graph cyclic? %s\n", isCyclic(graph) ? "Yes" : "No");
	printf("Is the graph complete? %s\n", isComplete(graph) ? "Yes" : "No");
	countOddEvenVertices(graph);

	return 0;
}