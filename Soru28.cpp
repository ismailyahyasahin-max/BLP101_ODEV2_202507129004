#include <iostream>
using namespace std;

int main() {
    int n, ters = 0, orj;
    cin >> n;
    orj = n;
    while (n > 0) {
        ters = ters * 10 + (n % 10);
        n /= 10;
    }
    if (orj == ters) cout << "Palindrom Sayidir";
    else cout << "Degildir";
    return 0;
}