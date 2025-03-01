<?php
include 'Petshop.php';

class Aksesoris extends Petshop {
    private $jenis = "";
    private $bahan = "";
    private $warna = "";

    //constructor
    public function __construct($id, $nama, $harga, $stok, $gambar, $jenis, $bahan, $warna) {
        parent::__construct($id, $nama, $harga, $stok, $gambar);
        $this->jenis = $jenis;
        $this->bahan = $bahan;
        $this->warna = $warna;
    }
    //getter setter
    public function getJenis() {
        return $this->jenis;
    }

    public function setJenis($jenis) {
        $this->jenis = htmlspecialchars($jenis);
    }

    public function getBahan() {
        return $this->bahan;
    }

    public function setBahan($bahan) {
        $this->bahan = htmlspecialchars($bahan);
    }

    public function getWarna() {
        return $this->warna;
    }

    public function setWarna($warna) {
        $this->warna = htmlspecialchars($warna);
    }



}
?>