#include <iostream>

using namespace std;

void passByValue(int x);
void passByReference(int *x);

int main()
{
    int bella = 13;
    int sandy = 13;

    passByValue(bella);
    passByReference(&sandy);

    cout << "Bella is now " << bella << endl;
    cout << "Sandy is now " << sandy << endl;
    return 0;
}

void passByValue(int x)
{
    x = 99;
}

void passByReference(int *x)
{
    *x = 66;
}