#include <iostream>
#include <string>
using namespace std;

class Barang
{
    public:
    string namaBarang;
    int kodeBarang;
    
    Barang( string namaBarang, int kodeBarang){
        this->namaBarang = namaBarang;
        this->kodeBarang = kodeBarang;
    }
    void Barang :: cetak()
    };

    Barang ::Barang (int namaBarang, string kodeBarang){
        cout << "Constructor dengan paramater terpanggil:" << endl;
        cout << "Nama Barang :" << namaBarang << endl;
        cout << "Kode Barang :" << kodeBarang << endl;
    }
int main(){
    Barang brg("Sususarjana", 2024);
    return 0;

};