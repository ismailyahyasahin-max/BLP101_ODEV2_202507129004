#include <iostream>
using namespace std;

int main() {
    int sayi;
    cout << "Bir sayi giriniz: ";
    cin >> sayi;
    // 2 ile bölümünden kalanı kontrol et [cite: 33]
    if (sayi % 2 == 0) cout << "Cift Sayi";
    else cout << "Tek Sayi";
    return 0;
}