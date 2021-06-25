#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream theFile("players.txt");

    int id;
    string name;
    double money;

    // False when File pointer is null (also no need to close file pointer)
    while (theFile >> id >> name >> money)
    {
        cout << id << ", " << name << ", " << money << endl;
    }

    return 0;
}