#include <iostream>
using namespace std;

int main() {
    int n, m;  
    cin >> n >> m;  

    int bill[n][m];  

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> bill[i][j];
        }
    }

    int studentTotal[n] = {0};  
    int dayTotal[m] = {0};      

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            studentTotal[i] += bill[i][j];  
            dayTotal[j] += bill[i][j];      
        }
    }

    
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << " total:" << studentTotal[i] << endl;
    }

    
    int highestDay = 0;
    int highestCollection = dayTotal[0];
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > highestCollection) {
            highestCollection = dayTotal[j];
            highestDay = j;
        }
    }

    cout << "\nHighest collection on Day " << highestDay + 1 << endl;

    
    int maxSpending = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpending) {
            maxSpending = studentTotal[i];
        }
    }

    cout << "Highest spender: ";
    bool firstPrinted = false;  

    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpending) {
            if (firstPrinted)
                cout << " and ";
            cout << "Student " << i + 1;
            firstPrinted = true;
        }
    }
    cout << endl;

    return 0;  
}

