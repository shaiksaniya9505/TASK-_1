#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "====== CGPA Calculator ======" << endl;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    string courseName[numCourses];
    float creditHours[numCourses];
    float gradePoint[numCourses];

    for (int i = 0; i < numCourses; i++) {
        cout << "\nEnter details for Course " << i + 1 << ":\n";

        cout << "Course Name: ";
        cin.ignore(); 
        getline(cin, courseName[i]);

        cout << "Credit Hours: ";
        cin >> creditHours[i];

        cout << "Grade Point (out of 10): ";
        cin >> gradePoint[i];

        
        totalCredits += creditHours[i];
        totalGradePoints += (gradePoint[i] * creditHours[i]);
    }

    float CGPA = totalGradePoints / totalCredits;

    
    cout << "\n======== RESULT ========" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(20) << "Course Name" 
         << setw(15) << "Credit Hours" 
         << setw(15) << "Grade Point" << endl;

    for (int i = 0; i < numCourses; i++) {
        cout << left << setw(20) << courseName[i] 
             << setw(15) << creditHours[i] 
             << setw(15) << gradePoint[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits;
    cout << "\nTotal Grade Points: " << totalGradePoints;
    cout << "\nCGPA: " << CGPA << " / 10.00" << endl;

    if(CGPA >= 9.0)
        cout << "Grade: A+" << endl;
    else if(CGPA >= 8.0)
        cout << "Grade: A" << endl;
    else if(CGPA >= 7.0)
        cout << "Grade: B" << endl;
    else if(CGPA >= 6.0)
        cout << "Grade: C" << endl;
    else if(CGPA >= 5.0)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F (Fail)" << endl;

    return 0;
}

