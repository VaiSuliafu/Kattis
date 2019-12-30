#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x, y;
    cin >> x;

    vector<int> vec;

    int z = 1;

    for (int i = 0; i < x; ++i)
    {
        cin >> y;

        if (z < y)
        {
            while (z < y)
            {
                vec.push_back(z);
                z++;
            }
        }
        z++;
    }

    if (vec.size() > 0)
    {
        for (int j = 0; j < vec.size(); ++j)
        {
            cout << vec.at(j) << endl;
        }
    }
    else
    {
        cout << "good job" << endl;
    }
    

    return 0;
}