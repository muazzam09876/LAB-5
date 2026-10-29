// Muazzam Munir -- L1F26BSCS0313

#include <iostream>
using namespace std;

int main()
{
    char grade;
    double gradePoint;

    cout << "Enter your ACHIEVE grade (A, B, C, D, F): ";
    cin >> grade;

    switch (grade)
    {
        case 'A':
        case 'a':
            cout << "Excellent work" << endl;
            gradePoint = 4.0;
            break;

        case 'B':
        case 'b':
            cout << "Good" << endl;
            gradePoint = 3.0;
            break;

        case 'C':
        case 'c':
            cout << "Satisfactory" << endl;
            gradePoint = 2.0;
            break;

        case 'D':
        case 'd':
            cout << "Needs improvement" << endl;
            gradePoint = 1.0;
            break;

        case 'F':
        case 'f':
            cout << "Fail" << endl;
            gradePoint = 0.0;
            break;

        default:
            cout << "Invalid grade" << endl;
            gradePoint = 0.0;
    }

    cout << "Grade Point: " << gradePoint << endl;

    return 0;
}
