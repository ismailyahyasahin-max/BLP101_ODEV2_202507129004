#include <iostream>
using namespace std;

int main() {
    int n, sayac = 0;
    cin >> n;
    if (n == 0) sayac = 1;
    while (n != 0) {
        n /= 10; // Sürekli 10'a bölme [cite: 90]
        sayac++;
    }
    cout << sayac << " Basamakli";
    return 0;
}