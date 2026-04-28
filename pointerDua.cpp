#include <iostream>
using namespace std;

class mahasiswa {
    int nim;
    void showNim (){
        cout <<"No Induk ="<<nim<<endl;
    }
};

int main(){
    mahasiswa *mhs = new mahsiswa {1};
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    return 0;

};