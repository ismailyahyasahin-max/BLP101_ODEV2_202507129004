#include <iostream>
using namespace std;

int main() {
    float vize, final, ort;
    cout << "Vize ve Final notlarini giriniz: ";
    cin >> vize >> final;
    ort = (vize * 0.4) + (final * 0.6); // Vize %40, Final %60 [cite: 40]
    
    if (ort >= 90) cout << "AA";
    else if (ort >= 85) cout << "BA";
    else if (ort >= 80) cout << "BB";
    else if (ort >= 50) cout << "Gecer";
    else cout << "Kaldi"; // 50 altı [cite: 41]
    return 0;
}