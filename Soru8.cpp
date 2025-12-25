#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    // Üçgen eşitsizliği kontrolü [cite: 59]
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) cout << "Eskenar Ucgen";
        else if (a == b || b == c || a == c) cout << "Ikizkenar Ucgen";
        else cout << "Cesitkenar Ucgen";
    } else {
        cout << "Ucgen Olusmaz";
    }
    return 0;
}