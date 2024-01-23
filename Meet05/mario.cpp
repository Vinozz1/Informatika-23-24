#include <iostream>
using namespace std;

int main(){
    // horizontal -> #### 
    int bricks;
    cout << "input number of brick : ";
    cin >> bricks;
    for (int i = 0; i < bricks; i++){
        cout << "#" << endl;
    } 
    return 0;
}   