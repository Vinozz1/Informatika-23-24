#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "HI!";
    for (char c : s){
        cout << c << endl;
    }

    for (int i = 0; i < s.length(); i++){
        cout << s[1] << endl;
    }

    cout << (int)(s[0]) << endl;
    cout << (int)(s[1]) << endl;
    cout << (int)(s[2]) << endl;
    cout << (int)(s[3]) << endl;
    // cout << sizeof(string) << endl;
    // cout << sizeof(s) << endl;
    return 0;
}