#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string x;
    // getline(cin, x);
    // cout << "The string i entered is: " << x << endl;

    string s1("Hamster");
    string s2;
    string s3;

    s2 = s1;
    s3.assign(s1);

    cout << s1 << ", " << s2 << ", " << s3 << endl;

    string s4("omgwtfbbq");
    cout << s4.at(3);

    for (int x = 0; x < s4.length(); x++)
    {
        cout << s4.at(x) << endl;
    }

    return 0;
}