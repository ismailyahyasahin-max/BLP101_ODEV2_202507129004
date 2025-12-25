#include <iostream>
using namespace std;

int main() {
    double tutar, netTutar;
    cin >> tutar;
    if (tutar < 100) netTutar = tutar;
    else if (tutar < 200) netTutar = tutar * 0.9; // %10 indirim [cite: 49]
    else netTutar = tutar * 0.8; // %20 indirim [cite: 49]
    cout << "Odenecek Tutar: " << netTutar << " TL";
    return 0;
}