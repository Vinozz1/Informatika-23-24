#include <iostream>
#include <cmath>
using namespace std;

int main (){
    double number_one = 2.17;
    double number_two = 3.89;

    cout << "round : " << round(number_one) << " - " << round(number_two) << endl;
    cout << "floor : " << floor(number_one) << " - " << floor(number_two) << endl;
    cout << "ceil : " << ceil(number_one) << " - " << ceil(number_two) << endl;
    cout << "trunc : " << trunc(number_one) << " - " << trunc(number_two) << endl;
    cout << "int : " << (int)(number_one) << " - " << (int)(number_two) << endl;
    return 0;
}