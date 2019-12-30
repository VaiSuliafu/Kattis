#include <iostream>
using namespace std;

int main()
{
    string x;
    cin >> x;
    string letter = "";

    for (int i = 0; i < x.length(); ++i)
    {
        if (x[i] == x[i + 1] && x.at(i) == 's')
        {
            letter = "y";
            break;
        }
        else
        {
            letter = "n";
        }
    }

    if (letter == "y")
    {
        cout << "hiss";
    }
    else
    {
        cout << "no hiss";
    } 

    return 0;
}