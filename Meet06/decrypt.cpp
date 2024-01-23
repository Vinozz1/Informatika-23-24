// #include <iostream>
// #include <string>
// #include <cmath>
// using namespace std;

// int main(){
//     string numbers;
//     string name;
//     getline(cin, name);
//     for (int i = 0; i < name.length(); i++){
//         if ((int)(name[i]) >= 97 && (int)(name[i]) <=122)
//         cout << (char)((int)(name[i])-32);
//         else
//             cout << name[i] ++ numbers[2];
//     }
//     cout << endl;
//     // cctype : toupper()
//     return 0;
// }

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string alphabets;
    int shift;

    cout << "Huruf: ";
    getline(cin, alphabets);

    cout << "Decrypt berapa: ";
    cin >> shift;

    shift = -shift;

    for (int i = 0; i < alphabets.length(); i++) {
        if (isalpha(alphabets[i])) {
            char base = islower(alphabets[i]) ? 'a' : 'A';
            char decryptedChar = (alphabets[i] - base + 26 + shift) % 26 + base;
            cout << decryptedChar;
        } else {
            cout << alphabets[i];
        }
    }

    cout << endl;
    return 0;
}
