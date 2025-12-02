#include <stdio.h>
#include <stdbool.h> // For using boolean type

#define MAX_VERTICES 20

int graph[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int numVertices;

// Function to perform DFS traversal
void dfs(int vertex) {
    printf("%d ", vertex); // Print the current vertex
    visited[vertex] = true; // Mark the current vertex as visited

    // Iterate through all adjacent vertices
    for (int i = 0; i < numVertices; i++) {
        // If there's an edge and the adjacent vertex hasn't been visited
        if (graph[vertex][i] == 1 && !visited[i]) {
            dfs(i); // Recursively call DFS for the unvisited adjacent vertex
        }
    }
}

int main() {
    int i, j, startVertex;

    printf("Enter the number of vertices (max %d): ", MAX_VERTICES);
    scanf("%d", &numVertices);

    // Initialize visited array and adjacency matrix
    for (i = 0; i < numVertices; i++) {
        visited[i] = false;
        for (j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }

    printf("Enter the adjacency matrix (0 or 1 for no/yes edge):\n");
    for (i = 0; i < numVertices; i++) {
        for (j = 0; j < numVertices; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter the starting vertex for DFS (0 to %d): ", numVertices - 1);
    scanf("%d", &startVertex);

    printf("DFS Traversal: ");
    dfs(startVertex);
    printf("\n");

    return 0;
}
