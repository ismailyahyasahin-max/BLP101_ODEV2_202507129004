#include <iostream>
using namespace std;

int main() {
    int yil;
    cin >> yil;
    // Artık yıl kuralı: 4'e bölünmeli, 100'e bölünüyorsa 400'e de bölünmeli [cite: 54]
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) 
        cout << "Artik Yildir";
    else 
        cout << "Artik Yil Degildir";
    return 0;
}