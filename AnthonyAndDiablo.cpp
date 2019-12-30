#include<iostream> 

using namespace std;

int main ()
{
    double x, y;
    cin >> x >> y;

    if (y >= (4 * (x / x)))
    {
        cout << "Diablo is happy!" << endl;
    }
    else
    {
        cout << "Need more materials!" << endl;
    }

    return 0;   
}