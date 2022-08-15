// CodeChef: Distinct Pair Sums - Practice Problem
// https://www.codechef.com/submit/MANYSUMS

#include <iostream>

void MANYSUMS()
{
    int l, r;
    std::cin >> l >> r;
    int diff = (r - l) * 2;
    std::cout << diff + 1 << "\n";
}

int main()
{
    int t; std::cin >> t;
    while (t--)
    {
        MANYSUMS();
    }
}
