#include <iostream>
using namespace std;

int main (){
    long number;
    cin >> number;
    if (number % 2 == 0 && number > 0){
        cout << "genap positif\n" ;
    } else if ( number % 2 == 0 && number < 0){
        cout << "genap negatif\n" ;
    } else if ( number % 2 != 0 && number > 0){
        cout << "ganjil positif\n" ;
    } else if ( number % 2 != 0 && number < 0){
        cout << "ganjil negatif\n" ;
    } else {
        cout << "No1/n"
    }
    return 0;
}