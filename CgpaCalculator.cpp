#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Course {
    string name;
    double grade;
    double credit;
};

int main() {
    int n;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<Course> courses(n);
    double totalCredits = 0, totalGradePoints = 0;

    cout << "\nEnter details for each course:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << i + 1 << " name: ";
        cin >> courses[i].name;
        cout << "Grade (out of 10): ";
        cin >> courses[i].grade;
        cout << "Credit hours: ";
        cin >> courses[i].credit;

        totalCredits += courses[i].credit;
        totalGradePoints += (courses[i].grade * courses[i].credit);
    }

    double GPA = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\n-----------------------------------------";
    cout << "\nCourse\t\tGrade\tCredit";
    cout << "\n-----------------------------------------\n";
    for (auto &c : courses)
        cout << c.name << "\t\t" << c.grade << "\t" << c.credit << endl;

    cout << "-----------------------------------------\n";
    cout << "Total Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "Semester GPA: " << GPA << endl;
    cout << "Overall CGPA: " << GPA << endl;  // Assuming one semester for simplicity
    cout << "-----------------------------------------\n";

    return 0;
}
