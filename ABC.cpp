#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void returnMiddle(int x, int y, int z, int a, int& b, int c)
{
    vector<int> myvector;
    myvector.push_back(x);
    myvector.push_back(y);
    myvector.push_back(z);

    for (int i = 0; i < myvector.size(); ++i)
    {
        if (myvector[i] != a && myvector[i] != c)
        {
                b = myvector[i];
        }
    }
}

int main ()
{
    int x, y, z;
    int a, b, c = -1;

    std::string order;

    cin >> x >> y >> z;
    cin >> order;

    // Determing order
    c = max(max(x, y), z);
    a = min(min(x, y), z);

    returnMiddle(x, y, z, a, b, c);

    for (int i = 0; i < order.length(); ++i)
    {
        if (order.at(i) == 'A')
        {
            cout << a << " ";
        }
        else if (order.at(i) == 'B')
        {
            cout << b << " ";
        }
        else
        {
            cout << c << " ";
        }
    }
    return 0;
}