#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Course {
    string name;
    int credits;
    float gradePoint;
};

int main() {
    int n;
    vector<Course> courses;
    float totalGradePoints = 0, totalCredits = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        Course c;
        cout << "\nEnter course name: ";
        cin >> c.name;
        cout << "Enter credits for " << c.name << ": ";
        cin >> c.credits;
        cout << "Enter grade point for " << c.name << ": ";
        cin >> c.gradePoint;

        courses.push_back(c);
        totalCredits += c.credits;
        totalGradePoints += c.credits * c.gradePoint;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n--- Course Details ---\n";
    for (const auto& course : courses) {
        cout << "Course: " << course.name
             << ", Credits: " << course.credits
             << ", Grade Point: " << course.gradePoint << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
