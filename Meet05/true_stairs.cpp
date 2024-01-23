#include <iostream>
using namespace std;

int main(){
    int tangga;

    cout << "Berapa tangga : ";
    cin >> tangga;

    for (int k = 1; k <= tangga; k++){
        for ( int i = tangga; i > k; i--) {
            cout << " ";
        }

        for (int j = 1; j <= k; j++) {
            cout << "#";
        }
        cout << endl;
    }

    return 0;
}
