#include <iostream>

using namespace std;

int addNumbers(int x, int y)
{
    int answer = x + y;
    return answer;
}

int main()
{
    cout << addNumbers(60, 9) << endl;
    return 0;
}