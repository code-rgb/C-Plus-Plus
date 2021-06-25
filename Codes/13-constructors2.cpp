#include <iostream>
#include <string>

using namespace std;

class demoClass
{
public:
    demoClass(string z)
    {
        setName(z);
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
    demoClass bo("Steve Rogers");
    cout << bo.getName() << endl;
    demoClass bo2("Sally Bollywood");
    cout << bo2.getName() << endl;
    return 0;
}