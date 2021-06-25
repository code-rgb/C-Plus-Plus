#include <iostream>

using namespace std;

int volume(int l = 1, int w = 1, int h = 1);

int main()
{
    cout << volume() << endl;
    cout << volume(5) << endl;
    cout << volume(1, 2, 3) << endl;
    return 0;
}

int volume(int l, int w, int h)
{
    return l * w * h;
}