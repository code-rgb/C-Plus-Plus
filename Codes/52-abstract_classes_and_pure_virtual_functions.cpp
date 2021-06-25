#include <iostream>

using namespace std;

class Enemy
// Abstract class is a class that has a pure virtual function in it.
{
public:
    // Pure virtual function
    // (overriding is must else raises error.)
    virtual void attack() = 0;

    // Regular virtual function
    // (overriding is optional)
    // virtual void attack()
    // {
    //     cout << "I am an Enemy :X" << endl;
    // }
};

class Ninja : public Enemy
{
public:
    // Override
    void attack()
    {
        cout << "Ninja attack!" << endl;
    }
};

class Monster : public Enemy
{
public:
    // Override
    void attack()
    {
        cout << "Monster attack!!!" << endl;
    }
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();
    return 0;
}