#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream buckysFile("");
    if (buckysFile.is_open())
    {
        cout << "Ok file is open" << endl;
    }
    else
    {
        cout << "File is not Open" << endl;
    }

    buckysFile << "Wakanda Forever !\n";
    buckysFile.close();
    return 0;
}