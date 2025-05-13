#include <iostream>
using namespace std;
class buku{
    string judul;
    public :
    buku setJudul(string judul){
        this -> judul = judul;
        return *this;// chain fuction

    }
    string getJudul(){
        return this -> judul;
    }
};

int main()
{
    buku bukunya;
    //chain fuction calls
    cout << bukunya.setJudul("Matematika").getJudul();
    return 0;
}
