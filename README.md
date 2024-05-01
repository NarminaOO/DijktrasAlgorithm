## Dijkstras algorithm

This C++ code is an implementation of Dijkstra's algorithm to find the shortest paths from a starting vertex to all other vertices in a weighted undirected graph. 
### Explanation
1. In the `main()` function, it prompts the user to enter the number of vertices in the graph.
2. It then creates a 2D vector m of size `size x size` to represent the adjacency matrix of the graph. Each cell `m[i][j]` stores the weight of the edge between vertex `i+1` and vertex `j+1`.
3. Next, it prompts the user to input the weights of edges. It iterates over the upper triangular part of the matrix (since the graph is undirected) and takes input for each edge weight.
4. After initializing Dijkstra's algorithm, it creates a vector d to store the shortest distance from the starting vertex to all other vertices. Another vector `visited` is used to keep track of visited vertices.
5. The main loop of Dijkstra's algorithm runs `size - 1` times. In each iteration, it selects the vertex with the minimum distance that has not been visited yet.
6. It then updates the distances to its neighboring vertices if a shorter path is found through the current vertex.
7. Once Dijkstra's algorithm completes, it prints out the adjacency matrix of the graph and the shortest distances from the starting vertex to all other vertices.

## How to use the programm
1.Enter the number of vertices: When prompted, enter the number of vertices in your graph.
2.Enter the weights of edges: For each pair of vertices, enter the weight of the edge connecting them. The program prompts you to enter the weights in sequence, starting from vertex 1 to the last vertex.
3.View the output: After entering the weights, the program will display the adjacency matrix of the graph and the shortest distances from the source vertex to all other vertices.
