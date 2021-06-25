#include <iostream>

using namespace std;

int main()
{
    int myArray[9];

    cout << "Element  -  Value" << endl;
    for (int x = 0; x <= 8; x++)
    {
        myArray[x] = 99;
        cout << x << "   --------   " << myArray[x] << endl;
    }

    return 0;
}