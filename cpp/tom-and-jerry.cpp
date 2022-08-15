// CodeChef: Tom and Jerry 1 - Practice Problem
// https://www.codechef.com/submit/TANDJ1

#include <iostream>

void tj()
{
    int tx, ty, jx, jy, steps;
    std::cin >> tx >> ty >> jx >> jy >> steps;
    // if dx + dy >= steps, 
    // does ((dx + dy) - steps) % 2 == 0?
    const int dp = abs(tx - jx) + abs(ty - jy);
    if (dp <= steps && (dp - steps) % 2 == 0)
    {
        std::cout << "YES" << "\n";
    }
    else
    {
        std::cout << "NO" << "\n";
    }
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        tj();
    }
}
