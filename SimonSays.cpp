
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> lineToVector(string);

int main()
{
    // Getting initial line count int var
    int n;
    cin >> n;

    // Looping through all 'n' lines
    for (int i = 0; i <= n; ++i)
    {

        // Using std::getline to combine std::cin into a string
        string input_string;
        getline(cin, input_string);

        // Get the first and second string entries in vector
        string first = lineToVector(input_string)[0];
        string second = lineToVector(input_string)[1];

        // If the first two entires are Simon says
        if (first == "Simon" && second == "says")
        {
            // Getting number of tokens in vector for our loop
            // The -1 because the input stream duplicates last entry
           int token_Count = lineToVector(input_string).size() -1;

            // Looping through the vector and printing entries.
           for (int j = 2; j < token_Count; j = j + 1)
           {
               // If its the last word in the vector end with new line
               if (j != token_Count - 1)
               {
                   cout << lineToVector(input_string)[j] << " ";
               }
               else
               {
                   cout << lineToVector(input_string)[j] << endl;
               }
               
           }
        }
    }

    return 0;
}

/*
The below function takes an input string line and an
int index and returns the ith token from the line
where i = index
*/
vector<string> lineToVector(string input_string)
{
    // Declaring word variable
    string word;

    // Declaring vector of strings
    vector<string> string_vector;

    // Creating an input stream on the input string line
    istringstream my_stream(input_string);

    // While input stream connection is successful
    while (my_stream)
    {
        if (my_stream)
        {
            my_stream >> word;
            string_vector.push_back(word);
        }   
    }

    return string_vector;
}