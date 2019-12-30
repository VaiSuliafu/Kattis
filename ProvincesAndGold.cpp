#include <iostream>
using namespace std;

int main ()
{
    int x, y, z;
    cin >> x >> y >> z;

    int buying_power = (3 * x) + (2 * y) + (z);

    string dominion;

    if (buying_power >= 8)
    {
        dominion = "Province";
    }
    else if (buying_power < 8 && buying_power >= 5)
    {
        dominion = "Duchy";
    }
    else if (buying_power < 5 && buying_power >=2)
    {
        dominion = "Estate";
    }
    else
    {
        dominion = "";
    }

    string coins;

    if (buying_power >= 6)
    {
        coins = "Gold";
    }
    else if (buying_power < 6 && buying_power >= 3)
    {
        coins = "Silver";
    }
    else
    {
        coins = "Copper";
    }

    if (dominion.length() > 0)
    {
        cout << dominion << " or " << coins << endl;
    }
    else
    {
        cout << coins << endl;
    }
    
    
    return 0;
}