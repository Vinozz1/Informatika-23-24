#include <iostream>
using namespace std;

int main(){
    int bricks;
    cout << "Berapa brick :";
    cin >> bricks;
    for (int x = 0; x < bricks; x++){
        for (int y = bricks; y > x; y--){
            cout << '#';
        }
        cout << endl;
    }
}