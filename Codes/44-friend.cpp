// https://www.youtube.com/watch?v=6U42W0A4ov4
#include <iostream>

using namespace std;

class StankFist
{
public:
    StankFist()
    {
        stinkyVar = 0;
    }

private:
    int stinkyVar;
    friend void stinkyFriend(StankFist *sfo);
};

void stinkyFriend(StankFist *sfo)
{
    StankFist x = *sfo;
    x.stinkyVar = 99;
    cout << x.stinkyVar << endl;
}

int main()
{
    StankFist bob;
    stinkyFriend(&bob);
}
