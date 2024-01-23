#include <iostream>
using namespace std;

int main(){
    int tangga;

    cout << "Berapa baris ke bawah : ";
    cin >> tangga;

    for (int i = 1; i <= tangga; i++){
        for (int j = 1; j <= i; j++) {
            cout << "#";
        }
        cout << "\n";
    } 


    // int N = 5;
    // for (int i = 0; i < N; i++){
    //     for (int j = 0; j < N; j++){
    //         if ( j > 1)
    //             break;
    //         cout << "#";
    //     }
    //     cout << endl;
    // } 

    return 0;
}
