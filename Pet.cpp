#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d;
    int running_sum = 0;
    int new_sum = 0;
    int running_inc = 0;

    for (int i = 0; i < 5; ++i)
    {
        cin >> a >> b >> c >> d;
        new_sum = a + b + c + d;
        if (new_sum > running_sum)
        {
            running_sum = new_sum;
            running_inc = i + 1;
        }
    }

    cout << running_inc << " " << running_sum;
    
    return 0;
}