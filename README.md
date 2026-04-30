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
- N M
- A B
- A B
- START

Format Output:
- BFS: hasil_traversal_bfs
- DFS: hasil_traversal_dfs

Keterangan:
- N = jumlah tempat
- M = jumlah jalan
- A B = jalan antara tempat A dan B
- START = tempat awal traversal
- M beris berikutnya merupakan jalan yang menghubungkan tempat A ke B
- Tempat (N) dimulah dari A seterusnya (A,B,C,D...)
```
Contoh Input
6 7
A B
A C
B D
B E
C F
E F
D F
A
Contoh Output
BFS: A B C D E F
DFS: A B D F C E
```
