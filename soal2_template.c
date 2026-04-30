#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int N;

// BFS
void bfs(int start) {
 
}

// DFS
void dfs(int cur) {

}

int main() {
    int M;
    scanf("%d %d", &N, &M);

    // Inisialisasi matrix
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            adj[i][j] = 0;

    // Input edge
    for (int i = 0; i < M; i++) {
        int u, v;
        scanf("%d %d", &u, &v);

        adj[u][v] = 1;
        adj[v][u] = 1; // undirected
    }

    int start;
    scanf("%d", &start);

    bfs(start);

    // Reset visited untuk DFS
    for (int i = 0; i < N; i++)
        visited[i] = 0;

    printf("DFS: ");
    dfs(start);
    printf("\n");

    return 0;
}