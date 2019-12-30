#include <iostream>

using namespace std;

int main()
{   
    // Delcaring interger variables and assinging values using std::cin
    int a, b;
    cin >> a >> b;
    
    // Adding 15 because it is the same as decreasing by 45 for range 0-60
    // ex. 15 + 15 = 30, and 15 - 45 = 0 - 30 = 30
    b = b + 15;

    // Checking if the 'floor' of b / 60 is equal to 0
    // For any numerator less than the dividend, n / d will always floor to 0

    // Behavior if 'minute' is less than 60
    if (b / 60 == 0)
    {
        a = a - 1;
    }
    // Behavior if 'minute' is greater than 60
    // Else return the modulus of b mod 60
    else 
    {
        b = b % 60;
    }

    // Checking for when the hour is negative
    if (a < 0)
    {
        a = a + 24;
    }

    cout << a << " " << b;

    return 0;

}