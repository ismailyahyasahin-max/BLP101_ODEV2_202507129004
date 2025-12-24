#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;
    // Sayının işaret durumunu kontrol et [cite: 29]
    if (sayi > 0) cout << "Pozitif";
    else if (sayi < 0) cout << "Negatif";
    else cout << "Notr"; // 0'a eşitse [cite: 30]
    return 0;
}