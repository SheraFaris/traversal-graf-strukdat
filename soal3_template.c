#include <stdio.h>
#include <stdlib.h>

#define SIZE 300

// DFS function
void dfs(char grid[SIZE][SIZE], int m, int n, int row, int col) {
    // Cari '1' di Pulau, dan tandai '0' untuk menunjukan sudah di Visited
    grid[row][col] = '0'; 

    // Bentuk kode tidak harus menggunakan tranversal konvesional
}

// Count islands
int numIslands(char grid[SIZE][SIZE], int m, int n) {
    int count = 0;
    // Count = Jumlah island pada peta (Pakai loop, lalu gunakan 'dfs' untuk ngecek seberapa luas)
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