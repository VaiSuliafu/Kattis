#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int printer_count = 1;
    int day_count = 0;
    bool printing = true;

while(printing)
{
    day_count += 1;

    if (printer_count >= n)
    {
        cout << day_count << endl;
        printing = false;
    }
    else if (printer_count < n)
    {
        printer_count *= 2;
    }
    
}

    return 0;
}