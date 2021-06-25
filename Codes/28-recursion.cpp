#include <iostream>

using namespace std;

int count = 0;

void printOut()
{
    cout << "Hakuna Matata" << endl;
    if (count < 15)
    {
        count++;
        printOut();
    }
}

int main()
{
    printOut();
    return 0;
}