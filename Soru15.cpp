#include <iostream>
using namespace std;

int main() {
    int n;
    double sayi, toplam = 0;
    cout << "Kac adet sayi gireceksiniz? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> sayi;
        toplam += sayi;
    }
    cout << "Ortalama: " << toplam / n;
    return 0;
}