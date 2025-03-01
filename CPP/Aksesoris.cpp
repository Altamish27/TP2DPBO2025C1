#include <iostream>
#include <string>
#include <list>
#include "Petshop.cpp"
using namespace std;

class Aksesoris : public Petshop {

    private:
        string jenis;
        string bahan;
        string warna;
    public:

        Aksesoris(){
            jenis = "";
            bahan = "";
            warna = "";
        }

        Aksesoris(string jenis, string bahan, string warna){
            this->jenis = jenis;
            this->bahan = bahan;
            this->warna = warna;
        }

        void setJenis(string jenis){
            this->jenis = jenis;
        }

        void setBahan(string bahan){
            this->bahan = bahan;
        }

        void setWarna(string warna){
            this->warna = warna;
        }

        string getJenis(){
            return jenis;
        }

        string getBahan(){
            return bahan;
        }

        string getWarna(){
            return warna;
        }
        ~Aksesoris(){
        }
};
