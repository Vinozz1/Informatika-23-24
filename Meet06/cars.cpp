#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string cars[] = {"honda", "civic", "kijang", "inova", "truk"};
    
    cout << sizeof(cars) << endl;
    int length_of_cars = sizeof(cars) / sizeof(string);
    for (int i = 0; i < length_of_cars; i++)
    {
        cout << cars[i] << endl;
    }

    // tipe ke dua hanya untuk vscode
    // for (int car : cars)
    // {
    //     cout << cars << endl;
    // }
    return 0;
}