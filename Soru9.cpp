#include <iostream>
using namespace std;

int main() {
    double s1, s2;
    char op;
    cin >> s1 >> op >> s2;
    switch(op) {
        case '+': cout << s1 + s2; break;
        case '-': cout << s1 - s2; break;
        case '*': cout << s1 * s2; break;
        case '/': 
            if (s2 == 0) cout << "Hata: Sifira bolunemez"; // Sıfıra bölme hatası [cite: 64]
            else cout << s1 / s2; 
            break;
    }
    return 0;
}