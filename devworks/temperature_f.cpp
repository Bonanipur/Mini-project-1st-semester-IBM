#include <iostream>
using namespace std;


int main() {
    double C;

    cout<<"enter the temperature in celcius: "<<endl;
    cin >> C;

    double F = (C * 9 / 5) + 32;

    
    
    cout << "Temperature in Fahrenheit = " << F << endl;

    return 0;
}

