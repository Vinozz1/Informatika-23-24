#include <iostream>
using namespace std;

int main() {
    int sum_series1 = 0;
    int sum_series2 = 0;
    int sum_series3 = 0;
    int sum_series4 = 0;

    //  4, 14, 24, 34 ....(<100)
    // Looping while
    int i = 4;
    while (i < 100) {
        cout << i << " ";
        sum_series1 += i; 
        i += 10;
    }
    cout << endl;

    //  101, 96, 91, 86,...(>0)
    for (int i = 101; i > 0; i -= 5) {
        cout << i << " ";
        sum_series2 += i; 
    }
    cout << endl;

    //  2, 4, 8, 16, 32, 64,....(<=1000)
    for (int i = 2; i <= 1000; i *= 2) {
        cout << i << " ";
        sum_series3 += i; 
    }
    cout << endl;

    //  80, 40, 20, 10, 5
    for (int i = 80; i >= 5; i /= 2) {
        cout << i << " ";
        sum_series4 += i; 
    }
    cout << endl;

    cout << "Sum  1: " << sum_series1 << endl;
    cout << "Sum  2: " << sum_series2 << endl;
    cout << "Sum  3: " << sum_series3 << endl;
    cout << "Sum  4: " << sum_series4 << endl;

    return 0;
}
