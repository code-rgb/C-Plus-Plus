#include <iostream>

using namespace std;

class demoClass // Class declaration
{
public: // Access specifier
    void coolSaying()
    {
        cout << "Preaching to the choir" << endl;
    }
};

int main()
{
    demoClass rgbObject; // Object
    rgbObject.coolSaying();
    return 0;
}