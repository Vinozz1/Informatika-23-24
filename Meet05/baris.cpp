#include <iostream>
using namespace std;

int main(){
    // 4, 14, 24, 34 ....(<100)
    // looping while
    int i = 4;
    while ( i < 100 ){
        cout << i << " ";
        i += 10;
    }
    cout << endl;

    //looping for 
    for ( int i = 4; i < 100; i += 10){
        cout << i << " ";
    }
    cout << endl;

    // 101, 96, 91, 86,...(>0)
    for ( int i = 101; i > 0; i -= 5){
        cout << i << " ";
    }
    cout << endl;

    // 2, 4, 8, 16, 32, 64,....(<=1000)
    for ( int i = 2; i <= 1000; i *= 2){
        cout << i << " ";
    }
    cout << endl;

    // 80, 40, 20, 10, 5
    for ( int i = 80; i >= 5; i /= 2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}