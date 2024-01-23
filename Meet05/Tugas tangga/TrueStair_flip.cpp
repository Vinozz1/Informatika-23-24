#include <iostream>
using namespace std;

int main(){
    int bricks;
    cout << "Berapa brick :";
    cin >> bricks;
    for (int x = 2; x <= bricks; x++){
        for (int y = bricks; y > x; y--){
            cout << " ";
        }
        for (int z = 1; z <= x; z++){
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}