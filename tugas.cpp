#include <iostream>
#include <string>
using namespace std;

class Barang
{
    public:
    Barang();
    Barang ::Barang(string nama,int kode){
        namaBarang = nama;
        kodeBarang = kode;
    }
    void Barang::cetak();


};

Barang ::Barang(int namaBarang,string kodeBarang){
    cout << "Constructor dengan paramater terpanggil :" << endl;
    cout << "nB :" << namaBarang << endl;
    cout << "kD :" << kodeBarang << endl;

}

int main(){
    Barang brg("Sususarjana", 2024);
    return 0;

}