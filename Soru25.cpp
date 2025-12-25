#include <iostream>
using namespace std;

int main() {
    int n, ters = 0;
    cin >> n;
    while (n > 0) {
        ters = ters * 10 + (n % 10); // Ters çevirme formülü [cite: 136]
        n /= 10;
    }
    cout << ters;
    return 0;
}