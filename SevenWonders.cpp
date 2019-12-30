#include <iostream>
#include <string>

using namespace std;

int main () 
{
    string input_string;
    cin >> input_string;

    int t = 0;
    int c = 0;
    int g = 0;

    for (int i = 0; i < input_string.length(); ++i)
    {
        if (input_string.at(i) == 'T')
        {
            t += 1;
        }
        if (input_string.at(i) == 'C')
        {
            c += 1;
        }
        if (input_string.at(i) == 'G')
        {
            g += 1;
        }
    }

    
    int full_set_multiplier = min(min(t, c), g) * 7;
    int result = (t * t) + (c * c) + (g * g) + full_set_multiplier;
    cout << result << endl;

    return 0;
}