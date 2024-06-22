<img src="https://github.com/mnvthdrs/Jobsheet-Pratikum-Struktur-Data/blob/main/Assets/a2.png?raw=true">


# Pratikum-Struktur-Data


* _Nama: Aura Annisa Cahaya_
* _NIM: 23343060_
* _Prodi: Informatika(NK)_
* _Kode Kelas: INF1.62.2014_
* _Seksi: 202323430156_
* _Dosen Pengampu: Randi Proska Sandra, M.Sc_

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## Uraian Materi📜
<details><summary><h3>1. Pengenalan Struktur Data</h3></summary>

*Ringkasan Materi Job Sheet 01 - Pengenalan Struktur Data*

*Pengantar Struktur Data:*
Struktur Data merupakan cara penyimpanan, penyusunan, dan pengaturan data di dalam media penyimpanan komputer agar data dapat digunakan secara efisien sementara data adalah representasi dari fakta dunia nyata yang disimpan, direkam, atau direpresentasikan dalam bentuk tulisan, suara, gambar, sinyal, atau simbol.

Terdapat dua tipe data, yaitu:
1. Tipe Data Sederhana Tunggal: Integer, real, boolean, karakter.
2. Tipe Data Sederhana Majemuk: String (kumpulan data char).

Struktur Data terbagi menjadi beberapa jenis:
- *Sederhana:* Array dan record.
- *Majemuk:*
  - *Linier:* Stack, Queue, List, Multilist.
  - *Non-Linier:* Pohon Biner, Graph.

Struktur Data Standar yang Digunakan dalam Informatika:
- List linier (Linked List) dan variasinya.
- Multilist.
- Stack (Tumpukan).
- Queue (Antrian).
- Tree (Pohon).
- Graph (Graf).

Pemakaian struktur data yang tepat menghasilkan algoritma yang lebih efisien dan program yang lebih sederhana.

</details>
<details><summary><h3>2. Array, Pointer, Structure</h3></summary>

  *Array* adalah kumpulan nilai bertipe data sama yang diakses menggunakan indeks. Array dapat satu dimensi, dua dimensi, atau multi dimensi. *Pointer* adalah variabel yang menyimpan alamat memori variabel lain. Dideklarasikan menggunakan tanda asterisk () dan digunakan untuk mengakses alamat dan nilai variabel yang ditunjuk.Structure (Struct)* adalah kumpulan variabel dengan tipe berbeda yang berada di bawah satu nama. Dideklarasikan menggunakan kata kunci struct. *ADT (Abstract Data Type)* adalah koleksi data dan operasi yang dapat memanipulasi data tersebut, digunakan untuk membuat tipe data baru yang tidak spesifik diakomodasi oleh bahasa pemrograman.

*Contoh Deklarasi dan Inisialisasi:*
- *Array:*
  c
  type arrayName [ arraySize ]; // 1D
  type arrayName [ x ][ y ]; // 2D
  type name [ size1 ][ size2 ]...[ sizeN ]; // MD
  
  Inisialisasi:
  c
  double balance[5] = {500.0, 2.0, 3.4, 7.0, 50.0};
  int a[3][4] = {   
      {0, 1, 2, 3},    
      {4, 5, 6, 7},    
      {8, 9, 10, 11}
  };
  
- *Pointer:*
  c
  int *b, d;
  char c;
  b = &d;
  
- *Struct:*
  c
  struct Person {
      char name[50];
      int citNo;
      float salary;
  };
  struct Person person1, person2, p[20];
  

*ADT (Abstract Data Type):*
- Digunakan untuk membuat tipe data baru dengan typedef.
  c
  typedef int angka;
  typedef char huruf;
  


</details>
<details><summary><h3>4. Doubly Linked List</h3></summary>

*Konsep Doubly Linked List*
Doubly Linked List adalah jenis linkedd list yang memungkinkan traversal data dalam dua arah, yaitu maju (next) dan mundur (prev). Setiap node dalam DLL memiliki tiga elemen utama: data. pointer ke node berikutnya, dan pointer ke node sebelumnya. Dengan adanya dua pointer ini, operasi pada linked list, seperti penambahan, penghapusan, dan pencarian, dapat dilakukan dengan lebih efisien dibandingkan dengan singly linked list.

Keuntungan Doubly Linked List
Traversal Dua Arah: Dengan pointer prev, traversal data dapat dilakukan dalam kedua arah, memudahkan operasi yang memerlukan pengaksesan data dari akhir ke awal.
Penghapusan Simpul Efisien: Pada operasi penghapusan node, kita tidak perlu melakukan traversal dari awal linked list untuk menemukan node sebelumnya, karena sudah ada pointer prev yang menunjuk langsung ke node sebelumnya.
Insert Simpul: Penambahan node baru dapat dilakukan dengan mudah di posisi mana pun dalam linked list.
Implementasi Doubly Linked List
Berikut adalah contoh kode dasar untuk implementasi Doubly Linked List dalam C:

c
Salin kode
struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
};

void push(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}
Fungsi push digunakan untuk menambahkan node baru di depan linked list. Pointer next dari node baru menunjuk ke head saat ini, dan pointer prev dari head diubah menjadi node baru.

Kelemahan Doubly Linked List
Ruang Memori Tambahan: Setiap node membutuhkan ruang tambahan untuk menyimpan pointer prev dan next.
Kompleksitas Pointer: Manajemen dua pointer pada setiap node dapat meningkatkan kompleksitas dan peluang kesalahan dalam implementasi.

</details>
<details><summary><h3>5. Double and Circular Linked List</h3></summary>

### Materi Double Linked List dan Circular Linked List

#### Double Linked List

*Definisi dan Struktur*
Double linked list adalah jenis struktur data linked list di mana setiap elemen memiliki dua pointer: satu menunjuk ke elemen berikutnya (next) dan satu lagi menunjuk ke elemen sebelumnya (prev). Hal ini memungkinkan traversing list baik ke depan maupun ke belakang. Setiap elemen dalam double linked list terdiri dari tiga bagian: data (info), pointer next, dan pointer prev atau back. Pointer prev dari elemen pertama dan pointer next dari elemen terakhir masing-masing menunjuk ke NULL untuk menunjukkan awal (head) dan akhir (tail) dari list tersebut.

#### Circular Linked List

*Definisi dan Struktur*
Circular linked list adalah bentuk lain dari linked list di mana pointer next dari elemen terakhir menunjuk kembali ke elemen pertama, sehingga membentuk lingkaran. Circular linked list dapat berupa single atau double linked list. Pada double circular linked list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

#### Implementasi Double Linked List
Double linked list diimplementasikan dengan mendeklarasikan struktur node yang memiliki pointer next dan prev. Struktur ini memastikan bahwa setiap node bisa diakses dari dua arah.

#### Implementasi Circular Linked List
*Deklarasi dan Struktur Dasar*
Circular linked list diimplementasikan dengan mendeklarasikan struktur node yang pointer next-nya pada elemen terakhir menunjuk ke elemen pertama. Untuk double circular linked list, pointer prev pada elemen pertama juga menunjuk ke elemen terakhir.

#### Kesimpulan

Double linked list dan circular linked list adalah struktur data yang memberikan fleksibilitas tinggi dalam pengelolaan elemen-elemen data. Double linked list memungkinkan traversal dua arah yang memudahkan manipulasi data, sedangkan circular linked list menawarkan sirkularitas yang menguntungkan dalam aplikasi yang memerlukan traversal berkelanjutan. Praktikum ini membantu mahasiswa memahami dan mengimplementasikan kedua struktur data tersebut, serta menerapkan teknik pemecahan masalah menggunakan C programming.

</details>
<details><summary><h3>6. Stack</h3></summary>

## Konsep Dasar dan Implementasi Stack dalam Pemrograman C

Stack adalah salah satu struktur data yang fundamental dalam ilmu komputer dan pemrograman. Stack menggunakan prinsip Last In First Out (LIFO), yang berarti elemen terakhir yang dimasukkan adalah elemen pertama yang akan dikeluarkan. Prinsip ini mirip dengan menumpuk dan mengambil barang dari tumpukan, di mana barang yang terakhir ditumpuk akan berada di posisi teratas dan akan diambil pertama kali. 

### Konsep LIFO
Dalam konsep LIFO, stack dapat dianalogikan sebagai tumpukan kotak. Misalnya, jika kita menumpuk tiga kotak, kotak pertama diletakkan paling bawah, kemudian kotak kedua di atasnya, dan kotak ketiga di paling atas. Ketika kita mengambil kotak, kotak yang paling atas (kotak ketiga) yang akan diambil terlebih dahulu.


### Implementasi Stack Menggunakan Array
Meskipun menggunakan array untuk implementasi stack tidak ideal karena ukuran array yang statis, namun dapat dilakukan dengan beberapa pertimbangan. Pada implementasi ini, ukuran maksimal stack harus ditentukan di awal, dan operasi harus mengelola indeks teratas dari stack.

c
#define MAX 5
typedef int ItemType;
typedef struct {
    ItemType item[MAX];
    int count;
} Stack;


Pada kode di atas, stack dideklarasikan dengan ukuran maksimal yang ditentukan oleh MAX. Elemen-elemen stack disimpan dalam array item, dan variabel count digunakan untuk melacak jumlah elemen dalam stack.


### Kesimpulan
Stack adalah struktur data yang sangat berguna dan sering digunakan dalam pemrograman, terutama untuk masalah yang membutuhkan penanganan data secara LIFO. Meskipun array memiliki keterbatasan dalam hal fleksibilitas ukuran, array tetap dapat digunakan untuk mengimplementasikan stack dengan syarat ukuran maksimal stack diketahui dan dikelola dengan baik. Operasi dasar seperti push, pop, dan peek adalah esensial dalam manipulasi data stack, dan implementasi ini memberikan dasar yang kuat untuk pemahaman lebih lanjut tentang struktur data dan algoritma.

</details>
<details><summary><h3>7. Queue</h3></summary>

Queue atau antrian adalah struktur data yang menggunakan prinsip First In First Out (FIFO), di mana elemen yang pertama kali dimasukkan adalah yang pertama kali dikeluarkan. Contoh nyata dari queue adalah antrian saat membeli tiket bioskop, di mana orang pertama yang masuk antrian adalah orang pertama yang mendapatkan tiket.

#### Implementasi Queue
Queue dapat diimplementasikan menggunakan array atau linked list. Kedua metode ini memiliki kelebihan dan kekurangan masing-masing.

##### Queue dengan Array
Pada implementasi dengan array, digunakan dua pointer, front dan rear, untuk melacak elemen pertama dan terakhir dalam antrian. Saat queue kosong, front dan rear diinisialisasi ke -1. Proses penambahan elemen (enqueue) akan meningkatkan nilai rear dan menempatkan elemen baru di posisi yang ditunjuk oleh rear. Sedangkan proses penghapusan elemen (dequeue) akan mengembalikan nilai yang ditunjuk oleh front dan meningkatkan indeks front.

##### Queue dengan Linked List
Pada implementasi dengan linked list, setiap elemen antrian diimplementasikan sebagai node dalam linked list. Dua pointer, front dan rear, digunakan untuk melacak elemen pertama dan terakhir dalam antrian. Operasi enqueue menambahkan elemen baru di akhir linked list, sedangkan operasi dequeue menghapus elemen dari awal linked list.

##### Circular Queue
Circular Queue adalah varian dari queue di mana posisi terakhir dari array dihubungkan kembali ke posisi pertama, membentuk lingkaran. Hal ini memungkinkan penggunaan ruang memori yang lebih efisien. Pada circular queue, penambahan elemen baru setelah posisi terakhir akan dilakukan pada posisi awal array jika ada ruang yang tersedia.

##### Deque (Double-Ended Queue)
Deque adalah tipe khusus dari queue di mana elemen dapat ditambahkan atau dihapus dari kedua ujung antrian, baik dari depan maupun belakang. Deque memiliki dua varian utama:
1. *Input-Restricted Deque:* Elemen hanya dapat ditambahkan di satu ujung, tetapi dapat dihapus dari kedua ujung.
2. *Output-Restricted Deque:* Elemen dapat ditambahkan di kedua ujung, tetapi hanya dapat dihapus dari satu ujung.

#### Aplikasi Queue
Queue banyak digunakan dalam berbagai aplikasi pemrograman dan komputasi, antara lain:
1. *Manajemen Proses dalam Sistem Operasi:* Queue digunakan untuk mengelola proses yang siap untuk dieksekusi oleh CPU.
2. *Penanganan Permintaan Layanan dalam Jaringan:* Queue digunakan untuk mengelola permintaan layanan yang datang dari pengguna.
3. *Pemrosesan Data dalam Pemrograman:* Queue digunakan untuk memproses data secara berurutan.


</details>
<details><summary><h3>8. Bubble and Insertion Sort</h3></summary>

Pengurutan data adalah proses penyusunan elemen-elemen dalam suatu urutan tertentu, seperti dari nilai terkecil ke terbesar atau sebaliknya. Pengurutan ini sangat umum dalam berbagai aplikasi komputer untuk memudahkan pencarian dan pemahaman data. Terdapat beberapa teknik yang digunakan untuk mengurutkan data, antara lain bubble sort, insertion sort, selection sort, quicksort, mergesort, heapsort, dan binary sort. Pada job sheet ini, fokus utamanya adalah pada dua metode dasar, yaitu bubble sort dan insertion sort.

*Bubble Sort*

Bubble Sort adalah algoritma pengurutan yang bekerja dengan cara membandingkan elemen-elemen yang berdekatan dan menukarnya jika elemen tersebut tidak dalam urutan yang benar. Proses ini diulangi sampai seluruh elemen dalam daftar terurut dengan benar. Bubble sort mendapatkan namanya karena elemen-elemen "menggelembung" ke posisi yang tepat seperti gelembung air. Algoritma ini memiliki kompleksitas waktu O(n^2), membuatnya kurang efisien untuk jumlah data yang besar.

*Insertion Sort*

Insertion Sort adalah algoritma yang bekerja dengan cara membangun array yang sudah terurut satu per satu, dengan mengambil satu elemen dari array yang tidak terurut dan menyisipkannya ke posisi yang sesuai dalam array yang sudah terurut. Algoritma ini mirip dengan cara kita mengurutkan kartu di tangan. Kompleksitas waktu untuk insertion sort juga O(n^2) pada kasus terburuk, namun seringkali lebih cepat daripada bubble sort pada data yang hampir terurut.


</details>
<details><summary><h3>9. Selection and Merge Sort</h3></summary>
Pengurutan data merupakan salah satu operasi dasar dalam ilmu komputer yang bertujuan untuk menyusun elemen-elemen data dalam urutan tertentu, seperti dari yang terkecil ke terbesar atau sebaliknya. Teknik pengurutan yang umum dipelajari dan digunakan termasuk bubble sort, insertion sort, selection sort, dan merge sort.

*Bubble Sort*

Bubble sort adalah algoritma pengurutan yang bekerja dengan cara membandingkan elemen-elemen yang berdekatan dan menukarnya jika tidak dalam urutan yang benar. Proses ini diulangi sampai seluruh elemen terurut dengan benar. Algoritma ini dinamakan "bubble" karena elemen-elemen "menggelembung" ke posisi yang tepat seperti gelembung air. Meskipun mudah dipahami dan diimplementasikan, bubble sort tidak efisien untuk jumlah data besar karena kompleksitas waktunya yang O(n^2).

*Insertion Sort*

Insertion sort bekerja dengan membangun array terurut satu per satu. Setiap elemen dari array yang tidak terurut diambil dan disisipkan ke posisi yang sesuai dalam array yang sudah terurut. Algoritma ini mirip dengan cara kita mengurutkan kartu di tangan. Meskipun memiliki kompleksitas waktu O(n^2), insertion sort lebih cepat daripada bubble sort pada data yang hampir terurut dan cukup efisien untuk dataset kecil.

*Selection Sort*

Selection sort adalah algoritma yang bekerja dengan cara memilih elemen terkecil dari array yang belum terurut dan menempatkannya di posisi paling depan. Proses ini diulangi untuk elemen berikutnya sampai seluruh array terurut. Algoritma ini juga memiliki kompleksitas waktu O(n^2). Selection sort memiliki kelebihan sederhana dan mudah diimplementasikan, tetapi tidak efisien untuk dataset besar.

*Merge Sort*

Merge sort menggunakan pendekatan divide and conquer. Algoritma ini membagi array menjadi dua bagian yang sama, mengurutkan masing-masing bagian, dan kemudian menggabungkannya kembali dalam urutan yang benar. Merge sort memiliki kompleksitas waktu O(n log n), membuatnya lebih efisien dibandingkan bubble sort, insertion sort, dan selection sort untuk dataset besar. Merge sort juga stabil, yang berarti elemen dengan nilai yang sama akan tetap mempertahankan urutan relatifnya.

</details>
<details><summary><h3>10. Shell and Quick Sort</h3></summary>

*Shell Sort*

Shell sort adalah pengembangan dari insertion sort yang menambahkan interval atau jarak antar elemen yang dibandingkan dan ditukar. Interval ini secara bertahap dikurangi sampai menjadi satu, menyerupai insertion sort. Shell sort memiliki kinerja yang lebih baik dibandingkan insertion sort pada dataset besar, terutama karena mengurangi jumlah pergeseran elemen yang diperlukan.

*Quick Sort*

Quick sort menggunakan pendekatan divide and conquer, mirip dengan merge sort. Algoritma ini memilih elemen sebagai pivot dan mempartisi array berdasarkan pivot tersebut, di mana elemen yang lebih kecil ditempatkan di satu sisi dan yang lebih besar di sisi lain. Proses ini diulangi secara rekursif untuk sub-array yang terbentuk. Quick sort sangat efisien dengan kompleksitas waktu rata-rata O(n log n) dan sering digunakan dalam aplikasi praktis karena kinerjanya yang cepat.

</details>
<details><summary><h3>11. Linear and Binary Search</h3></summary>

*Pencarian Linear (Linear Search):*
Pencarian linear merupakan metode sederhana yang digunakan untuk mencari sebuah elemen dalam sebuah array atau daftar data. Algoritma ini bekerja dengan cara memeriksa setiap elemen secara berurutan dari awal hingga akhir, dan menghentikan pencarian ketika elemen yang dicari ditemukan atau seluruh elemen telah diperiksa. Pencarian linear efektif untuk data yang tidak terurut atau acak.

Langkah-langkah dalam algoritma pencarian linear adalah sebagai berikut:
1. Inisialisasi indeks ke elemen pertama.
2. Lakukan perulangan untuk memeriksa setiap elemen, apakah elemen tersebut sama dengan kunci pencarian.
3. Jika ditemukan elemen yang sesuai, pencarian dihentikan dan mengembalikan nilai true.
4. Jika sampai akhir tidak ditemukan, mengembalikan nilai false.

*Pencarian Biner (Binary Search):*
Pencarian biner merupakan metode yang lebih efisien dibandingkan pencarian linear, tetapi memerlukan prasyarat bahwa data harus dalam keadaan terurut. Algoritma ini bekerja dengan cara membagi dua daftar data secara berulang-ulang hingga elemen yang dicari ditemukan atau seluruh sub-daftar telah diperiksa.

Langkah-langkah dalam algoritma pencarian biner adalah:
1. Tentukan posisi awal dan akhir dari data.
2. Hitung posisi tengah dari data.
3. Bandingkan elemen tengah dengan kunci pencarian:
   - Jika elemen tengah adalah elemen yang dicari, maka pencarian selesai.
   - Jika elemen tengah lebih besar dari kunci pencarian, periksa sub-daftar di sebelah kiri.
   - Jika elemen tengah lebih kecil dari kunci pencarian, periksa sub-daftar di sebelah kanan.
4. Ulangi langkah-langkah di atas hingga elemen ditemukan atau sub-daftar tidak lagi dapat dibagi.


</details>
<details><summary><h3>12. Tree</h3></summary>
  
Penjelajahan pohon data berarti mengunjungi semua simpul dalam pohon tersebut. Tidak seperti struktur data linear seperti array atau linked list, pohon data memiliki struktur hierarkis yang memungkinkan beberapa cara penjelajahan, yaitu inorder, preorder, dan postorder.

### Metode Penjelajahan
1. *Inorder Traversal*: Mengunjungi simpul di subtree kiri, kemudian root, lalu subtree kanan.
2. *Preorder Traversal*: Mengunjungi root terlebih dahulu, kemudian subtree kiri, dan terakhir subtree kanan.
3. *Postorder Traversal*: Mengunjungi subtree kiri terlebih dahulu, kemudian subtree kanan, dan terakhir root.

Pohon data diimplementasikan dalam C menggunakan struktur data dasar yang mencakup simpul dengan data, dan dua pointer ke subtree kiri dan kanan. Penjelajahan dilakukan menggunakan rekursi untuk menjaga urutan kunjungan yang benar. 

</details>
<details><summary><h3>13. Graphs</h3></summary>

Graf adalah kumpulan simpul (vertex) yang terhubung oleh sisi (edge). Ada dua algoritma dasar untuk penelusuran graf: BFS dan DFS. BFS adalah algoritma penelusuran graf yang mengunjungi simpul-simpul graf berdasarkan tingkatannya. Algoritma ini menggunakan struktur data antrian (queue) untuk melacak simpul yang akan dikunjungi berikutnya. DFS adalah algoritma penelusuran graf yang mengunjungi simpul-simpul sedalam mungkin sebelum kembali. Algoritma ini biasanya diimplementasikan menggunakan rekursi atau dengan tumpukan (stack).

#### Langkah-langkah BFS:
1. Mulai dari simpul awal, tandai sebagai dikunjungi, dan masukkan ke dalam antrian.
2. Selama antrian tidak kosong:
   - Keluarkan simpul dari antrian.
   - Kunjungi semua tetangga yang belum dikunjungi, tandai sebagai dikunjungi, dan masukkan ke dalam antrian.

#### Langkah-langkah DFS:
1. Mulai dari simpul awal, tandai sebagai dikunjungi.
2. Rekursif, kunjungi semua tetangga yang belum dikunjungi.
