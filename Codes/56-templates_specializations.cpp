#include <iostream>

using namespace std;

template <class T>
class Spunky
{
public:
    Spunky(T x)
    {
        cout << x << " is not a character!" << endl;
    }
};

template <>
class Spunky<char>
{
public:
    Spunky(char x)
    {
        cout << x << " is indeed a character!" << endl;
    }
};

int main()
{
    Spunky<int> obj1(1);
    Spunky<double> obj2(69.420);
    Spunky<char> obj3('s');
    return 0;
}