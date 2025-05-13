#include <iostream>
using namespace std;

//deklarasi class bangunDatar
class bangunDatar;

class PersegiPanjang{

    public:    
    void inputData(Bangundatar&bD);
    void outputData(BangunDatar&bD);
};

class BangunDatar{

    private:
    float panjang;
    float lebar;
    float hitungLuas(){
        return panjang * lebar;
    };
float hitungKeliling(){
    return 2 * (panjang * lebar);

};
public:
//untuk mengakses panjang dan lebar
friend void PersegiPanjang ::inputData(BangunDatar&bD);
//untuk mengakses fungsi
friend void PersegiPanjang ::outputData(BangunDatar&bD);
};

void PersegiPanjang ::inputData(BangunDatar&bD){
    cout << "Masukan Panjang :";
    cin >> bd.panjang;
    cout << "Masukan Lebar :";
    cin >> bd.lebar;
}
void PersegiPanjang::outputData(BangunDatar&bD){
    cout << "Luas :" << bd.hitungLuas() << endl;
    cout << "Keliling :" << bd.hitungKeliling() endl;
};
int main(){
    PersegiPanjang pP;
    BangunDatar bD;
    pP.inputData(bD);
    pP.outputData(bD);
};