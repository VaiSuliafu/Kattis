#include <iostream>
#include <string>
#include <sstream>


int main()
{ 
    // Getting the number of input lines
    int n;
    std::cin >> n;

    // Declaring the string to hold the input
    std::string input_string;

    // While there are still input lines remaining
    while (n--)
    {
        // Read the next line into my string
        std::cin >> input_string;

        if (input_string != "P=NP")
        {
            // We will search for the plus string so we know the indicies to parse for
            std::string string_a, string_b, plus_string;
            plus_string = "+";

            // Searching for the plus string
            std::size_t found = input_string.find(plus_string);

            // Calculating the length to index by

            
            // Parrse the int sub strings into my new strings
            string_a = input_string.substr(0,found);
            string_b = input_string.substr(found + 1, input_string.length() - (found +1));

            // Create input string stream on sub strings
            std::istringstream my_stream(string_a);
            int a;
            my_stream >> a;

            // This way we can convert them to int type
            std::istringstream my_otherstream(string_b);
            int b;
            my_otherstream >> b;

            // Output their sums
            std::cout << a + b << std::endl;
        }
        else
        {
            std::cout << "skipped" << std::endl;
        }

    }
    return 0;
}