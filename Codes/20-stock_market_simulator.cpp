#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a;         // Amount
    float p = 10000; // Principal Amount
    float r = .03;   // Rate

    for (int day = 0; day <= 30; day++)
    {
        a = p * pow(1 + r, day);
        cout << day << " ----- " << a << endl;
    }

    return 0;
}