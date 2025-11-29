#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;

    int profit = 0, loss = 0;
    int value;

    cout << "Enter daily profit/loss values: ";
    for (int i = 0; i < n; i++) {
        cin >> value;

        if (value > 0)
            profit += value;
        else if (value < 0)
            loss += (-value); // convert negative to positive before adding
    }

    int netBalance = profit - loss;

    cout << "Total Profit: " << profit << endl;
    cout << "Total Loss: " << loss << endl;
    cout << "Net Balance: " << netBalance << endl;

    return 0;
}

