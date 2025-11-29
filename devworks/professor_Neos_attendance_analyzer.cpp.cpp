#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int present = 0, absent = 0;
    int status;

    cout << "Enter attendance (1 for present, 0 for absent): ";
    for (int i = 0; i < n; i++) {
        cin >> status;
        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
    }

    cout << "Present: " << present << endl;
    cout << "Absent: " << absent << endl;

    return 0;
}

