// Muazzam Munir -- L1F26BSCS0313


#include <iostream>
using namespace std;

int main()
{
    int correctPin = 1234;
    int enteredPin;
    int balance = 20000;
    int amount;

    cout << "Enter your pASSWORD: ";
    cin >> enteredPin;

    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (enteredPin == correctPin)
    {
        if (amount > 0)
        {
            if (amount <= balance)
            {
                if (amount % 500 == 0)
                {
                    balance = balance - amount;

                    cout << "Withdrawal successful" << endl;
                    cout << "Amount withdrawn: Rs. " << amount << endl;
                    cout << "Remaining balance: Rs. " << balance << endl;
                }
                else
                {
                    cout << "Amount must be a multiple of 500" << endl;
                }
            }
            else
            {
                cout << "Insufficient balance" << endl;
            }
        }
        else
        {
            cout << "Invalid amount" << endl;
        }
    }
    else
    {
        cout << "Incorrect PIN" << endl;
    }

    return 0;
}

/*
Observation 1:
If PIN 4321 and amount -500 are entered,
the message "Incorrect PIN" is printed.
The other messages are not shown because the
nested checks run only when the previous check passes.

Observation 2:
For amount 30250 with the correct PIN,
"Amount must be a multiple of 500" is printed.
This shows that the order of nested checks determines
which error message appears first.
*/
