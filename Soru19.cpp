#include <iostream>
using namespace std;

int main() {
    int n;
    bool asal = true;
    cin >> n;
    if (n < 2) asal = false;
    for (int i = 2; i < n; i++) { // 2'den sayıya kadar [cite: 102]
        if (n % i == 0) {
            asal = false;
            break;
        }
    }
    if (asal) cout << "Sayi Asaldir";
    else cout << "Sayi Asal Degildir";
    return 0;
}