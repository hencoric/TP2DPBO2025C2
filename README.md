# TP2DPBO2025C2

Saya Marco Henrik Abineno dengan NIM 2301093 mengerjakan evaluasi Latihan Modul dalam mata kuliah Desain Pemrograman Berbasis Object untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Amin.

# DIAGRAM
  
![Screenshot 2025-03-01 172139](https://github.com/user-attachments/assets/fd04ef65-9b74-47a8-acd3-df96d5ae70c6)

# DESAIN PRODUK

Sistem ini terdiri dari tiga kelas utama yang membentuk hierarki Child → Parent, yaitu Baju → Aksesoris → PetShop. Setiap kelas memiliki atribut yang digunakan untuk menyimpan informasi produk sesuai dengan kategorinya.

**1. PetShop (Parent Class)**
Kelas dasar yang berisi atribut umum untuk semua produk di toko hewan peliharaan:
  
id (String) → Kode unik untuk mengidentifikasi setiap produk.  
nama_produk (String) → Nama dari produk yang dijual.  
harga_produk (int) → Harga produk.  
stok_produk (int) → Jumlah produk yang tersedia dalam stok.  
foto_produk (string) → foto produk yang tersedia dalam stok. (khusus php)  
  
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

### Method  

dalam setiap class masing-masing atribut terdapat getter dan setter dimana  
  
getter → bertugas untuk mengambil data dari masing-masing atribut  
setter → bertugas untuk mengubah data dari masing-masing atribut    
  
# ALUR PROGRAM  

Diawal sistem akan menampilkan daftar barang yang sudah tersedia dan sistem menggunakan 2 menu, dimana user bisa memilih menu menggunakan nomor yang sesuai.  
  
1 → untuk menambahkan data  
2 → untuk keluar sistem  

Jika user salah memasukkan nomor, sistem akan menampilkan error dan akan di arahkan ke menu lagi.
