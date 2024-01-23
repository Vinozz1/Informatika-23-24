#include <iostream>
#include <cmath>
using namespace std;

 double find_area(double a, double t){
    double result;
    result = a * t / 2;
    return result;
}

double find_hypo( double a, double t){
    return sqrt( pow(a,2) + pow(t,2));
}

double find_perimeter(double a, double t){
    return a + t + sqrt(pow(a,2) + pow(t,2));
}

int main(){
    int a, t;
    cin >> a >> t ;
    cout << "area : " << find_area(a, t ) << endl;
    cout << "Hypo : " << find_hypo(a, t) << endl;
    cout << "perimeter : " << find_perimeter(a, t) << endl;
    return 0;
}

