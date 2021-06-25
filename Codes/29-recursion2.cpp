#include <iostream>

using namespace std;

int factorialFinder(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorialFinder(x - 1);
    }
}

int main()
{
    cout << factorialFinder(0) << endl;
    return 0;
}