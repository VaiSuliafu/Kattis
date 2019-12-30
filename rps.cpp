#include <string>
using namespace std;

std::string rps(const std::string &p1, const std::string &p2)
{
    std::string r, p, s, result, d, p1w, p2w;
    r = "rock";
    p = "paper";
    s = "scissors";
    d = "Draw!";
    p1w = "Player 1 won!";
    p2w = "Player 2 won!";

    if (p1 == r && p2 == r)
    {
        return d;
    }
    else if (p1 == r && p2 == s)
    {
        return p1w;
    }
    else if (p1 == r && p2 == p)
    {
        return p2w;
    }

    if (p1 == p && p2 == p)
    {
        return d;
    }
    else if (p1 == p && p2 == r)
    {
        return p1w;
    }
    else if (p1 == p && p2 == s)
    {
        return p2w;
    }

    if (p1 == s && p2 == s)
    {
        return d;
    }
    else if (p1 == s && p2 == p)
    {
        return p1w;
    }
    else if (p1 == s && p2 == r)
    {
        return p2w;
    }
}

int main()
    {
        string result;
        result = rps("rock", "rock");
        cout << result << endl;
        return 0;
    }