#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n = n + 1;

    string input_string;
    string simon = "Simon";
    string says = "says";
    string output_string;

    while (n--)
    {
        getline(cin, input_string);
        size_t found_Simon = input_string.find(simon);
        size_t found_says = input_string.find(says);

        if (found_Simon != string::npos && found_says != string::npos)
        {
            output_string = input_string.substr(found_says + 5, input_string.length() - (found_says + 5));
            cout << output_string << endl;
        }

    }

    return 0;

}