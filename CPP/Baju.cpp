#include <iostream>
#include <string>
#include <list>
#include "Aksesoris.cpp"

using namespace std;

class Baju : public Aksesoris{

    private:
        string untuk;
        string size;
        string merk;
    public:
        
        Baju(){
            untuk = "";
            size = "";
            merk = "";
        }

        Baju(string untuk, string size, string merk){
            this->untuk = untuk;
            this->size = size;
            this->merk = merk;
        }

        void setUntuk(string untuk){
            this->untuk = untuk;
        }

        void setSize(string size){
            this->size = size;
        }

        void setMerk(string merk){
            this->merk = merk;
        }

        string getUntuk(){
            return untuk;
        }

        string getSize(){
            return size;
        }

        string getMerk(){
            return merk;
        }
        ~Baju(){
        }
    

};