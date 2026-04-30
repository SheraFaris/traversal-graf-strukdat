#include <stdio.h>

#define MAX 100

int adj[MAX][MAX];
int visited[MAX];
int N;

// BFS
void bfs(int start) {
    int queue[MAX];
    int front = 0, rear = 0;

    for (int i = 0; i < N; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS: ");

    while (front < rear) {
        int cur = queue[front++];
        printf("%d ", cur);

        for (int i = 0; i < N; i++) {
            if (adj[cur][i] == 1 && !visited[i]) {
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
    printf("\n");
}

// DFS
void dfs(int cur) {
    visited[cur] = 1;
    printf("%d ", cur);

    for (int i = 0; i < N; i++) {
        if (adj[cur][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
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