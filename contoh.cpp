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
    
}