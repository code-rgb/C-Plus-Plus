#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("hi my name is name and i love love");
    cout << s1 << endl;

    // s1.erase(14);
    // cout << s1 << endl;

    // s1.replace(14, 4, "Samuel Jackson");
    // cout << s1 << endl;

    s1.insert(14, "lucky ");
    cout << s1 << endl;

    return 0;
}