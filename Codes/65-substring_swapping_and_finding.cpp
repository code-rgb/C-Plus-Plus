#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1("I am Batman");
    cout << s1.substr(2, 2) << endl; // am

    string one("apple");
    string two("beans");

    cout << one << "  " << two << endl;
    one.swap(two); // Swaps string
    cout << one << "  " << two << endl;

    string s2("ham is spam oh yes i am");
    cout << s2.find("am") << endl;  // find
    cout << s2.rfind("am") << endl; // reverse find
    return 0;
}