#include <iostream>
#include <string>

using namespace std;

class demoClass
{
public:
    demoClass() // Constructor
    {
        cout << "This will get printed automatically";
    }
    void setName(string x)
    {
        name = x;
    }
    string getName()
    {
        return name;
    }

private:
    string name;
};

int main()
{
    demoClass bo;
    bo.setName("Bucky");
    cout << bo.getName();
    return 0;
}