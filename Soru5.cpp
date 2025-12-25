#include <iostream>
using namespace std;

int main() {
    int sayi;
    cin >> sayi;
    // Her ikisine de tam bölünüyorsa [cite: 45]
    if (sayi % 3 == 0 && sayi % 7 == 0) cout << "Mukemmel Kat";
    else if (sayi % 3 == 0 || sayi % 7 == 0) cout << "Kismi Kat";
    else cout << "Bolunemez";
    return 0;
}