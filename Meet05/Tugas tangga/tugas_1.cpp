#include <iostream>

using namespace std;

int main() {
    int tangga1;

    cout << "Masukkan jumlah tingkatan untuk pola pertama: ";
    cin >> tangga1;

    for (int i = 1; i <= tangga1; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= tangga1 - i + 1; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
