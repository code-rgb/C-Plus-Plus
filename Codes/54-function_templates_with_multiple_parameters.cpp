#include <iostream>

using namespace std;

template <class First, class Second>

First smaller(First a, Second b)
{
    // if a < b return a else return b
    return (a < b ? a : b);
}

int main()
{
    int x = 89;
    double y = 56.78;

    cout << smaller(x, y) << endl;
    return 0;
}