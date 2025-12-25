#include <iostream>
using namespace std;

int main() {
    int s1, s2, ebob = 1;
    cin >> s1 >> s2;
    int kucuk = (s1 < s2) ? s1 : s2;
    for (int i = 1; i <= kucuk; i++) {
        if (s1 % i == 0 && s2 % i == 0) ebob = i; // En büyüğü sakla [cite: 131]
    }
    cout << "EBOB: " << ebob;
    return 0;
}