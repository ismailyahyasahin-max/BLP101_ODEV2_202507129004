#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string binary = "";
    cin >> n;
    while (n > 0) {
        binary = to_string(n % 2) + binary; // Kalanları başa ekleyerek string birleştirme [cite: 153]
        n /= 2;
    }
    cout << binary;
    return 0;
}