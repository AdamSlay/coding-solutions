// CodeChef: Chef and Stock Prices - Practice Problem
// https://www.codechef.com/submit/CSTOCK

#include <iostream>

void stonks()
{
    int s, a, b;
    double c;
    std::cin >> s >> a >> b >> c;
    const int perc = s + ((c / 100) * s);
    if ((perc >= a) && (perc <= b))
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
    int t;
    std::cin >> t;
    while (t--)
    {
        stonks();
    }

}
