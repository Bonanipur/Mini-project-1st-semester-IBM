#include <iostream>
using namespace std;
//1 1 0 1 1 0 1
//1 0 1 1 1 1 1
//0 1 1 0 1 1 0
//1 1 1 1 0 1 1
//1 0 1 0 1 0 1
//0 0 1 1 1 1 1
//1 1 0 0 0 1 1
//1 1 1 1 1 0 0
//0 1 1 1 1 1 1
//1 0 0 1 1 1 1
int main() {
    int A[10][7];  

    
    cout << "Enter attendance data (10 students × 7 days):" << endl;
    for (int i = 0; i < 10; i++) {              
        for (int j = 0; j < 7; j++) {            
            cin >> A[i][j];                      
        }
    }

    cout << "\nWeekly Attendance Summary\n";
    cout << "-------------------------\n\n";

    cout << "Total Present Days:\n";

    int totalPresent[10];  
    int highestAttendance = 0;  
    int topStudent = 0;         

    
    for (int i = 0; i < 10; i++) {
        totalPresent[i] = 0;               
        for (int j = 0; j < 7; j++) {
            totalPresent[i] += A[i][j];    
        }
        cout << "Student " << i + 1 << ": " << totalPresent[i] << endl;

        
        if (totalPresent[i] > highestAttendance) {
            highestAttendance = totalPresent[i];
            topStudent = i;
        }
    }

    cout << "\nStudent with Highest Attendance: Student "
         << topStudent + 1 << " (" << highestAttendance << " Days)" << endl;

    
    int lowestDay = 0;           
    int lowestAttendance = 999;  

    for (int j = 0; j < 7; j++) {
        int dayTotal = 0;        
        for (int i = 0; i < 10; i++) {
            dayTotal += A[i][j]; 
        }

        if (dayTotal < lowestAttendance) {  
            lowestAttendance = dayTotal;
            lowestDay = j;
        }
    }

    cout << "\nDay with Lowest Overall Attendance: Day " << lowestDay + 1 << endl;

    return 0;  
}
