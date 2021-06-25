#include <iostream>

using namespace std;

template <class genericType>
genericType addCrap(genericType a, genericType b)
{
    return a + b;
}

int main()
{
    // int x = 7, y = 43, z;
    double x = 46.7, y = 25.69, z;

    z = addCrap(x, y);
    cout << z << endl;
    return 0;
}