#include <iostream>
#include <fstream>

using namespace std;

int getWhatTheyWant();
void displayItems(int x);

//  main function
int main()
{
    int whatTheyWant;

    whatTheyWant = getWhatTheyWant();

    while (whatTheyWant != 4)
    {
        whatTheyWant = getWhatTheyWant();
        switch (whatTheyWant)
        {
        case 1:
            displayItems(1);
            break;
        case 2:
            displayItems(2);
            break;
        case 3:
            displayItems(3);
            break;

        default:
            break;
        }
    }

    return 0;
}

//  get what they want function
int getWhatTheyWant()
{
    int choice;
    cout << "\n1 - just plain items" << endl;
    cout << "2 - just helpful items" << endl;
    cout << "3 - just harmful items" << endl;
    cout << "4 - quit program" << endl;

    cin >> choice;
    return choice;
}

// display items function
void displayItems(int x)
{
    ifstream objectFile("objects.txt");
    string name;
    double power;

    if (x == 1)
    {
        while (objectFile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }

    if (x == 2)
    {
        while (objectFile >> name >> power)
        {
            if (power > 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }

    if (x == 3)
    {
        while (objectFile >> name >> power)
        {
            if (power < 0)
            {
                cout << name << " " << power << endl;
            }
        }
    }
}