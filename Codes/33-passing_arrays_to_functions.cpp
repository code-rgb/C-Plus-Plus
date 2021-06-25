#include <iostream>

using namespace std;

// Fuction prototype
void printArray(int theArray[], int sizeOfArray);

int main()
{
    int tuna[5] = {1, 2, 3, 4, 5};
    printArray(tuna, 5);
    return 0;
}

void printArray(int theArray[], int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << theArray[i] << endl;
    }
}