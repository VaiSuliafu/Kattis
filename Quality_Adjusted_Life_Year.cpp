#include <iostream>

using namespace std;

int main()
{
	int n;
	double x, y, total;

	cin >> n;

	total = 0.0;

	while (n--)
	{
		cin >> x;
		cin >> y;

		total += x * y;
	}

	cout << total << endl;

	return 0;
}