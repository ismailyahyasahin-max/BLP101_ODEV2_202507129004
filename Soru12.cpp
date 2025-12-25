#include <iostream>
using namespace std;

int main() {
    int n, toplam = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) toplam += i; // Biriktirici değişken kullanımı [cite: 76]
    cout << "Toplam: " << toplam;
    return 0;
}