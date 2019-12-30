#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    string line1, line2;
    cin >> line1 >> line2;

    int len = line1.length();
    int diff_count = 0;
    int same_count = 0;

    for (int i = 0; i < len; ++i)
    {
        if (line1.at(i) != line2.at(i))
        {
            diff_count += 1;
        }       
    }

    same_count = len - diff_count;
    int missed_count = len - x;

    int score = min(diff_count, missed_count) + min(x, same_count);
    cout << score << endl;

    return 0;
}

