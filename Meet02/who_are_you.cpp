#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    cout << " What's your name ? ";
    cin >> name;
    // getline(cin, name);
    cout << " Hi " << name << endl;
    cout << "How old are you?";
    cin >> age;
    if (age < 30){
        cout << "Kamu muda";
    }
     else {
        cout << "Kamu Tua";
    }
    }