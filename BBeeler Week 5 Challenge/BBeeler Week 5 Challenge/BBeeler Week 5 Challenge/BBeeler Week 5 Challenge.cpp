#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter a POSITIVE, NON-ZERO integer that you would like factored: ";
    int number;
    cin >> number;

    while (number <= 0)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(100, '\n');
            system("cls");
            cout << "Invalid entry! Try Again!" << endl;
            cout << "Please enter a POSITIVE, NON-ZERO integer that you would like factored: ";
            cin >> number;
        }
        if (number < 0)
        {
            cout << "That number is NOT positive! Please enter a positive integer that you would like factored: ";
            cin >> number;
        }
        else if (number == 0)
        {
            cout << "That number is zero! Please enter a positive integer that you would like factored: ";
            cin >> number;
        }
    }

    cout << "The factors of " << number << " are: ";

    for (int i = 1; i <= number; i++)
        if (number % i == 0)
        {
            cout << i << " ";
        }
    cout << endl;
}