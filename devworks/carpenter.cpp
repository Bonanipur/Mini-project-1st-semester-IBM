#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findLCM(int a, int b, int gcd) {
    return (a * b) / gcd;
}

int main() {
    int a, b;
    cout<<"enter length1 and length2"<<endl;
    cin >> a >> b;
    
    int gcd = findGCD(a, b);
    int lcm = findLCM(a, b, gcd);
    
    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm << endl;

    return 0;
}





