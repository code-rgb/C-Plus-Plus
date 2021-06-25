#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // rand(): complex algorithm
    // srand: Seed random number (changes the algorithm)
    // time(0): Changes every second
    // Hence we truly random numbers in rand()
    srand(time(0));

    for (int x = 0; x < 25; x++)
    {
        cout << 1 + (rand() % 6) << endl;
    }

    return 0;
}