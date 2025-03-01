<?php
include_once 'PetShop.php';

class Aksesoris extends PetShop {
    private $jenis;
    private $bahan;
    private $warna;

    public function __construct($id = "", $nama_produk = "", $harga_produk = 0, $stok_produk = 0, $foto_produk = "", $jenis = "", $bahan = "", $warna = "") {
        parent::__construct($id, $nama_produk, $harga_produk, $stok_produk, $foto_produk);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }

    public function getJenis() {
        return $this->jenis;
    }

    public function setJenis($jenis) {
        $this->jenis = $jenis;
    }

    public function getBahan() {
        return $this->bahan;
    }

    public function setBahan($bahan) {
        $this->bahan = $bahan;
    }

    public function getWarna() {
        return $this->warna;
    }

    public function setWarna($warna) {
        $this->warna = $warna;
    }
}
?>
