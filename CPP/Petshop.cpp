#include <iostream>
#include <string>
#include <list>

using namespace std;

class Petshop {
    private:
        int id;
        string namaProduk;
        int hargaProduk;
        int stokProduk;

    public:
        Petshop(){
            id = 1;
            namaProduk = "";
            hargaProduk = 0;
            stokProduk = 0;
        }

        Petshop(int id, string namaProduk, int hargaProduk, int stokProduk){
            this->id = id;
            this->namaProduk = namaProduk;
            this->hargaProduk = hargaProduk;
            this->stokProduk = stokProduk;
        }

        void setId(int id){
            this->id = id;
        }

        void setNamaProduk(string namaProduk){
            this->namaProduk = namaProduk;
        }

        void setHargaProduk(int hargaProduk){
            this->hargaProduk = hargaProduk;
        }

        void setStokProduk(int stokProduk){
            this->stokProduk = stokProduk;
        }

        int getId(){
            return id;
        }

        string getNamaProduk(){
            return namaProduk;
        }

        int getHargaProduk(){
            return hargaProduk;
        }

        int getStokProduk(){
            return stokProduk;
        }

        ~Petshop(){
        }

};