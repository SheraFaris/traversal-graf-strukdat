# traversal-graf-strukdat
------------------------------------------------------------------------------------------------------------------------------------------------
# Graph Traversal: City Route Explorer

## Problem Statement

Di sebuah kota terdapat beberapa lokasi penting yang saling terhubung oleh jalan.  
Setiap jalan dapat dilalui dua arah.

Pemerintah kota ingin membuat sistem sederhana untuk menelusuri lokasi-lokasi yang dapat dikunjungi dari satu lokasi awal menggunakan dua metode traversal graf:

- Breadth First Search (BFS)
- Depth First Search (DFS)

Tugasmu adalah membuat program yang membaca data graf, lalu mencetak urutan traversal BFS dan DFS dari titik awal tertentu.

---

## Input Format

Format Input:
1st line = N M
Next M lines => A B 
start

Format Output:
- BFS: hasil_traversal_bfs
- DFS: hasil_traversal_dfs

Keterangan:
- N = jumlah tempat
- M = jumlah jalan
- A B = jalan antara tempat A dan B
- START = tempat awal traversal
- M beris setelah baris 1 merupakan jalan yang menghubungkan tempat A ke B
- Tempat (N) dimulah dari 0 seterusnya (1, 2, 3, 4, 5 ...)
```
Contoh Input
5 4
0 1
0 2
1 3
2 4
2

Contoh Output
BFS: 2 0 4 1 3
DFS: 2 0 1 3 4
```
