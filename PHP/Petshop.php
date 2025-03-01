<?php

class Petshop {
        private $id = 0;
        private $nama = "";
        private $harga = 0;
        private $stok = 0;
        private $gambar = "";


        //constructor
        public function __construct($id, $nama, $harga, $stok, $gambar) {
            $this->id = $id;
            $this->nama = $nama;
            $this->harga = $harga;
            $this->stok = $stok;
            $this->gambar = $gambar;
        }

        public function getId() {
            return $this->id;
        }

        public function setId($id) {
            $this->id = $id;
        }

        public function getNama() {
            return $this->nama;
        }

        public function setNama($nama) {
            $this->nama = htmlspecialchars($nama);
        }

        public function getHarga() {
            return $this->harga;
        }

        public function setHarga($harga) {
            $this->harga = floatval($harga);
        }

        public function getStok() {
            return $this->stok;
        }

        public function setStok($stok) {
            $this->stok = intval($stok);
        }

        public function getGambar() {
            return $this->gambar;
        }

        public function setGambar($gambar) {
            $this->gambar = filter_var($gambar, FILTER_SANITIZE_URL);
        }


    }
?>