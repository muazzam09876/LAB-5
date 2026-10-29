// Muazzam Munir -- L1F26BSCS0313


#include <iostream>
using namespace std;

int main()
{
    int month;

    cout << "Enter ANY month number (1-12): ";
    cin >> month;

    switch (month)
    {
        case 12:
        case 1:
        case 2:
            cout << "Season: Winter" << endl;
            break;

        case 3:
        case 4:
        case 5:
            cout << "Season: Spring" << endl;
            break;

        case 6:
        case 7:
        case 8:
            cout << "Season: Summer" << endl;
            break;

        case 9:
        case 10:
        case 11:
            cout << "Season: Autumn" << endl;
            break;

        default:
            cout << "Invalid month" << endl;
            return 0;
    }

    switch (month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Days: 31" << endl;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Days: 30" << endl;
            break;

        case 2:
            cout << "Days: 28" << endl;
            break;

        default:
            cout << "Invalid month" << endl;
    }

    return 0;
}
