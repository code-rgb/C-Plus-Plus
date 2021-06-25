#include <iostream>
#include <string>

using namespace std;

// NOTE: Avoid making variables public
// class demoClass
// {
// public:
//     string name;
// };
//
// int main()
// {
//     demoClass bo;
//     bo.name = "Steve Rogers";
//     return 0;
// }

class demoClass
{
public:
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