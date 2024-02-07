#include <iostream>
using namespace std;

int main() {
    int ahmet = 174;
    int mehmet = 172;
    int ali = 180;
    int ayse = 164;
    int fatma = 160;

    int toplamboy = ahmet + mehmet + ali + ayse + fatma;
    int ortalama = toplamboy / 5;

    int enBuyukBoy = ahmet; 
    int enKucukBoy = ahmet; 

    
    if (ahmet > ortalama) {
        cout << "Ahmet ortalamanın üstünde" << endl;
    } else {
        cout << "Ahmet ortalamanın altında" << endl;
    }

    
    if (mehmet > ortalama) {
        cout << "Mehmet ortalamanın üstünde" << endl;
    } else {
        cout << "Mehmet ortalamanın altında" << endl;
    }
    if (mehmet > enBuyukBoy) {
        enBuyukBoy = mehmet;
    }
    if (mehmet < enKucukBoy) {
        enKucukBoy = mehmet;
    }

    
    if (ali > ortalama) {
        cout << "Ali ortalamanın üstünde" << endl;
    } else {
        cout << "Ali ortalamanın altında" << endl;
    }
    if (ali > enBuyukBoy) {
        enBuyukBoy = ali;
    }
    if (ali < enKucukBoy) {
        enKucukBoy = ali;
    }

    
    if (ayse > ortalama) {
        cout << "Ayşe ortalamanın üstünde" << endl;
    } else {
        cout << "Ayşe ortalamanın altında" << endl;
    }
    if (ayse > enBuyukBoy) {
        enBuyukBoy = ayse;
    }
    if (ayse < enKucukBoy) {
        enKucukBoy = ayse;
    }

    
    if (fatma > ortalama) {
        cout << "Fatma ortalamanın üstünde" << endl;
    } else {
        cout << "Fatma ortalamanın altında" << endl;
    }
    if (fatma > enBuyukBoy) {
        enBuyukBoy = fatma;
    }
    if (fatma < enKucukBoy) {
        enKucukBoy = fatma;
    }

    cout << "En büyük boy: " << enBuyukBoy << endl;
    cout << "En küçük boy: " << enKucukBoy << endl;

    return 0;
}
