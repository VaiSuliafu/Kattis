#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

// Support function
int eval(int a, int b, char op)
{
	switch (op)
	{
	case '+':
		return a + b;
	case '-':
		return a - b;
	case '/':
		return a / b;
	case '*':
		return a * b;
	}

	// In case something went wrong
	return -1;
}

int main()
{
	map<int, string> ans;
	map<int, char> m;

	// Initializing operator map
	m[0] = '*';
	m[1] = '/';
	m[2] = '+';
	m[3] = '-';

	// Loop for the first operator
	for (int i = 0; i < 4; ++i)
	{

		// Loop for the second operator
		for (int j = 0; j < 4; ++j)
		{

			// Loop for the third operator
			for (int k = 0; k < 4; ++k)
			{
				// Length 4 vector of 4's for us calculate all possible answers
				vector<int> nums = { 4,4,4,4 };

				// Vector of all current operators at this point (made so we can loop through this vector)
				vector<char> ops = { m[i], m[j], m[k] };

				// Looping through the current operation vector
				for (int it = 0; it < ops.size(); ++it)
				{
					// if the it'th operator is multiplication or division
					if (ops[it] == '*' || ops[it] == '/')
					{
						// Make the it'th element in nums the 'result' of eval() 
						nums[it] = eval(nums[it], nums[it + 1], ops[it]);

						// Erase the 1th element in the number vector
						nums.erase(nums.begin() + it + 1);

						// Erase the 0th element in the operation vector
						ops.erase(ops.begin() + it);

						// Now decrementing 'it' to nullify the incrementing done by the loop (we want to keep it at 0)
						--it;
					}
				}

				// Now doing the same for the other operators
				for (int it = 0; it < ops.size(); ++it)
				{
					nums[it] = eval(nums[it], nums[it + 1], ops[it]);
					nums.erase(nums.begin() + it + 1);
					ops.erase(ops.begin() + it);
					--it;
				}
				
				// Inserting the solution into our solution vector
				ans[nums[0]] = "4 " + string(1, m[i]) + " 4 " + string(1, m[j]) + " 4 " + string(1, m[k]) + " 4 = " + to_string(nums[0]);
			}
		}
	}

	// variable to represent the number of input lines
	int mm;

	// Getting the number of input lines
	cin >> mm;

	// while the number of remaining input lines is greater than 0
	while (mm--)
	{
		// variable to represent the line of input
		int n;

		// get the line of input
		cin >> n;

		// check if the input 'n' exists as a key in our answer map
		if (ans.find(n) != ans.end())
		{
			// print the value in our map for key 'n'
			cout << ans[n] << endl;
		}
		else
		{
			// print no solution
			cout << "no solution" << endl;
		}
	}

	return 0;
}