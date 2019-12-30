#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main ()
{
    int n;
    cin >> n;

    int x;

    vector<int> int_vec;

    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        int_vec.push_back(x);
    }

    sort(int_vec.begin(), int_vec.end(), greater<int>());

    int running_sum = 0;
    int incrementor = 0;

    for (int j = 0; j < int_vec.size(); ++j)
    {
        incrementor++;

        if (incrementor % 3 != 0)
        {
            running_sum = running_sum + int_vec[j];
        }
    }

    cout << running_sum << endl;

    return 0;
}