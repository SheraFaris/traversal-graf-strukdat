# traversal-graf-strukdat

Soal Cerita

Di sebuah kota terdapat beberapa tempat yang saling terhubung oleh jalan. Pemerintah kota ingin membuat sistem untuk menelusuri semua tempat yang bisa dikunjungi dari satu titik awal.

Terdapat N tempat dan M jalan. Setiap jalan menghubungkan dua tempat secara dua arah. Program harus menampilkan urutan kunjungan tempat menggunakan:

BFS — menelusuri tempat terdekat terlebih dahulu.
DFS — menelusuri sedalam mungkin terlebih dahulu.

Format Input
N M
A B
A B
...
START

Keterangan:

N = jumlah tempat
M = jumlah jalan
A B = jalan antara tempat A dan B
START = tempat awal traversal
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
