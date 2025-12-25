#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 2; n > 1; i++) { // En küçük asaldan başla [cite: 155]
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    return 0;
}