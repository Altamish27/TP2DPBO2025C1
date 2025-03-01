from Aksesoris import Aksesoris

class Baju(Aksesoris):
    def __init__(self, untuk="", size="", merk=""):
        self.untuk = untuk
        self.size = size
        self.merk = merk
    
    def set_untuk(self, untuk):
        self.untuk = untuk
    
    def set_size(self, size):
        self.size = size
    
    def set_merek(self, merk):
        self.merk = merk