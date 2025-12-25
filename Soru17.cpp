#include <iostream>
using namespace std;

int main() {
    int n, toplam = 0;
    cin >> n;
    while (n > 0) {
        toplam += n % 10; // Modülo ile son rakamı al [cite: 95]
        n /= 10; // Bölme ile rakamı at [cite: 95]
    }
    cout << toplam;
    return 0;
}