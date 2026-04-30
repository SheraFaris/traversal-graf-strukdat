#include <stdio.h>
#include <stdlib.h>

#define SIZE 300

// DFS function
void dfs(char grid[SIZE][SIZE], int m, int n, int row, int col) {
    if (row < 0 || row >= m || col < 0 || col >= n || grid[row][col] == '0')
        return;

    grid[row][col] = '0';

    dfs(grid, m, n, row + 1, col);
    dfs(grid, m, n, row - 1, col);
    dfs(grid, m, n, row, col + 1);
    dfs(grid, m, n, row, col - 1);
}

// Count islands
int numIslands(char grid[SIZE][SIZE], int m, int n) {
    int count = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                count++;
                dfs(grid, m, n, i, j);
            }
        }
    }

    return count;
}

int main() {
    int m, n;
    char grid[SIZE][SIZE];

    // Input size
    scanf("%d %d", &m, &n);

    // Input grid (each row is a string like "11001")
    for (int i = 0; i < m; i++) {
        scanf("%s", grid[i]);
    }

    int result = numIslands(grid, m, n);

    printf("%d\n", result);

    return 0;
}