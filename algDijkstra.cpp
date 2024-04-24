#include <iostream>
#include <vector>
#include <limits>

int main() {
    int size;

    std::cout << "Enter the number of vertices: ";
    std::cin >> size;

    std::vector<std::vector<int>> m(size, std::vector<int>(size, 0));

    int weight;

    std::cout << "Enter the weights of edges (from vertex 1 to vertex " << size << "):\n";
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            std::cout << "Weight from vertex " << i + 1 << " to vertex " << j + 1 << ": ";
            std::cin >> weight;
           
            m[i][j] = weight;
            m[j][i] = weight;
        }
    }

    //Dijkstra's algorithm
    std::vector<int> d(size, std::numeric_limits<int>::max());
    std::vector<bool> visited(size, false);
    d[0] = 0;

    for (int count = 0; count < size - 1; count++) {
        int min = std::numeric_limits<int>::max();
        int minindex = -1;

        
        for (int i = 0; i < size; i++) {
            if (!visited[i] && d[i] < min) {
                min = d[i];
                minindex = i;
            }
        }

        visited[minindex] = true;

        for (int i = 0; i < size; i++) {
            if (!visited[i] && m[minindex][i] && d[minindex] != std::numeric_limits<int>::max() &&
                d[minindex] + m[minindex][i] < d[i]) {
                d[i] = d[minindex] + m[minindex][i];
            }
        }
    }

    //adjacency matrix
    std::cout << "\nadjacency matrix:\n";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << m[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //shortest distances
    std::cout << "\nshortest distances: ";
    for (int i = 0; i < size; i++) {
        std::cout << d[i]<<" ";
    }

   

    return 0;
}

