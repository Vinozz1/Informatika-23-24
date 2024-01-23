#include <iostream>
using namespace std;

int main(){
    long x, y;
    cin >> x >> y;
if (x < y)
    {
        cout << "x is negatif\n";
    }
    else if (x > y)
    {
        cout << " x is positif\n";
    }
    else 
    {
        cout << "x is zero\n";
    }
    return 0;
    }