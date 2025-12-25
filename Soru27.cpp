#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 1000; i++) {
        int t = i, top = 0;
        while (t > 0) {
            int r = t % 10;
            top += (r * r * r); // Basamak küpleri toplamı [cite: 142]
            t /= 10;
        }
        if (top == i) cout << i << " ";
    }
    return 0;
}