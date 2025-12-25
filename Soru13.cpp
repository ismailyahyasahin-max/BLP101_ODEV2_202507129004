#include <iostream>
using namespace std;

int main() {
    int n;
    long long f = 1;
    cin >> n;
    for (int i = 1; i <= n; i++) f *= i;
    cout << f; // 0! = 1 kuralı döngüye girmediği için korunur [cite: 79]
    return 0;
}