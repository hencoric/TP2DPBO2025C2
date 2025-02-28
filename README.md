# TP2DPBO2025C2

Saya Marco Henrik Abineno dengan NIM 2301093 mengerjakan evaluasi Latihan Modul dalam mata kuliah Desain Pemrograman Berbasis Object untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Amin.

# DIAGRAM
  
![image](https://github.com/user-attachments/assets/8fdab942-8331-4ff3-aef8-c3556900b041)

# DESAIN PRODUK

Sistem ini terdiri dari tiga kelas utama yang membentuk hierarki Child → Parent, yaitu Baju → Aksesoris → PetShop. Setiap kelas memiliki atribut yang digunakan untuk menyimpan informasi produk sesuai dengan kategorinya.

**1. PetShop (Parent Class)**
Kelas dasar yang berisi atribut umum untuk semua produk di toko hewan peliharaan:
  
id (String) → Kode unik untuk mengidentifikasi setiap produk.  
nama_produk (String) → Nama dari produk yang dijual.  
harga_produk (int) → Harga produk.  
stok_produk (int) → Jumlah produk yang tersedia dalam stok.  
  
Kelas ini menjadi dasar bagi kategori produk lainnya, seperti aksesoris dan baju.  
  
**2. Aksesoris (Child dari PetShop)**  
Kelas ini merupakan turunan dari PetShop dengan menambahkan atribut tambahan:  
  
jenis (String) → Jenis aksesoris/pakaian.  
bahan (String) → Material dari aksesoris/pakaian.  
warna (String) → Warna aksesoris/pakaian untuk variasi pilihan pelanggan.  
  
**3. Baju (Child dari Aksesoris)**  
Kelas Baju adalah turunan dari Aksesoris dengan atribut tambahan pada kelas ini:  
  
untuk (String) → Menentukan apakah baju ini untuk anjing, kucing, atau lainnya.  
size (String) → Ukuran pakaian hewan, seperti S, M, L, atau ukuran khusus.  
merk (String) → Merek dari baju, misalnya Adidas, Puma, atau merek lainnya.  

## Method  

dalam setiap class masing-masing atribut terdapat getter dan setter dimana  
  
getter → bertugas untuk mengambil data dari masing-masing atribut  
setter → bertugas untuk mengubah data dari masing-masing atribut  
display → bertugas untuk menampilkan data dari masing-masing atribut 
**note method display :**  
dalam class akksesoris dan baju, method display menggunakan override, artinya method display() di aksesoris akan menambahkan atribut tambahan di samping method display() dari petShop, dan display() di baju juga akan menambahkan atribut lebih lanjut dari aksesoris.    
  
# Alur Program  

Diawal sistem akan menampilkan daftar barang yang sudah tersedia dan sistem menggunakan 2 menu, dimana user bisa memilih menu menggunakan nomor yang sesuai.  
  
1 → untuk menambahkan data  
2 → untuk keluar sistem  

Jika user salah memasukkan nomor, sistem akan menampilkan error dan akan di arahkan ke menu lagi.
