#include <iostream>
using namespace std;

int main() {
    int bas, bit;
    cin >> bas >> bit;
    for (int i = bas; i <= bit; i++) {
        if (i % 5 == 0) cout << i << " ";
    }
    return 0;
}