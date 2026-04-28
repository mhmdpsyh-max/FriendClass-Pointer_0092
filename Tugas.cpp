#include <iostream>
#include <cmath>
using namespace std;

class BelahKetupat; 

class LayangLayang {
private:
    float d1, d2;
    float s1, s2; 

public:
    void input() {
        cout << "== Input Layang-Layang ==" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi 1: "; cin >> s1;
        cout << "Sisi 2: "; cin >> s2;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (s1 + s2);
    }

    void output() {
        cout << "\n== Layang-Layang ==" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }

    // Friend method
    friend float kelilingLayang(LayangLayang l);
};

float kelilingLayang(LayangLayang l) {
    return 2 * (l.s1 + l.s2);
}



class BelahKetupat {
private:
    float d1, d2;
    float sisi;

public:
    void input() {
        cout << "\n== Input Belah Ketupat ==" << endl;
        cout << "Diagonal 1: "; cin >> d1;
        cout << "Diagonal 2: "; cin >> d2;
        cout << "Sisi: "; cin >> sisi;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 4 * sisi;
    }

    void output() {
        cout << "\n== Belah Ketupat ==" << endl;
        cout << "Luas: " << luas() << endl;
        cout << "Keliling: " << keliling() << endl;
    }
};


int main() {
    LayangLayang ll;
    BelahKetupat bk;

    ll.input();
    bk.input();

    ll.output();
    bk.output();

    cout << "\nKeliling Layang-Layang (Friend): " 
         << kelilingLayang(ll) << endl;
         
         return 0;
}