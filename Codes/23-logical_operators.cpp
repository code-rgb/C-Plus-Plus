#include <iostream>

using namespace std;

int main()
{
    int age = 23;
    int money = 650;

    // Without Logical Operators
    // if (age > 21)
    // {
    //     if (money > 500)
    //     {
    //         cout << "You are allowed" << endl;
    //     }
    // }

    // With Logical Operators
    // && -> AND
    if (age > 21 && money > 500)
    {
        cout << "You are allowed" << endl;
    }
    // || -> OR
    if (age > 21 || money > 500)
    {
        cout << "You are allowed" << endl;
    }

    return 0;
}