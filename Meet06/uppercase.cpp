// #include <iostream>
// #include <string>
// using namespace std;

// int main(){
//     string name;
//     getline(cin, name);
//     for (int i = 0; i < name.length(); i++){
//         if ((int)(name[i]) >= 97 && (int)(name[i]) <=122)
//         cout << (char)((int)(name[i])-32);
//         else
//             cout << name[i];
//     }
//     cout << endl;
//     // cctype : toupper()
//     return 0;
// }


// #include <iostream>
// #include <string>
// #include <cctype> 
// using namespace std;

// int main() {
//     string name;
//     getline(cin, name);

//     for (int i = 0; i < name.length(); i++) {
//         if (islower(name[i])) {
//             cout << static_cast<char>(toupper(name[i]));
//         } else {
//             cout << name[i];
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
    string name;
    getline(cin, name);

    for (int i = 0; i < name.length(); i++) {
        if ((int)(name[i]) >= 97 && (int)(name[i]) <=122) {
            cout << (char)toupper(name[i]);
        } else {
            cout << name[i];
        }
    }

    cout << endl;
    return 0;
}
