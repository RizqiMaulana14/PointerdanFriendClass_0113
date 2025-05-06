#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk : " << nim << endl;
    }
};

int main (){
    mahasiswa mhs{1};       //Objek mhs
    mhs.showNim();          //Member Acces Operator

    mahasiswa &refMhs = mhs;    //Pointer Reference refMhs
    refMhs.nim = 2;             //Member Acces Operator

    mahasiswa *pMhs = &mhs;     //Pointer Deference pMhs
    pMhs ->nim = 3;             // Arrow Operator
    pMhs ->showNim();
    return 0;
}