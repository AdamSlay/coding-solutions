// CodeChef: Smallest Possible Whole Number - Practice Problem
// https://www.codechef.com/submit/SMOL

#include <iostream>

void smol()
{
    int n, k; std::cin >> n >> k;
    if (k == 0)
    {
        std::cout << n << "\n";
    }
    else
    {
        std::cout << n % k << "\n";
    }
}

int main()
{
    int t;std::cin >> t;
    while (t--)
    {
        smol();
    }
}
