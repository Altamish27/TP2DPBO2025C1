from Petshop import Petshop

class Aksesoris(Petshop):
    def __init__(self, jenis="", bahan="", warna=""):
        self.jenis = jenis
        self.bahan = bahan
        self.warna = warna
        
    def set_jenis(self, jenis):
        self.jenis = jenis
    
    def set_bahan(self, bahan):
        self.bahan = bahan
    
    def set_warna(self, warna):
        self.warna = warna
    