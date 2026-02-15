Program Documentation: Dijkstra’s Shortest Path Algorithm

Program Name: Dijkstra’s Shortest Path Finder
Language: C
Author: Siddharth Thapa
Course: COMP202

(a) Explanation of Data Structures

The program uses the following data structures:

1. Adjacency Matrix
int graph[V][V];


Represents a weighted graph

graph[i][j] stores weight of edge between vertex i and j

Value 0 means no direct edge

2. Distance Array
int dist[V];


Stores the shortest distance from source to each vertex

Initialized to infinity except source (0)

3. Visited Set
int visited[V];


Keeps track of vertices whose shortest path is finalized

1 → visited, 0 → not visited

4. Constant Value
#define V 5
#define INF 9999


V = number of vertices

INF = representation of infinity

(b) Description of Functions
1. minDistance(int dist[], int visited[])

Purpose:
Finds the vertex with the minimum distance that has not yet been visited.

Logic:

Traverse all vertices

Choose smallest distance among unvisited ones

2. dijkstra(int graph[V][V], int src)

Purpose:
Implements Dijkstra’s algorithm to compute shortest paths.

Steps:

Initialize distance array and visited array.

Set source distance = 0.

Repeat V-1 times:

Pick vertex with minimum distance.

Mark it visited.

Update distances of adjacent vertices.

3. printSolution(int dist[])

Purpose:
Displays shortest distances from source to all vertices.

(c) Overview of main() Function

The main() function:

Defines a sample weighted graph using adjacency matrix.

Calls dijkstra(graph, 0) where 0 is the source node.

Displays shortest path from source to every other vertex.

(d) Sample Graph
      (0)
     /   \
   4/     \1
   /       \
 (1)——2——(2)
   \       /
   5\     /8
     \   /
      (3)


Adjacency Matrix:

0 4 1 0 0
4 0 2 5 0
1 2 0 8 0
0 5 8 0 3
0 0 0 3 0

(e) Sample Output
Vertex   Distance from Source
0        0
1        3
2        1
3        8
4        11

Conclusion

This program demonstrates:

Graph representation using adjacency matrix

Greedy strategy of Dijkstra’s algorithm

Shortest path computation in weighted graphs

Time Complexity

Using adjacency matrix → O(V²)

Dijkstra’s algorithm is widely used in:

GPS navigation

Network routing

Map services