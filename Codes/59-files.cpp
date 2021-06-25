#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream buckysFile;
    buckysFile.open("tuna.txt");
    buckysFile << "I love tuna and tuna loves me!\n";
    buckysFile.close();
    return 0;
}