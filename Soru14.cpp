#include <iostream>
using namespace std;

int main() {
    int taban, us, sonuc = 1;
    cin >> taban >> us;
    for (int i = 0; i < us; i++) sonuc *= taban; // Döngü ile hesaplama [cite: 83]
    cout << "Sonuc: " << sonuc;
    return 0;
}