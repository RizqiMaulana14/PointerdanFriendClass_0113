#include <iostream>
using namespace std;

class PersegiPanjang{
    public:                             //Akses Modifier
    int panjang, lebar;

    public:
    void input(){
        cout << "Masukkan Panjang : ";
        cin >> panjang;
        cout << "Masukkan Lebar : ";
        cin >> lebar;
    }

    int luasPp (int a, int b){
        return a * b;
    }
    //lingkaran ol;
};

class Lingkaran{
    public:
    int jarijari;

    void input(){
        cout << "Masukkan Jari-Jari : ";
        cin >> jarijari;
    }

    int luasLingkaran (int r){
        return 3.14 * r * r;
    }
};

int main(){
    PersegiPanjang objekPP;            //Membuat Objek
    Lingkaran ol;

    cout << "Masukkan Panjang : ";
    cin >> objekPP.panjang;
    cout << "Masukkan Lebar : ";
    cin >> objekPP.lebar;
    cout << "Luas Persegi Panjang : " << objekPP.luasPp(objekPP.panjang, objekPP.lebar) << endl;
}