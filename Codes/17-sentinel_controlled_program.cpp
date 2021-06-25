#include <iostream>

using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int numberOfPeopleEntered = 0;

    cout << "Enter first persons age or -1 to quit" << endl;
    cin >> age;

    while (age != -1)
    {
        ageTotal += age;
        numberOfPeopleEntered++;

        cout << "Enter first persons age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of People Entered:" << numberOfPeopleEntered << endl;
    cout << "Average Age: " << ageTotal / numberOfPeopleEntered << endl;

    return 0;
}