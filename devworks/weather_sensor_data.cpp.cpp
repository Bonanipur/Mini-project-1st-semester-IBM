#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of readings: ";
    cin >> n;

    int positive = 0, negative = 0, zero = 0;
    int num;

    cout << "Enter the readings: ";
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Zero = " << zero << endl;

    return 0;
}

