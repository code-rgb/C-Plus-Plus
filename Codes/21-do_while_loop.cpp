#include <iostream>

using namespace std;

int main()
{
    int x = 20;

    // Runs code atleast one time then test it.
    do
    {
        cout << x << endl;
        x++;
    } while (x < 10);

    return 0;
}