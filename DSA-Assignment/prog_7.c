#include <stdio.h>

#define V 5        // Number of vertices
#define INF 9999   // Representation of infinity

// Function to find the vertex with minimum distance value
int minDistance(int dist[], int visited[]) {
    int min = INF, min_index;

    for (int v = 0; v < V; v++) {
        if (visited[v] == 0 && dist[v] <= min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// Function to print shortest distances
void printSolution(int dist[]) {
    printf("Vertex\tDistance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%d\t%d\n", i, dist[i]);
}

// Dijkstra's algorithm function
void dijkstra(int graph[V][V], int src) {
    int dist[V];      // Output array: shortest distance from src
    int visited[V];   // Visited set

    // Initialize distances and visited array
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0; // Distance of source to itself

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {

        int u = minDistance(dist, visited); // Pick minimum distance vertex
        visited[u] = 1;                     // Mark as visited

        // Update distances of adjacent vertices
        for (int v = 0; v < V; v++) {
            if (!visited[v] && graph[u][v] &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printSolution(dist);
}

int main() {
    // Example weighted graph (Adjacency Matrix)
    int graph[V][V] = {
        {0, 4, 1, 0, 0},
        {4, 0, 2, 5, 0},
        {1, 2, 0, 8, 0},
        {0, 5, 8, 0, 3},
        {0, 0, 0, 3, 0}
    };

    dijkstra(graph, 0); // Source vertex = 0

    return 0;
}