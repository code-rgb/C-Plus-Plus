#include <iostream>

using namespace std;

int main()
{
    try
    {
        int num1;
        cout << "Enter first number: " << endl;
        cin >> num1;

        int num2;
        cout << "Enter second number: " << endl;
        cin >> num2;

        if (num2 == 0)
        {
            throw 0;
        }
        cout << num1 / num2 << endl;
    }
    // catch (int x)
    catch (...) // Catch all execptions.
    {
        // cout << "You can't divide by: " << x << endl;
        cout << "You can't divide by that !" << endl;
    }

    return 0;
}