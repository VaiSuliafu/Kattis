#include <iostream>
using namespace std;

void moveA(int& current_position)
{
    if (current_position == 1)
    {
        current_position = 2;
    }
    else if (current_position == 2)
    {
        current_position = 1;
    }
}
void moveB(int& current_position)
{
    if (current_position == 2)
    {
        current_position = 3;
    }
    else if (current_position == 3)
    {
        current_position = 2;
    }
}

void moveC(int& current_position)
{
    if (current_position == 3)
    {
        current_position = 1;
    }
    else if (current_position == 1)
    {
        current_position = 3;
    }
}

int main()
{
    string move_sequence;
    cin >> move_sequence;

    int current_position = 1;

    for (int i = 0; i < move_sequence.length(); ++i)
    {
        if (move_sequence.at(i) == 'A')
        {
            moveA(current_position);
        }
        else if (move_sequence.at(i) == 'B')
        {
            moveB(current_position);
        }
        else
        {
            moveC(current_position);
        }
        
    }
    cout << current_position;

    return 0;
}