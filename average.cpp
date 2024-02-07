#include <iostream>

int main() {
    const int kisiSayisi = 5;
    double boylar[kisiSayisi];
    double toplamBoy = 0;

    // Boyları kullanıcıdan alıyoruz
    for (int i = 0; i < kisiSayisi; ++i) {
        std::cout << "Kişi " << i + 1 << " boyunu girin: ";
        std::cin >> boylar[i];
        toplamBoy += boylar[i];
    }

    // Ortalamayı hesaplama 
    double ortalamaBoy = toplamBoy / kisiSayisi;

    // En büyük ve en küçük boyu bulma
    double enBuyukBoy = boylar[0];
    double enKucukBoy = boylar[0];

    for (int i = 1; i < kisiSayisi; ++i) {
        if (boylar[i] > enBuyukBoy) {
            enBuyukBoy = boylar[i];
        } else if (boylar[i] < enKucukBoy) {
            enKucukBoy = boylar[i];
        }
    }

    // Sonuçları ekrana yazdırma işlemii
    if (enBuyukBoy > ortalamaBoy) {
        std::cout << "En büyük boya sahip değil." << std::endl;
    } else {
        std::cout << "En küçük boya sahip." << std::endl;
    }
return 0;
}