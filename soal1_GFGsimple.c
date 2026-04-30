#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
0: 2 3 1
1: 0
2: 0 4
3: 0
4: 2
*/


// --- BFS FUNCTION (your code) ---
int* bfs(int** adj, int* adjSizes, int V) {
    bool* visited = (bool*)calloc(V, sizeof(bool));
    int* result = (int*)malloc(V * sizeof(int));
    int* queue = (int*)malloc(V * sizeof(int));

    int front = 0, rear = 0, idx = 0;
    /*
     q = 0 2 
     v = 0
     f      1
     r      2 
     idx    0
     node   0
     res    0
     nei    3
     vis    0 2 3 1
    */


    queue[rear++] = 0;
    visited[0] = true;

    while (front < rear) {
        int node = queue[front++];
        result[idx++] = node;

        for (int i = 0; i < adjSizes[node]; i++) {
            int neighbor = adj[node][i];

            if (!visited[neighbor]) {
                visited[neighbor] = true;
                queue[rear++] = neighbor;
            }
        }
    }

    return result;
}

// --- MAIN FUNCTION ---
int main() {
    int V = 5; // number of vertices

    // Step 1: create adjacency list sizes
    int adjSizes[] = {3, 1, 2, 1, 1};

    // Step 2: allocate adjacency list
    int** adj = (int**)malloc(V * sizeof(int*));

    // Step 3: fill adjacency list manually
    adj[0] = (int[]){2, 3, 1};
    adj[1] = (int[]){0};
    adj[2] = (int[]){0, 4};
    adj[3] = (int[]){0};
    adj[4] = (int[]){2};

    // Step 4: call BFS
    int* result = bfs(adj, adjSizes, V);

    // Step 5: print result
    printf("BFS Traversal: ");
    for (int i = 0; i < V; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    // Step 6: free memory
    free(adj);
    free(result);

    return 0;
}