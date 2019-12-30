#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string x;
    cin >> x;

    string::iterator itr;

    itr = unique(x.begin(), x.end());
    x.resize(distance(x.begin(), itr));

    cout << x << endl;

    return 0;
}