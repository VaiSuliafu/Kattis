#include <iostream>
#include <sstream>
#include <set>

using namespace std;

int main ()
{
    string input_string;
    getline(cin, input_string);
    istringstream input_stream(input_string);
    int n;
    input_stream >> n;

    set<int, greater <int> > freefoodset;
    int total_answer = 0;


    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;

        for (int k = x; k <= y; k++)
        {
            freefoodset.insert(k);
        }
    }

    cout << freefoodset.size() << endl;

    return 0;
}