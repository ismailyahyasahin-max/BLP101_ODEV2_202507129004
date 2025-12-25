#include <iostream>
using namespace std;

int main() {
    int n, toplam = 0;
    cin >> n;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) toplam += i; // Kendisi hariç bölenler [cite: 110]
    }
    if (toplam == n) cout << "Mukemmel Sayidir";
    else cout << "Degildir";
    return 0;
}