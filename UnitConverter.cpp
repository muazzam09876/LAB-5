
// Muazzam Munir -- L1F26BSCS0313

#include <iostream>
using namespace std;

int main()
{
    int choice;
    float value, converted;

    cout << "Unit Converter" << endl;
    cout << "1. Kilometres to miles" << endl;
    cout << "2. Kilograms to pounds" << endl;
    cout << "3. Celsius to Fahrenheit" << endl;
    cout << "4. Inches to centimetres" << endl;

    cout << "Enter your choice (1-4): ";
    cin >> choice;

    cout << "Enter the value: ";
    cin >> value;

    switch (choice)
    {
        case 1:
            converted = value * 0.621371;
            cout << converted << " miles" << endl;
            break;

        case 2:
            converted = value * 2.20462;
            cout << converted << " pounds" << endl;
            break;

        case 3:
            converted = value * 9 / 5 + 32;
            cout << value << " C = " << converted << " F" << endl;
            break;

        case 4:
            converted = value * 2.54;
            cout << converted << " cm" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}
