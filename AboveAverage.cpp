#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

int main ()
{
    string input_string;
    getline(cin, input_string);
    istringstream row_stream(input_string);
    int n;
    row_stream >> n;

    for (int i = 0; i < n; ++i)
    {
        double x;
        double iterator;
        double y;
        double running_sum = 0;
        double average;
        

        cin >> x;
        iterator = x;
        vector<double> score_vec;

        while (iterator--)
        {
            cin >> y;
            score_vec.push_back(y);
            running_sum += y;
        }

        average = running_sum / x;
        double score = 0;

        for (int j = 0; j < score_vec.size(); ++j)
        {
            if (score_vec[j] > average)
            {
                score += 1;
            }
        }

        double final_score = (score / x) * 100;
        cout << setprecision(3) << fixed << final_score << "%" << endl;
        

    }
    return 0;
}