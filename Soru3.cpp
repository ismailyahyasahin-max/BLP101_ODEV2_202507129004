#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Uc farkli sayi giriniz: ";
    cin >> s1 >> s2 >> s3;
    // if-else if yapısı ile maksimumu tespit et [cite: 37]
    if (s1 >= s2 && s1 >= s3) cout << "En Buyuk Sayi: " << s1;
    else if (s2 >= s1 && s2 >= s3) cout << "En Buyuk Sayi: " << s2;
    else cout << "En Buyuk Sayi: " << s3;
    return 0;
}