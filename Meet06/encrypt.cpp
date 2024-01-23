// #include <iostream>
// #include <string>
// #include <cctype>
// using namespace std;

// int main() {
//     string alphabets;
//     getline(cin, alphabets);

//     for (int i = 0; i < alphabets.length(); i++) {
//         if ((int)(alphabets[i]) >= 97 && (int)(alphabets[i]) <=122) {
//             cout << (char)toupper(alphabets[i])++2 ;
//         } else {
//             cout << alphabets[i];
//         }
//     }

//     cout << endl;
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

    cout << "Encrypt berapa: ";
    cin >> shift;

    for (int i = 0; i < alphabets.length(); i++) {
        if (isalpha(alphabets[i])) {
            char base = islower(alphabets[i]) ? 'a' : 'A';
            char encryptedChar = (alphabets[i] - base + shift) % 26 + base;
            cout << encryptedChar;
        } else {
            cout << alphabets[i];
        }
    }

    cout << endl;
    return 0;
}
