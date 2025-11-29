#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    // Check Even or Odd
    if (n % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    // Check Prime
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    // Output Prime or Not Prime
    if (isPrime)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}

