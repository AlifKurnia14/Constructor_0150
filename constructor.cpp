#include <iostream>
uisng namespace std;

class mahasiswa{
    public:
    mahasiswa();// Contructor mahasiswa

};

mahasiswa:: mahasiswa(){
    cout<<"Contructor Terpanggil"<<endl; //Definisi Contructor

};
int main(){
    mahasiswa mhs; //Pembuatan Object
    return 0;
}